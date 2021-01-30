//
// Created by harak on 2021-01-25.
//

#ifndef DARK_FORCE_GAMEFUNCTIONS_H
#define DARK_FORCE_GAMEFUNCTIONS_H

#endif //DARK_FORCE_GAMEFUNCTIONS_H

struct PlayerScript {
    DWORD PlayerAliveOffset;
    bool (*PlayerAlive)(void *_instance, bool ignoreForcePosition);
    DWORD ShootOffset;
    void (*Shoot)(void *_instance);
    DWORD GetPlayerAimingAtOffset;
    void *(*GetPlayerAimingAt)(void *_instance);
    DWORD HeadshottedOffset;
    void *(*Headshotted)(void *_instance);
    DWORD SendChatMessageOffset;
    void (*SendChatMessage)(void *_instance, monoString *message, Color color);
    DWORD dieOffset;
    void (*die)(void *_instance);
    DWORD RespawnOffset;
    void (*Respawn)(void *_instance);
    DWORD SpawnedFailedOffset;
    void (*SpawnedFailed)(void *_instance);
    DWORD SwitchTeamsOffset;
    void (*SwitchTeams)(void *_instance);
    DWORD throwGrenadeOffset;
    void (*throwGrenade)(void *_instance);
    DWORD jumpOffset;
    void (*jump)(void *_instance);
    DWORD usekillstreakOffset;
    void (*usekillstreak)(void *_instance, int type);
    DWORD SetExplosionForcePositionOffset;
    void (*SetExplosionForcePosition)(void *_instance, Vector3 pos);
    DWORD get_healthOffset;
    float (*get_health)(void *_instance);
    DWORD UpdateFastOffset;
    void (*UpdateFast)(void *_instance);
}PlayerScript;

struct PlayerUtils {
    DWORD IsPlayerOnTeamOffset;
    bool (*IsPlayerOnTeam)(void *a, void *b);
}PlayerUtils;

struct PhotonView {
    DWORD get_ownerOffset;
    void *(*get_owner)(void *_instance);
    DWORD get_isMineOffset;
    bool (*get_isMine)(void *_instance);
}PhotonView;

struct PhotonNetwork {
    DWORD get_playerOffset;
    void *(*get_player)();
}PhotonNetwork;

struct PhotonPlayer {
    DWORD set_NickNameOffset;
    void (*set_NickName)(void *_instance, monoString *value);
}PhotonPlayer;

void AssignPointers()
{
    PlayerScript.UpdateFastOffset = getAbsoluteAddress(0x56934C);
    PlayerScript.UpdateFast = (void(*)(void*))PlayerScript.UpdateFastOffset;

    PlayerScript.PlayerAliveOffset = getAbsoluteAddress(0x56DB70);
    PlayerScript.PlayerAlive = (bool(*)(void*, bool))PlayerScript.PlayerAliveOffset;

    PlayerScript.ShootOffset = getAbsoluteAddress(0x54AD8C);
    PlayerScript.Shoot = (void (*)(void*))PlayerScript.ShootOffset;

    PlayerUtils.IsPlayerOnTeamOffset = getAbsoluteAddress(0x63D4CC);
    PlayerUtils.IsPlayerOnTeam = (bool(*)(void *, void *))PlayerUtils.IsPlayerOnTeamOffset;

    PlayerScript.GetPlayerAimingAtOffset = getAbsoluteAddress(0x563690);
    PlayerScript.GetPlayerAimingAt = (void *(*)(void*))PlayerScript.GetPlayerAimingAtOffset;

    PhotonView.get_ownerOffset = getAbsoluteAddress(0x6F1520);
    PhotonView.get_owner = (void *(*)(void*))PhotonView.get_ownerOffset;

    PhotonView.get_isMineOffset = getAbsoluteAddress(0x6D4A34);
    PhotonView.get_isMine = (bool(*)(void*))PhotonView.get_isMineOffset;

    PlayerScript.HeadshottedOffset = getAbsoluteAddress(0x524A54);
    PlayerScript.Headshotted = (void *(*)(void*))PlayerScript.HeadshottedOffset;

    PhotonNetwork.get_playerOffset = getRealOffset(0x6DBED8);
    PhotonNetwork.get_player = (void *(*)())PhotonNetwork.get_playerOffset;

    PhotonPlayer.set_NickNameOffset = getRealOffset(0x6EA6CC);
    PhotonPlayer.set_NickName = (void(*)(void*, monoString*))PhotonPlayer.set_NickNameOffset;

    PlayerScript.SendChatMessageOffset = getRealOffset(0x536F6C);
    PlayerScript.SendChatMessage = (void(*)(void*, monoString*, Color))PlayerScript.SendChatMessageOffset;

    PlayerScript.dieOffset = getRealOffset(0x532A18);
    PlayerScript.die = (void(*)(void*))PlayerScript.dieOffset;

    PlayerScript.RespawnOffset = getRealOffset(0x52E90C);
    PlayerScript.Respawn = (void(*)(void*))PlayerScript.RespawnOffset;

    PlayerScript.SpawnedFailedOffset = getRealOffset(0x524CF0);
    PlayerScript.SpawnedFailed = (void(*)(void*))PlayerScript.RespawnOffset;

    PlayerScript.SwitchTeamsOffset = getRealOffset(0x55CD1C);
    PlayerScript.SwitchTeams = (void(*)(void*))PlayerScript.SwitchTeamsOffset;

    PlayerScript.throwGrenadeOffset = getRealOffset(0x553C54);
    PlayerScript.throwGrenade = (void(*)(void*))PlayerScript.throwGrenadeOffset;

    PlayerScript.jumpOffset = getRealOffset(0x547C58);
    PlayerScript.jump = (void(*)(void*))PlayerScript.jumpOffset;

    PlayerScript.usekillstreakOffset = getRealOffset(0x519FFC);
    PlayerScript.usekillstreak = (void(*)(void*, int))PlayerScript.usekillstreakOffset;

    PlayerScript.SetExplosionForcePositionOffset = getRealOffset(0x53E02C);
    PlayerScript.SetExplosionForcePosition = (void(*)(void*, Vector3))PlayerScript.SetExplosionForcePositionOffset;

    PlayerScript.get_healthOffset = getRealOffset(0x52926C);
    PlayerScript.get_health = (float(*)(void*))PlayerScript.get_healthOffset;
}