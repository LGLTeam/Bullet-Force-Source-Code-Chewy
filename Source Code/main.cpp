#include <pthread.h>
#include <jni.h>
#include <memory.h>
#include <dlfcn.h>
#include <cstdio>
#include <cstdlib>
#include <Includes/RGBChanger.h>
#include <Includes/Vector3.h>
#include <Includes/Vector2.h>
#include <Includes/Quaternion.h>
#include <Includes/Rect.h>

#include "Includes/Logger.h"
#include "Patching/Patch.h"
#import "Includes/Utils.h"
#include "Includes/Chams.h"
#include "Includes/Color.h"
#include "Includes/Strings.h"
#include "Includes/GameFunctions.h"
#include "Includes/UnityEngine.CoreModule.h"


#if defined(__armv7__)
#include "X64Hook/And64InlineHook.hpp"
#else
#include "Substrate/CydiaSubstrate.h"
#endif

bool isAimbot = false;
bool isNoSpread = false;
bool isChatSpam = false;
bool isKillAssist = false;
bool isHideGun2 = false;
bool isAddKill = false;
bool isAddDeaths = false;
bool isHideGun = false;
bool isFakeKills = false;
bool isFakeDeaths = false;
bool isName = false;
bool isScaleUp = false;
bool isScaleDown = false;
bool allowspeed = false;
bool isRestartGame = false;
bool isFireRate = false;
bool isRecoil1 = false;
bool isRecoil2 = false;
bool isKillstreak2 = false;
bool isRadar = false;
bool isEspH = false;
bool isHasPerk = false;
bool isAntidead = false;

int speedModifier = 1;


struct Patches{
    Patch *FireRate;
    Patch *Recoil1;
    Patch *Recoil2;
    Patch *Killstreak;
    Patch *Radar;
    Patch *EspH;
    Patch *HasPerk;
    Patch *Antidead;
}patch;

bool speedHackDetectorHook = false;
bool GameManagerLateUpdateHookInitialized = false;
bool TabListItemUpdateHookInitialized = false;
bool MatchManagerUpdateHookInitialized = false;

void *MyPlayer;

bool PlayerAlive(void* player)
{
    return PlayerScript.PlayerAlive(player, true);
}

void* GetTransform(void* playerscript)
{

    return *(void**)((uint64_t)playerscript + 0x65C);
}


void* closestEnemy;

float shortestDistance = 99999999.0f;
void getClosestEnemy(Vector3 myLocation, Vector3 enemyLocation, void *enemy) {
    float distanceToMe = Vector3::Distance( myLocation, enemyLocation);
    float distanceToCE;
    if(closestEnemy != nullptr) {
        distanceToCE = Vector3::Distance(myLocation, UnityEngine::Transform.get_position(GetTransform(closestEnemy)));
    } else{
        distanceToCE = 99999999.0f;
    }
    if (PlayerAlive(enemy) && distanceToMe < shortestDistance || distanceToMe < distanceToCE) {
        shortestDistance = distanceToMe;
        closestEnemy = enemy;
    }
    else if(closestEnemy)
    {
        if(!PlayerAlive(closestEnemy))
        {
            shortestDistance = 999999999.0f;
        }
    }
}

bool is_shooting(void* myplayer) {
    return *(int *)((uint64_t)myplayer + 0x86C);
}



void StartAimbot(void* myplayer, void *enemyplayer) {
    Vector3 myPosition = UnityEngine::Transform.get_position(GetTransform(myplayer));
    Vector3 ePosition = UnityEngine::Transform.get_position(GetTransform(enemyplayer));
    getClosestEnemy(myPosition, ePosition, enemyplayer);
    Vector3 cePosition = UnityEngine::Transform.get_position(GetTransform(closestEnemy));
    Quaternion rotation = Quaternion::LookRotation(cePosition - Vector3(0, 0.5f, 0) - myPosition);

    if(is_shooting(myplayer)) {
        *(Quaternion *) ((uint64_t) myplayer + 0x7C4) = rotation;
    }
}



void MeScaleUp(void* myplayer) {
    Vector3 mysize = UnityEngine::Transform.get_localScale(GetTransform(myplayer));
    Vector3 mysize2 = mysize + Vector3(0.5,0.5,0.5);
    UnityEngine::Transform.set_localScale(GetTransform(myplayer), mysize2);
}

void MeScaleDown(void* myplayer) {
    Vector3 mysize = UnityEngine::Transform.get_localScale(GetTransform(myplayer));
    Vector3 mysize2 = mysize + Vector3(-0.5, -0.5, -0.5);
    UnityEngine::Transform.set_localScale(GetTransform(myplayer), mysize2);
}


bool get_isMine(void *Player){
    return *(bool *)((uint64_t)Player + 0x519);
}

void (*SendChatMessage)(void *_instance, monoString *message, Color color);
void (*GotKillAssist)(void* _this, float amount);
void (*SetAllGunsVisibility)(void* _this, bool visible);
void (*UpdateMPKills)(void *_instance, int value, bool updateGunGameScore);
void (*UpdateMPDeaths)(void *_instance, int value);
void (*set_NickName)(void *_instance, monoString *value);
void *(*get_player)();

void(*old_PlayerScript_UpdateFast)(void *instance);
void PlayerScript_UpdateFast(void *instance)
{
    if(instance){
        if(get_isMine(instance)){
            MyPlayer = instance;
        } else {
            if (!PlayerUtils.IsPlayerOnTeam(MyPlayer, instance) && PlayerAlive(instance)) {
                if (isAimbot) {
                    StartAimbot(MyPlayer, instance);
                }
                if (isNoSpread) {
                    *(float *) ((uint64_t) MyPlayer + 0x82C) = 0.0f;
                }
                if (isChatSpam) {
                    SendChatMessage(MyPlayer, CreateMonoString("Whatever you want"), Color(0, 1, 1, 1));
                }
                if (isKillAssist) {
                    GotKillAssist(MyPlayer, 999.9f);
                }
                if (isHideGun2) {
                    SetAllGunsVisibility(MyPlayer, false);
                }
                if (isAddKill) {
                    UpdateMPKills(MyPlayer, 999, true);
                }
                if (isAddDeaths) {
                    UpdateMPDeaths(MyPlayer, 999);
                }
                if(isName) {
                    set_NickName(get_player(), CreateMonoString("<color=blue>[DEV]</color><color=pink> Chewy</color>"));
                }
                if(allowspeed) {
                    *(float *) ((uint64_t) MyPlayer + 0x8F4) = speedModifier;
                }
                if (isScaleUp) {
                    MeScaleUp(instance);
                }
                if (isScaleDown) {
                    MeScaleDown(instance);
                }
            }
        }
    }
    old_PlayerScript_UpdateFast(instance);
}

void(*old_SpeedHackDetector)(void *instance);
void SpeedHackDetector(void *instance) {
    if(instance != NULL) {
        if(!speedHackDetectorHook){
            speedHackDetectorHook = true;
            LOGI("GameManager_LateUpdate hooked");
            *(int *) ((uint64_t) instance + 0x24) = 0;
        }
    }
    old_SpeedHackDetector(instance);
}

void (*ShowGun)(void* _this, bool shouldShow);

void(*old_GunScript_UpdateFast)(void *instance);
void GunScript_UpdateFast(void *instance) {
    if(instance != NULL) {
        if(!GameManagerLateUpdateHookInitialized){
            GameManagerLateUpdateHookInitialized = true;
            LOGI("GameManager_LateUpdate hooked");
        }
        if (isHideGun) {
            ShowGun(instance, false);
        }
    }
    old_GunScript_UpdateFast(instance);
}

void (*updateNumberOfKills)(void *_instance, int k);
void (*updateNumberOfDeaths)(void *_instance, int d);

void(*old_TabListItem_Update)(void *instance);
void TabListItem_Update(void *instance) {
    if(instance != NULL) {
        if(!TabListItemUpdateHookInitialized){
            TabListItemUpdateHookInitialized = true;
            LOGI("GameManager_LateUpdate hooked");
        }
        if (isFakeKills) {
            updateNumberOfKills(instance, 9999);
        }
        if (isFakeDeaths) {
            updateNumberOfDeaths(instance, 0);
        }
    }
    old_TabListItem_Update(instance);
}

void (*RestartMatchAfterTime)(void *_instance, float time);

void(*old_MatchManager_UpdateFast)(void *instance);
void MatchManager_UpdateFast(void *instance) {
    if(instance != NULL) {
        if(!MatchManagerUpdateHookInitialized){
            MatchManagerUpdateHookInitialized = true;
            LOGI("GameManager_LateUpdate hooked");
        }
        if (isRestartGame) {
            RestartMatchAfterTime(instance, 2.0f);
        }
    }
    old_MatchManager_UpdateFast(instance);
}

void nopcode(void*) {return;}
void nop(DWORD offset)
{
    octo_hook((void*)getRealOffset(offset), (void*)nopcode, nullptr);
}

// we will run our patches in a new thread so our while loop doesn't block process main thread
void* hack_thread(void*) {
    LOGI("I have been loaded. Mwuahahahaha");
    // loop until our target library is found
    do {
        sleep(1);
    } while (!isLibraryLoaded(libName));
    LOGI("I found the il2cpp lib. Address is: %p", (void*)findLibrary(libName));
    LOGI("Hooking GameManager_LateUpdate");
    AssignPointers();
    AssignUnityPointers();
    mlovinit();
    setShader("_BumpMap");
    Wallhack();

    SendChatMessage = (void(*)(void*, monoString*, Color))getRealOffset(0x536F6C);
    GotKillAssist = (void (*)(void*, float))getRealOffset(0x544100);
    SetAllGunsVisibility = (void (*)(void*, bool))getRealOffset(0x55E5C4);
    UpdateMPKills = (void(*)(void*, int, bool))getRealOffset(0x52C178);
    UpdateMPDeaths = (void(*)(void*, int))getRealOffset(0x52D7EC);
    set_NickName = (void(*)(void*, monoString*))getRealOffset(0x6EA6CC);
    get_player = (void *(*)())getRealOffset(0x6DBED8);
    ShowGun = (void (*)(void*, bool))getRealOffset(0x7E4490);
    updateNumberOfKills = (void(*)(void*, int))getRealOffset(0x5B5CDC);
    updateNumberOfDeaths = (void(*)(void*, int))getRealOffset(0x5B5D34);
    RestartMatchAfterTime = (void(*)(void*, float))getRealOffset(0x5FEA64);

    octo_hook((void*)PlayerScript.UpdateFastOffset, (void *)PlayerScript_UpdateFast, (void **) &old_PlayerScript_UpdateFast);
    octo_hook((void*)getRealOffset(0xF6E640), (void*)SpeedHackDetector, (void**)&old_SpeedHackDetector);
    octo_hook((void*)getRealOffset(0x7E7884), (void*)GunScript_UpdateFast, (void**)&old_GunScript_UpdateFast);
    octo_hook((void*)getRealOffset(0x5B8304), (void*)TabListItem_Update, (void**)&old_TabListItem_Update);
    octo_hook((void*)getRealOffset(0x60571C), (void*)MatchManager_UpdateFast, (void**)&old_MatchManager_UpdateFast);

    patch.FireRate = Patch::Setup((void*)getAbsoluteAddress(0x54B3A0), (char*)"\01\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //CanShoot
    patch.Recoil1 = Patch::Setup(   (void*)getAbsoluteAddress(0x54C7C0), (char*)"\x00\xF0\x20\xE3\x1E\xFF\x2F\xE1", 8); //IncreaseGunRecoil
    patch.Recoil2 = Patch::Setup((void*)getAbsoluteAddress(0x54CF14), (char*)"\x00\xF0\x20\xE3\x1E\xFF\x2F\xE1", 8); //IncreaseCameraRecoil
    patch.Killstreak = Patch::Setup((void*)getAbsoluteAddress(0xF0F5A0), (char*)"\00\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //ResetCurrentKillStreak
    patch.Radar = Patch::Setup((void*)getAbsoluteAddress(0xEC5100), (char*)"\01\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //Show$$MinimapItem
    patch.EspH = Patch::Setup((void*)getAbsoluteAddress(0xEC87D8), (char*)"\00\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //HideAll$$NameTagScript
    patch.HasPerk = Patch::Setup((void*)getAbsoluteAddress(0x5324CC), (char*)"\01\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //HasPerk$$PlayerScript
    patch.Antidead = Patch::Setup((void*)getAbsoluteAddress(0x532E04), (char*)"\00\00\xA0\xE3\x1E\xFF\x2F\xE1", 8); //RpcDie

    Patch::Setup((void*)getAbsoluteAddress(0xF6C400), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetectionInternal
    Patch::Setup((void*)getAbsoluteAddress(0xF6C630), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetection
    Patch::Setup((void*)getAbsoluteAddress(0xF6CC60), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StartDetectionInternal(Action callback)
    Patch::Setup((void*)getAbsoluteAddress(0xF6CE64), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetection
    Patch::Setup((void*)getAbsoluteAddress(0xF6FD9C), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetection
    Patch::Setup((void*)getAbsoluteAddress(0xF7129C), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetectionInternal
    Patch::Setup((void*)getAbsoluteAddress(0xF76C64), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetection
    Patch::Setup((void*)getAbsoluteAddress(0xF77A3C), (char*)"\x01\x00\xa0\xe3\x1e\xff\x2f\xe1", 8)->Apply(); //StopDetectionInternal

    nop(0xF30FAC); //OpLeaveLobby
    nop(0xF324A8); //OpLeaveRoom
    nop(0x68033C); //OnWallHackDetected
    nop(0x680284); //OnSpeedHackDetected
    nop(0x58A390); //OnInjectionDetected
    nop(0x58A444); //OnObscuredDetected
    nop(0x58A46C); //OnSpeedDetected
    nop(0x58A494); //OnTimeDetected
    nop(0x58A4BC); //OnWallDetected
    nop(0x6803FC); //IsEmulator
    nop(0x680888); //IsRootedOrJailbroken
    return NULL;
}

jobjectArray getListFT(JNIEnv *env, jclass jobj){
    jobjectArray ret;
    int i;
    const char *features[]= {
            "Chams",
            "AimBot",
            "No Spread + No Recoil",
            "Chat Spam",
            "Add KillAssist",
            "Hide Guns",
            "Add Kills",
            "Add Deaths",
            "Name Changer",
            "Player Scale Up",
            "Player Scale Down",
            "Hide GunV2 (Hides other peoples weapons)",
            "FakeKills",
            "FakeDeaths",
            "Reset Match Score",
            "Unlimited Ammo + Increased Fire Rate",
            "KillStreak Won't Reset",
            "Radar",
            "ESP",
            "All Perks + FullAuto Pistol",
            "GodMode (You Can't Kill People)",
            "!!!ALLOW FOR SPEED HACK!!!",
            "SeekBar_SpeedHack Modifier_0_250"
    };
    int Total_Feature = (sizeof features / sizeof features[0]); //Now you dont have to manually update the number everytime
    ret= (jobjectArray)env->NewObjectArray(Total_Feature,
                                           env->FindClass("java/lang/String"),
                                           env->NewStringUTF(""));

    for(i=0;i<Total_Feature;i++) {
        env->SetObjectArrayElement(
                ret,i,env->NewStringUTF(features[i]));
    }
    return(ret);
}


void changeToggle(JNIEnv *env, jclass thisObj, jint number) {
    int i = (int) number;
    switch (i) {
        case 0:
            enableWallhack = !enableWallhack;
            break;
        case 1:
            isAimbot = !isAimbot;
            break;
        case 2:
            isNoSpread = !isNoSpread;
            isRecoil1 = !isRecoil1;
            if (isRecoil1) {
                patch.Recoil1->Apply();
            } else {
                patch.Recoil1->Reset();
            }
            isRecoil2 = !isRecoil2;
            if (isRecoil2) {
                patch.Recoil2->Apply();
            } else {
                patch.Recoil2->Reset();
            }
            break;
        case 3:
            isChatSpam = !isChatSpam;
            break;
        case 4:
            isKillAssist = !isKillAssist;
            break;
        case 5:
            isHideGun2 = !isHideGun2;
            break;
        case 6:
            isAddKill = !isAddKill;
            break;
        case 7:
            isAddDeaths  = !isAddDeaths;
            break;
        case 8:
            isName = !isName;
            break;
        case 9:
            isScaleUp = !isScaleUp;
            break;
        case 10:
            isScaleDown = !isScaleDown;
            break;
        case 11:
            isHideGun = !isHideGun;
            break;
        case 12:
            isFakeKills = !isFakeKills;
            break;
        case 13:
            isAddDeaths = !isFakeDeaths;
            break;
        case 14:
            isRestartGame = !isRestartGame;
            break;
        case 15:
            isFireRate = !isFireRate;
            if (isFireRate) {
                patch.FireRate->Apply();
            } else {
                patch.FireRate->Reset();
            }
            break;
        case 16:
            isKillstreak2 = !isKillstreak2;
            if (isKillstreak2) {
                patch.Killstreak->Apply();
            } else {
                patch.Killstreak->Reset();
            }
            break;
        case 17:
            isRadar = !isRadar;
            if (isRadar) {
                patch.Radar->Apply();
            } else {
                patch.Radar->Reset();
            }
            break;
        case 18:
            isEspH = !isEspH;
            if (isEspH) {
                patch.EspH->Apply();
            } else {
                patch.EspH->Reset();
            }
            break;
        case 19:
            isHasPerk = !isHasPerk;
            if (isHasPerk) {
                patch.HasPerk->Apply();
            } else {
                patch.HasPerk->Reset();
            }
            break;
        case 20:
            isAntidead = !isAntidead;
            if (isAntidead) {
                patch.Antidead->Apply();
            } else {
                patch.Antidead->Reset();
            }
            break;
        case 21:
            allowspeed = !allowspeed;
            break;;
        default:
            break;
    }
    return;
}

void init(JNIEnv * env, jclass obj, jobject thiz){
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
    MakeToast(env, thiz, "ModMenu By Chewy - https://polarmods.com");
}

void changeSeekBar(JNIEnv *env, jclass clazz, jint i, jint seekbarValue) {
    int li = (int) i;
    switch (li) {
        case 22:
            speedModifier = seekbarValue;
            break;
        default:
            break;
    }
    return;
}

void changeSpinner(JNIEnv *env, jclass clazz, jint i, jstring value) {
    int li = (int) i;
    switch (li) {
        case 0:
            break;
        default:
            break;
    }
}

void changeEditText(JNIEnv *env, jclass clazz, jint i, jstring value){
    int li = (int) i;
    switch (li){
        default:
            break;
    }
    return;
}

extern "C"
JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }

    // Find your class. JNI_OnLoad is called from the correct class loader context for this to work.
    jclass c = env->FindClass("com/dark/force/NativeLibrary");
    if (c == nullptr) return JNI_ERR;

    // Register your class' native methods.
    static const JNINativeMethod methods[] = {
            {"changeEditText", "(ILjava/lang/String;)V", reinterpret_cast<void*>(changeEditText)},
            {"changeSeekBar", "(II)V", reinterpret_cast<void*>(changeSeekBar)},
            {"changeSpinner", "(ILjava/lang/String;)V", reinterpret_cast<void*>(changeSpinner)},
            {"changeToggle", "(I)V", reinterpret_cast<void*>(changeToggle)},
            {"getListFT", "()[Ljava/lang/String;", reinterpret_cast<void*>(getListFT)},
            {"init", "(Lcom/dark/force/MenuService;)V", reinterpret_cast<void*>(init)},
    };
    int rc = env->RegisterNatives(c, methods, sizeof(methods)/sizeof(JNINativeMethod));
    if (rc != JNI_OK) return rc;

    return JNI_VERSION_1_6;
}
