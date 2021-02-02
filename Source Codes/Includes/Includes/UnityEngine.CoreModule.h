#ifndef Toshi_UnityEngineCoreModuleh_H
#define Toshi_UnityEngineCoreModuleh_H
namespace AOT{
    struct MonoPInvokeCallbackAttribute {
    }MonoPInvokeCallbackAttribute;
}
namespace UnityCollectionsLowLevelUnsafe{
    struct NativeContainerAttribute {
    }NativeContainerAttribute;
    struct NativeContainerSupportsMinMaxWriteRestrictionAttribute {
    }NativeContainerSupportsMinMaxWriteRestrictionAttribute;
    struct NativeContainerSupportsDeallocateOnJobCompletionAttribute {
    }NativeContainerSupportsDeallocateOnJobCompletionAttribute;
    struct NativeContainerSupportsDeferredConvertListToArray {
    }NativeContainerSupportsDeferredConvertListToArray;
    struct WriteAccessRequiredAttribute {
    }WriteAccessRequiredAttribute;
    struct NativeDisableUnsafePtrRestrictionAttribute {
    }NativeDisableUnsafePtrRestrictionAttribute;
    struct NativeArrayUnsafeUtility {
    }NativeArrayUnsafeUtility;
    struct UnsafeUtility {
    }UnsafeUtility;
}
namespace UnityEngine{
    struct AndroidJNIHelper {
        DWORD get_debugOffset;
        bool (*get_debug)();
        DWORD set_debugOffset;
        void (*set_debug)(bool value);
        DWORD CreateJavaRunnableOffset;
        DWORD CreateJavaProxyOffset;
        DWORD ConvertToJNIArrayOffset;
    }AndroidJNIHelper;
    struct AndroidJNI {
        DWORD AttachCurrentThreadOffset;
        int (*AttachCurrentThread)();
        DWORD DetachCurrentThreadOffset;
        int (*DetachCurrentThread)();
        DWORD GetVersionOffset;
        int (*GetVersion)();
        DWORD FindClassOffset;
        DWORD ExceptionOccurredOffset;
        DWORD ExceptionDescribeOffset;
        void (*ExceptionDescribe)();
        DWORD ExceptionClearOffset;
        void (*ExceptionClear)();
        DWORD FatalErrorOffset;
        void (*FatalError)(monoString *message);
        DWORD PushLocalFrameOffset;
        int (*PushLocalFrame)(int capacity);
        DWORD EnsureLocalCapacityOffset;
        int (*EnsureLocalCapacity)(int capacity);
        DWORD NewStringUTFOffset;
        DWORD NewBooleanArrayOffset;
        DWORD NewByteArrayOffset;
        DWORD NewSByteArrayOffset;
        DWORD NewCharArrayOffset;
        DWORD NewShortArrayOffset;
        DWORD NewIntArrayOffset;
        DWORD NewLongArrayOffset;
        DWORD NewFloatArrayOffset;
        DWORD NewDoubleArrayOffset;
    }AndroidJNI;
    struct AndroidJNISafe {
        DWORD CheckExceptionOffset;
        void (*CheckException)();
        DWORD NewStringUTFOffset;
        DWORD FindClassOffset;
    }AndroidJNISafe;
    struct AndroidJavaObject {
        DWORD ctor7Offset;
        void (*ctor7)(void *_instance);
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
        DWORD GetRawObjectOffset;
        DWORD GetRawClassOffset;
        DWORD DebugPrintOffset;
        void (*DebugPrint)(void *_instance, monoString *msg);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD Dispose1Offset;
        void (*Dispose1)(void *_instance, bool disposing);
        DWORD _DisposeOffset;
        void (*_Dispose)(void *_instance);
        DWORD _GetRawObjectOffset;
        DWORD _GetRawClassOffset;
        DWORD FindClassOffset;
        void *(*FindClass)(monoString *name);
        DWORD get_JavaLangClassOffset;
        void *(*get_JavaLangClass)();
    }AndroidJavaObject;
    struct AndroidJavaClass {
        DWORD _AndroidJavaClassOffset;
        void (*_AndroidJavaClass)(void *_instance, monoString *className);
    }AndroidJavaClass;
    struct AndroidJavaRunnable {
        DWORD InvokeOffset;
        void (*Invoke)(void *_instance);
        DWORD EndInvokeOffset;
        void (*EndInvoke)(void *_instance, void *result);
    }AndroidJavaRunnable;
    struct AndroidJavaException {
        DWORD get_StackTraceOffset;
        monoString *(*get_StackTrace)(void *_instance);
    }AndroidJavaException;
    struct GlobalJavaObjectRef {
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD op_ImplicitOffset;
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
    }GlobalJavaObjectRef;
    struct AndroidJavaRunnableProxy {
        DWORD runOffset;
        void (*run)(void *_instance);
    }AndroidJavaRunnableProxy;
    struct AndroidJavaProxy {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, void *javaInterface);
        DWORD equalsOffset;
        bool (*equals)(void *_instance, void *obj);
        DWORD hashCodeOffset;
        int (*hashCode)(void *_instance);
        DWORD toStringOffset;
        monoString *(*toString)(void *_instance);
        DWORD GetProxyOffset;
        void *(*GetProxy)(void *_instance);
    }AndroidJavaProxy;
    struct AndroidReflection {
        DWORD IsPrimitiveOffset;
        bool (*IsPrimitive)(void *t);
        DWORD IsAssignableFromOffset;
        bool (*IsAssignableFrom)(void *t, void *from);
        DWORD GetStaticMethodIDOffset;
    }AndroidReflection;
    struct _AndroidJNIHelper {
        DWORD CreateJavaProxyOffset;
        DWORD CreateJavaRunnableOffset;
        DWORD UnboxArrayOffset;
        DWORD UnboxOffset;
        DWORD ConvertToJNIArrayOffset;
    }_AndroidJNIHelper;
    struct Keyframe {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, float time, float value, float inTangent, float outTangent);
        DWORD get_timeOffset;
        float (*get_time)(void *_instance);
        DWORD get_valueOffset;
        float (*get_value)(void *_instance);
        DWORD get_inTangentOffset;
        float (*get_inTangent)(void *_instance);
        DWORD get_outTangentOffset;
        float (*get_outTangent)(void *_instance);
    }Keyframe;
    struct AnimationCurve {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD EvaluateOffset;
        float (*Evaluate)(void *_instance, float time);
        DWORD get_keysOffset;
        DWORD get_ItemOffset;
        int(*get_Item)(void *_instance, int index);
        DWORD get_lengthOffset;
        int (*get_length)(void *_instance);
        DWORD GetKeyOffset;
        int(*GetKey)(void *_instance, int index);
        DWORD GetKeysOffset;
        DWORD EaseInOutOffset;
        void *(*EaseInOut)(float timeStart, float valueStart, float timeEnd, float valueEnd);
        DWORD Equals1Offset;
        bool (*Equals1)(void *_instance, void *other);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }AnimationCurve;
    struct Application {
        DWORD QuitOffset;
        void (*Quit)(int exitCode);
        DWORD Quit1Offset;
        void (*Quit1)();
        DWORD get_isPlayingOffset;
        bool (*get_isPlaying)();
        DWORD get_isFocusedOffset;
        bool (*get_isFocused)();
        DWORD get_platformOffset;
        int(*get_platform)();
        DWORD get_isMobilePlatformOffset;
        bool (*get_isMobilePlatform)();
        DWORD get_isConsolePlatformOffset;
        bool (*get_isConsolePlatform)();
        DWORD set_runInBackgroundOffset;
        void (*set_runInBackground)(bool value);
        DWORD get_dataPathOffset;
        monoString *(*get_dataPath)();
        DWORD get_streamingAssetsPathOffset;
        monoString *(*get_streamingAssetsPath)();
        DWORD get_persistentDataPathOffset;
        monoString *(*get_persistentDataPath)();
        DWORD get_temporaryCachePathOffset;
        monoString *(*get_temporaryCachePath)();
        DWORD ExternalEvalOffset;
        void (*ExternalEval)(monoString *script);
        DWORD Internal_ExternalCallOffset;
        void (*Internal_ExternalCall)(monoString *script);
        DWORD get_unityVersionOffset;
        monoString *(*get_unityVersion)();
        DWORD get_versionOffset;
        monoString *(*get_version)();
        DWORD get_cloudProjectIdOffset;
        monoString *(*get_cloudProjectId)();
        DWORD OpenURLOffset;
        void (*OpenURL)(monoString *url);
        DWORD get_targetFrameRateOffset;
        int (*get_targetFrameRate)();
        DWORD set_targetFrameRateOffset;
        void (*set_targetFrameRate)(int value);
        DWORD get_systemLanguageOffset;
        int(*get_systemLanguage)();
        DWORD SetLogCallbackDefinedOffset;
        void (*SetLogCallbackDefined)(bool defined);
        DWORD get_internetReachabilityOffset;
        int(*get_internetReachability)();
        DWORD CallLowMemoryOffset;
        void (*CallLowMemory)();
        DWORD add_logMessageReceivedOffset;
        void (*add_logMessageReceived)(void *value);
        DWORD remove_logMessageReceivedOffset;
        void (*remove_logMessageReceived)(void *value);
        DWORD get_isEditorOffset;
        bool (*get_isEditor)();
        DWORD Internal_ApplicationWantsToQuitOffset;
        bool (*Internal_ApplicationWantsToQuit)();
        DWORD Internal_ApplicationQuitOffset;
        void (*Internal_ApplicationQuit)();
        DWORD InvokeOnBeforeRenderOffset;
        void (*InvokeOnBeforeRender)();
        DWORD InvokeFocusChangedOffset;
        void (*InvokeFocusChanged)(bool focus);
        DWORD get_levelCountOffset;
        int (*get_levelCount)();
        DWORD get_loadedLevelOffset;
        int (*get_loadedLevel)();
        DWORD LoadLevelOffset;
        void (*LoadLevel)(int index);
        DWORD LoadLevel1Offset;
        void (*LoadLevel1)(monoString *name);
        DWORD LoadLevelAsyncOffset;
        void *(*LoadLevelAsync)(monoString *levelName);
        DWORD LoadLevelAdditiveAsyncOffset;
        void *(*LoadLevelAdditiveAsync)(monoString *levelName);
    }Application;
    struct BootConfigData {
    }BootConfigData;
    struct CachedAssetBundle {
        DWORD get_nameOffset;
        monoString *(*get_name)(void *_instance);
        DWORD get_hashOffset;
        int(*get_hash)(void *_instance);
    }CachedAssetBundle;
    struct Camera {
        DWORD get_nearClipPlaneOffset;
        float (*get_nearClipPlane)(void *_instance);
        DWORD set_nearClipPlaneOffset;
        void (*set_nearClipPlane)(void *_instance, float value);
        DWORD get_farClipPlaneOffset;
        float (*get_farClipPlane)(void *_instance);
        DWORD set_farClipPlaneOffset;
        void (*set_farClipPlane)(void *_instance, float value);
        DWORD get_fieldOfViewOffset;
        float (*get_fieldOfView)(void *_instance);
        DWORD set_fieldOfViewOffset;
        void (*set_fieldOfView)(void *_instance, float value);
        DWORD get_renderingPathOffset;
        int(*get_renderingPath)(void *_instance);
        DWORD get_allowHDROffset;
        bool (*get_allowHDR)(void *_instance);
        DWORD set_allowHDROffset;
        void (*set_allowHDR)(void *_instance, bool value);
        DWORD get_allowMSAAOffset;
        bool (*get_allowMSAA)(void *_instance);
        DWORD set_allowMSAAOffset;
        void (*set_allowMSAA)(void *_instance, bool value);
        DWORD set_orthographicSizeOffset;
        void (*set_orthographicSize)(void *_instance, float value);
        DWORD get_orthographicOffset;
        bool (*get_orthographic)(void *_instance);
        DWORD set_orthographicOffset;
        void (*set_orthographic)(void *_instance, bool value);
        DWORD get_depthOffset;
        float (*get_depth)(void *_instance);
        DWORD set_depthOffset;
        void (*set_depth)(void *_instance, float value);
        DWORD get_aspectOffset;
        float (*get_aspect)(void *_instance);
        DWORD set_aspectOffset;
        void (*set_aspect)(void *_instance, float value);
        DWORD get_cullingMaskOffset;
        int (*get_cullingMask)(void *_instance);
        DWORD set_cullingMaskOffset;
        void (*set_cullingMask)(void *_instance, int value);
        DWORD get_eventMaskOffset;
        int (*get_eventMask)(void *_instance);
        DWORD set_layerCullSphericalOffset;
        void (*set_layerCullSpherical)(void *_instance, bool value);
        DWORD set_useOcclusionCullingOffset;
        void (*set_useOcclusionCulling)(void *_instance, bool value);
        DWORD set_backgroundColorOffset;
        void (*set_backgroundColor)(void *_instance, Color value);
        DWORD get_clearFlagsOffset;
        int(*get_clearFlags)(void *_instance);
        DWORD get_depthTextureModeOffset;
        int(*get_depthTextureMode)(void *_instance);
        DWORD get_pixelRectOffset;
        int(*get_pixelRect)(void *_instance);
        DWORD get_pixelWidthOffset;
        int (*get_pixelWidth)(void *_instance);
        DWORD get_pixelHeightOffset;
        int (*get_pixelHeight)(void *_instance);
        DWORD get_targetTextureOffset;
        void *(*get_targetTexture)(void *_instance);
        DWORD set_targetTextureOffset;
        void (*set_targetTexture)(void *_instance, void *value);
        DWORD get_targetDisplayOffset;
        int (*get_targetDisplay)(void *_instance);
        DWORD get_worldToCameraMatrixOffset;
        int(*get_worldToCameraMatrix)(void *_instance);
        DWORD get_projectionMatrixOffset;
        int(*get_projectionMatrix)(void *_instance);
        DWORD ResetWorldToCameraMatrixOffset;
        void (*ResetWorldToCameraMatrix)(void *_instance);
        DWORD WorldToScreenPoint1Offset;
        Vector3 (*WorldToScreenPoint1)(void *_instance, Vector3 position);
        DWORD WorldToViewportPoint1Offset;
        Vector3 (*WorldToViewportPoint1)(void *_instance, Vector3 position);
        DWORD ScreenToWorldPoint1Offset;
        Vector3 (*ScreenToWorldPoint1)(void *_instance, Vector3 position);
        DWORD ScreenToViewportPointOffset;
        Vector3 (*ScreenToViewportPoint)(void *_instance, Vector3 position);
        DWORD ViewportPointToRay2Offset;
        int(*ViewportPointToRay2)(void *_instance, Vector3 pos);
        DWORD ScreenPointToRay2Offset;
        int(*ScreenPointToRay2)(void *_instance, Vector3 pos);
        DWORD get_mainOffset;
        void *(*get_main)();
        DWORD get_currentOffset;
        void *(*get_current)();
        DWORD get_stereoEnabledOffset;
        bool (*get_stereoEnabled)(void *_instance);
        DWORD GetAllCamerasCountOffset;
        int (*GetAllCamerasCount)();
        DWORD get_allCamerasCountOffset;
        int (*get_allCamerasCount)();
        DWORD get_allCamerasOffset;
        DWORD RenderToCubemapImplOffset;
        bool (*RenderToCubemapImpl)(void *_instance, void *tex, int faceMask);
        DWORD RenderToCubemapOffset;
        bool (*RenderToCubemap)(void *_instance, void *cubemap);
        DWORD RenderToCubemap1Offset;
        bool (*RenderToCubemap1)(void *_instance, void *cubemap);
        DWORD RenderOffset;
        void (*Render)(void *_instance);
        DWORD RenderWithShaderOffset;
        void (*RenderWithShader)(void *_instance, void *shader, monoString *replacementTag);
        DWORD CopyFromOffset;
        void (*CopyFrom)(void *_instance, void *other);
        DWORD FireOnPreCullOffset;
        void (*FireOnPreCull)(void *cam);
        DWORD FireOnPreRenderOffset;
        void (*FireOnPreRender)(void *cam);
        DWORD FireOnPostRenderOffset;
        void (*FireOnPostRender)(void *cam);
        DWORD WorldToScreenPoint_InjectedOffset;
        void (*WorldToScreenPoint_Injected)(void *_instance, Vector3 *position, int eye, Vector3 *ret);
        DWORD ScreenToViewportPoint_InjectedOffset;
        void (*ScreenToViewportPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
    }Camera;
    struct CullingGroup {
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD DisposeInternalOffset;
        void (*DisposeInternal)(void *_instance);
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
        DWORD set_targetCameraOffset;
        void (*set_targetCamera)(void *_instance, void *value);
        DWORD SetBoundingSphereCountOffset;
        void (*SetBoundingSphereCount)(void *_instance, int count);
        DWORD FinalizerFailureOffset;
        void (*FinalizerFailure)(void *_instance);
    }CullingGroup;
    struct ReflectionProbe {
        DWORD CallSetDefaultReflectionOffset;
        void (*CallSetDefaultReflection)(void *defaultReflectionCubemap);
    }ReflectionProbe;
    struct DebugLogHandler {
        DWORD Internal_LogExceptionOffset;
        void (*Internal_LogException)(void *exception, void *obj);
        DWORD LogExceptionOffset;
        void (*LogException)(void *_instance, void *exception, void *context);
    }DebugLogHandler;
    struct Debug {
        DWORD get_unityLoggerOffset;
        void *(*get_unityLogger)();
        DWORD DrawLineOffset;
        void (*DrawLine)(Vector3 start, Vector3 end, Color color, float duration);
        DWORD DrawLine1Offset;
        void (*DrawLine1)(Vector3 start, Vector3 end, Color color);
        DWORD DrawLine2Offset;
        void (*DrawLine2)(Vector3 start, Vector3 end, Color color, float duration, bool depthTest);
        DWORD BreakOffset;
        void (*Break)();
        DWORD LogExceptionOffset;
        void (*LogException)(void *exception);
        DWORD LogException1Offset;
        void (*LogException1)(void *exception, void *context);
        DWORD get_isDebugBuildOffset;
        bool (*get_isDebugBuild)();
        DWORD CallOverridenDebugHandlerOffset;
        bool (*CallOverridenDebugHandler)(void *exception, void *obj);
    }Debug;
    struct Bounds {
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD get_centerOffset;
        Vector3 (*get_center)(void *_instance);
        DWORD set_centerOffset;
        void (*set_center)(void *_instance, Vector3 value);
        DWORD get_sizeOffset;
        Vector3 (*get_size)(void *_instance);
        DWORD set_sizeOffset;
        void (*set_size)(void *_instance, Vector3 value);
        DWORD get_extentsOffset;
        Vector3 (*get_extents)(void *_instance);
        DWORD set_extentsOffset;
        void (*set_extents)(void *_instance, Vector3 value);
        DWORD get_minOffset;
        Vector3 (*get_min)(void *_instance);
        DWORD get_maxOffset;
        Vector3 (*get_max)(void *_instance);
        DWORD SetMinMaxOffset;
        void (*SetMinMax)(void *_instance, Vector3 min, Vector3 max);
        DWORD EncapsulateOffset;
        void (*Encapsulate)(void *_instance, Vector3 point);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ContainsOffset;
        bool (*Contains)(void *_instance, Vector3 point);
        DWORD SqrDistanceOffset;
        float (*SqrDistance)(void *_instance, Vector3 point);
    }Bounds;
    struct GeometryUtility {
        DWORD CalculateFrustumPlanesOffset;
    }GeometryUtility;
    struct Plane {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, Vector3 inNormal, float d);
        DWORD get_normalOffset;
        Vector3 (*get_normal)(void *_instance);
        DWORD get_distanceOffset;
        float (*get_distance)(void *_instance);
        DWORD set_distanceOffset;
        void (*set_distance)(void *_instance, float value);
        DWORD FlipOffset;
        void (*Flip)(void *_instance);
        DWORD get_flippedOffset;
        int(*get_flipped)(void *_instance);
        DWORD GetDistanceToPointOffset;
        float (*GetDistanceToPoint)(void *_instance, Vector3 point);
        DWORD GetSideOffset;
        bool (*GetSide)(void *_instance, Vector3 point);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }Plane;
    struct Ray {
        DWORD get_originOffset;
        Vector3 (*get_origin)(void *_instance);
        DWORD get_directionOffset;
        Vector3 (*get_direction)(void *_instance);
        DWORD GetPointOffset;
        Vector3 (*GetPoint)(void *_instance, float distance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }Ray;
    struct Rect {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, Vector2 position, Vector2 size);
        DWORD get_zeroOffset;
        int(*get_zero)();
        DWORD MinMaxRectOffset;
        int(*MinMaxRect)(float xmin, float ymin, float xmax, float ymax);
        DWORD get_xOffset;
        float (*get_x)(void *_instance);
        DWORD set_xOffset;
        void (*set_x)(void *_instance, float value);
        DWORD get_yOffset;
        float (*get_y)(void *_instance);
        DWORD set_yOffset;
        void (*set_y)(void *_instance, float value);
        DWORD get_positionOffset;
        Vector2 (*get_position)(void *_instance);
        DWORD get_centerOffset;
        Vector2 (*get_center)(void *_instance);
        DWORD get_minOffset;
        Vector2 (*get_min)(void *_instance);
        DWORD get_maxOffset;
        Vector2 (*get_max)(void *_instance);
        DWORD get_widthOffset;
        float (*get_width)(void *_instance);
        DWORD set_widthOffset;
        void (*set_width)(void *_instance, float value);
        DWORD get_heightOffset;
        float (*get_height)(void *_instance);
        DWORD set_heightOffset;
        void (*set_height)(void *_instance, float value);
        DWORD get_sizeOffset;
        Vector2 (*get_size)(void *_instance);
        DWORD get_xMinOffset;
        float (*get_xMin)(void *_instance);
        DWORD set_xMinOffset;
        void (*set_xMin)(void *_instance, float value);
        DWORD get_yMinOffset;
        float (*get_yMin)(void *_instance);
        DWORD set_yMinOffset;
        void (*set_yMin)(void *_instance, float value);
        DWORD get_xMaxOffset;
        float (*get_xMax)(void *_instance);
        DWORD set_xMaxOffset;
        void (*set_xMax)(void *_instance, float value);
        DWORD get_yMaxOffset;
        float (*get_yMax)(void *_instance);
        DWORD set_yMaxOffset;
        void (*set_yMax)(void *_instance, float value);
        DWORD ContainsOffset;
        bool (*Contains)(void *_instance, Vector2 point);
        DWORD Contains1Offset;
        bool (*Contains1)(void *_instance, Vector3 point);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *_instance, monoString *format);
    }Rect;
    struct RectInt {
        DWORD get_xOffset;
        int (*get_x)(void *_instance);
        DWORD get_yOffset;
        int (*get_y)(void *_instance);
        DWORD get_widthOffset;
        int (*get_width)(void *_instance);
        DWORD get_heightOffset;
        int (*get_height)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }RectInt;
    struct RectOffset {
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD DestroyOffset;
        void (*Destroy)(void *_instance);
        DWORD InternalCreateOffset;
        DWORD get_leftOffset;
        int (*get_left)(void *_instance);
        DWORD get_rightOffset;
        int (*get_right)(void *_instance);
        DWORD get_topOffset;
        int (*get_top)(void *_instance);
        DWORD get_bottomOffset;
        int (*get_bottom)(void *_instance);
        DWORD get_horizontalOffset;
        int (*get_horizontal)(void *_instance);
        DWORD get_verticalOffset;
        int (*get_vertical)(void *_instance);
    }RectOffset;
    struct Gizmos {
        DWORD DrawLineOffset;
        void (*DrawLine)(Vector3 from, Vector3 to);
        DWORD DrawWireSphereOffset;
        void (*DrawWireSphere)(Vector3 center, float radius);
        DWORD DrawSphereOffset;
        void (*DrawSphere)(Vector3 center, float radius);
        DWORD DrawWireCubeOffset;
        void (*DrawWireCube)(Vector3 center, Vector3 size);
        DWORD DrawCubeOffset;
        void (*DrawCube)(Vector3 center, Vector3 size);
        DWORD set_colorOffset;
        void (*set_color)(Color value);
        DWORD DrawFrustumOffset;
        void (*DrawFrustum)(Vector3 center, float fov, float maxRange, float minRange, float aspect);
        DWORD DrawRayOffset;
        void (*DrawRay)(Vector3 from, Vector3 direction);
        DWORD DrawLine_InjectedOffset;
        void (*DrawLine_Injected)(Vector3 *from, Vector3 *to);
        DWORD DrawWireSphere_InjectedOffset;
        void (*DrawWireSphere_Injected)(Vector3 *center, float radius);
        DWORD DrawSphere_InjectedOffset;
        void (*DrawSphere_Injected)(Vector3 *center, float radius);
        DWORD DrawWireCube_InjectedOffset;
        void (*DrawWireCube_Injected)(Vector3 *center, Vector3 *size);
        DWORD DrawCube_InjectedOffset;
        void (*DrawCube_Injected)(Vector3 *center, Vector3 *size);
        DWORD DrawFrustum_InjectedOffset;
        void (*DrawFrustum_Injected)(Vector3 *center, float fov, float maxRange, float minRange, float aspect);
    }Gizmos;
    struct BeforeRenderHelper {
        DWORD InvokeOffset;
        void (*Invoke)();
    }BeforeRenderHelper;
    struct Display {
        DWORD get_renderingWidthOffset;
        int (*get_renderingWidth)(void *_instance);
        DWORD get_renderingHeightOffset;
        int (*get_renderingHeight)(void *_instance);
        DWORD get_systemWidthOffset;
        int (*get_systemWidth)(void *_instance);
        DWORD get_systemHeightOffset;
        int (*get_systemHeight)(void *_instance);
        DWORD RelativeMouseAtOffset;
        Vector3 (*RelativeMouseAt)(Vector3 inputMouseCoordinates);
        DWORD FireDisplaysUpdatedOffset;
        void (*FireDisplaysUpdated)();
    }Display;
    struct Screen {
        DWORD get_widthOffset;
        int (*get_width)();
        DWORD get_heightOffset;
        int (*get_height)();
        DWORD get_dpiOffset;
        float (*get_dpi)();
        DWORD GetScreenOrientationOffset;
        int(*GetScreenOrientation)();
        DWORD get_orientationOffset;
        int(*get_orientation)();
        DWORD set_autorotateToPortraitOffset;
        void (*set_autorotateToPortrait)(bool value);
        DWORD set_autorotateToPortraitUpsideDownOffset;
        void (*set_autorotateToPortraitUpsideDown)(bool value);
        DWORD set_autorotateToLandscapeLeftOffset;
        void (*set_autorotateToLandscapeLeft)(bool value);
        DWORD set_autorotateToLandscapeRightOffset;
        void (*set_autorotateToLandscapeRight)(bool value);
        DWORD get_currentResolutionOffset;
        int(*get_currentResolution)();
        DWORD get_fullScreenOffset;
        bool (*get_fullScreen)();
        DWORD set_fullScreenOffset;
        void (*set_fullScreen)(bool value);
        DWORD SetResolution1Offset;
        void (*SetResolution1)(int width, int height, bool fullscreen, int preferredRefreshRate);
        DWORD SetResolution2Offset;
        void (*SetResolution2)(int width, int height, bool fullscreen);
    }Screen;
    struct Graphics {
        DWORD Internal_GetMaxDrawMeshInstanceCountOffset;
        int (*Internal_GetMaxDrawMeshInstanceCount)();
        DWORD GetActiveColorBufferOffset;
        int(*GetActiveColorBuffer)();
        DWORD GetActiveDepthBufferOffset;
        int(*GetActiveDepthBuffer)();
        DWORD Internal_SetNullRTOffset;
        void (*Internal_SetNullRT)();
        DWORD Internal_BlitMaterial5Offset;
        void (*Internal_BlitMaterial5)(void *source, void *dest, void *mat, int pass, bool setRT);
        DWORD Blit21Offset;
        void (*Blit21)(void *source, void *dest);
        DWORD get_activeColorBufferOffset;
        int(*get_activeColorBuffer)();
        DWORD get_activeDepthBufferOffset;
        int(*get_activeDepthBuffer)();
        DWORD BlitOffset;
        void (*Blit)(void *source, void *dest);
        DWORD Blit1Offset;
        void (*Blit1)(void *source, void *dest, void *mat, int pass);
        DWORD Blit2Offset;
        void (*Blit2)(void *source, void *dest, void *mat);
        DWORD SetRenderTarget11Offset;
        void (*SetRenderTarget11)(void *rt);
    }Graphics;
    struct GL {
        DWORD Vertex3Offset;
        void (*Vertex3)(float x, float y, float z);
        DWORD VertexOffset;
        void (*Vertex)(Vector3 v);
        DWORD TexCoord3Offset;
        void (*TexCoord3)(float x, float y, float z);
        DWORD TexCoord2Offset;
        void (*TexCoord2)(float x, float y);
        DWORD MultiTexCoord3Offset;
        void (*MultiTexCoord3)(int unit, float x, float y, float z);
        DWORD MultiTexCoord2Offset;
        void (*MultiTexCoord2)(int unit, float x, float y);
        DWORD PushMatrixOffset;
        void (*PushMatrix)();
        DWORD PopMatrixOffset;
        void (*PopMatrix)();
        DWORD LoadIdentityOffset;
        void (*LoadIdentity)();
        DWORD LoadOrthoOffset;
        void (*LoadOrtho)();
        DWORD GLLoadPixelMatrixScriptOffset;
        void (*GLLoadPixelMatrixScript)(float left, float right, float bottom, float top);
        DWORD LoadPixelMatrixOffset;
        void (*LoadPixelMatrix)(float left, float right, float bottom, float top);
        DWORD BeginOffset;
        void (*Begin)(int mode);
        DWORD EndOffset;
        void (*End)();
        DWORD GLClearOffset;
        void (*GLClear)(bool clearDepth, bool clearColor, Color backgroundColor, float depth);
        DWORD ClearOffset;
        void (*Clear)(bool clearDepth, bool clearColor, Color backgroundColor);
        DWORD ClearWithSkyboxOffset;
        void (*ClearWithSkybox)(bool clearDepth, void *camera);
    }GL;
    struct LightmapData {
        DWORD get_lightmapColorOffset;
        void *(*get_lightmapColor)(void *_instance);
        DWORD set_lightmapColorOffset;
        void (*set_lightmapColor)(void *_instance, void *value);
        DWORD get_lightmapDirOffset;
        void *(*get_lightmapDir)(void *_instance);
        DWORD set_lightmapDirOffset;
        void (*set_lightmapDir)(void *_instance, void *value);
        DWORD get_shadowMaskOffset;
        void *(*get_shadowMask)(void *_instance);
        DWORD set_shadowMaskOffset;
        void (*set_shadowMask)(void *_instance, void *value);
    }LightmapData;
    struct LightmapSettings {
        DWORD get_lightmapsOffset;
    }LightmapSettings;
    struct QualitySettings {
        DWORD set_pixelLightCountOffset;
        void (*set_pixelLightCount)(int value);
        DWORD get_shadowDistanceOffset;
        float (*get_shadowDistance)();
        DWORD set_shadowDistanceOffset;
        void (*set_shadowDistance)(float value);
        DWORD get_lodBiasOffset;
        float (*get_lodBias)();
        DWORD set_lodBiasOffset;
        void (*set_lodBias)(float value);
        DWORD set_masterTextureLimitOffset;
        void (*set_masterTextureLimit)(int value);
        DWORD set_particleRaycastBudgetOffset;
        void (*set_particleRaycastBudget)(int value);
        DWORD get_vSyncCountOffset;
        int (*get_vSyncCount)();
        DWORD set_vSyncCountOffset;
        void (*set_vSyncCount)(int value);
        DWORD get_antiAliasingOffset;
        int (*get_antiAliasing)();
        DWORD get_activeColorSpaceOffset;
        int(*get_activeColorSpace)();
    }QualitySettings;
    struct ImageEffectTransformsToLDR {
    }ImageEffectTransformsToLDR;
    struct ImageEffectAllowedInSceneView {
    }ImageEffectAllowedInSceneView;
    struct ImageEffectOpaque {
    }ImageEffectOpaque;
    struct LineRenderer {
        DWORD SetColorsOffset;
        void (*SetColors)(void *_instance, Color start, Color end);
        DWORD set_startColorOffset;
        void (*set_startColor)(void *_instance, Color value);
        DWORD set_endColorOffset;
        void (*set_endColor)(void *_instance, Color value);
        DWORD SetPositionOffset;
        void (*SetPosition)(void *_instance, int index, Vector3 position);
        DWORD SetPosition_InjectedOffset;
        void (*SetPosition_Injected)(void *_instance, int index, Vector3 *position);
    }LineRenderer;
    struct MaterialPropertyBlock {
        DWORD GetFloatImplOffset;
        float (*GetFloatImpl)(void *_instance, int name);
        DWORD GetVectorImplOffset;
        int(*GetVectorImpl)(void *_instance, int name);
        DWORD GetMatrixImplOffset;
        int(*GetMatrixImpl)(void *_instance, int name);
        DWORD GetTextureImplOffset;
        void *(*GetTextureImpl)(void *_instance, int name);
        DWORD SetFloatImplOffset;
        void (*SetFloatImpl)(void *_instance, int name, float value);
        DWORD SetColorImplOffset;
        void (*SetColorImpl)(void *_instance, int name, Color value);
        DWORD SetTextureImplOffset;
        void (*SetTextureImpl)(void *_instance, int name, void *value);
        DWORD CreateImplOffset;
        DWORD ClearOffset;
        void (*Clear)(void *_instance, bool keepMemory);
        DWORD Clear1Offset;
        void (*Clear1)(void *_instance);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
        DWORD SetFloatOffset;
        void (*SetFloat)(void *_instance, monoString *name, float value);
        DWORD SetColorOffset;
        void (*SetColor)(void *_instance, monoString *name, Color value);
        DWORD SetTextureOffset;
        void (*SetTexture)(void *_instance, monoString *name, void *value);
        DWORD SetTexture1Offset;
        void (*SetTexture1)(void *_instance, int nameID, void *value);
        DWORD GetFloatOffset;
        float (*GetFloat)(void *_instance, int nameID);
        DWORD GetVectorOffset;
        int(*GetVector)(void *_instance, int nameID);
        DWORD GetMatrixOffset;
        int(*GetMatrix)(void *_instance, int nameID);
        DWORD GetTextureOffset;
        void *(*GetTexture)(void *_instance, int nameID);
    }MaterialPropertyBlock;
    struct Renderer {
        DWORD set_castShadowsOffset;
        void (*set_castShadows)(void *_instance, bool value);
        DWORD get_boundsOffset;
        int(*get_bounds)(void *_instance);
        DWORD GetMaterialOffset;
        void *(*GetMaterial)(void *_instance);
        DWORD GetSharedMaterialOffset;
        void *(*GetSharedMaterial)(void *_instance);
        DWORD SetMaterialOffset;
        void (*SetMaterial)(void *_instance, void *m);
        DWORD GetMaterialArrayOffset;
        DWORD Internal_SetPropertyBlockOffset;
        void (*Internal_SetPropertyBlock)(void *_instance, void *properties);
        DWORD Internal_GetPropertyBlockOffset;
        void (*Internal_GetPropertyBlock)(void *_instance, void *dest);
        DWORD SetPropertyBlockOffset;
        void (*SetPropertyBlock)(void *_instance, void *properties);
        DWORD GetPropertyBlockOffset;
        void (*GetPropertyBlock)(void *_instance, void *properties);
        DWORD get_enabledOffset;
        bool (*get_enabled)(void *_instance);
        DWORD set_enabledOffset;
        void (*set_enabled)(void *_instance, bool value);
        DWORD get_isVisibleOffset;
        bool (*get_isVisible)(void *_instance);
        DWORD get_shadowCastingModeOffset;
        int(*get_shadowCastingMode)(void *_instance);
        DWORD set_receiveShadowsOffset;
        void (*set_receiveShadows)(void *_instance, bool value);
        DWORD get_sortingLayerIDOffset;
        int (*get_sortingLayerID)(void *_instance);
        DWORD set_sortingLayerIDOffset;
        void (*set_sortingLayerID)(void *_instance, int value);
        DWORD get_sortingOrderOffset;
        int (*get_sortingOrder)(void *_instance);
        DWORD set_sortingOrderOffset;
        void (*set_sortingOrder)(void *_instance, int value);
        DWORD set_staticBatchRootTransformOffset;
        void (*set_staticBatchRootTransform)(void *_instance, void *value);
        DWORD get_staticBatchIndexOffset;
        int (*get_staticBatchIndex)(void *_instance);
        DWORD SetStaticBatchInfoOffset;
        void (*SetStaticBatchInfo)(void *_instance, int firstSubMesh, int subMeshCount);
        DWORD get_isPartOfStaticBatchOffset;
        bool (*get_isPartOfStaticBatch)(void *_instance);
        DWORD get_worldToLocalMatrixOffset;
        int(*get_worldToLocalMatrix)(void *_instance);
        DWORD get_lightmapIndexOffset;
        int (*get_lightmapIndex)(void *_instance);
        DWORD set_lightmapIndexOffset;
        void (*set_lightmapIndex)(void *_instance, int value);
        DWORD get_lightmapScaleOffsetOffset;
        int(*get_lightmapScaleOffset)(void *_instance);
        DWORD get_realtimeLightmapScaleOffsetOffset;
        int(*get_realtimeLightmapScaleOffset)(void *_instance);
        DWORD GetSharedMaterialArrayOffset;
        DWORD get_materialsOffset;
        DWORD get_materialOffset;
        void *(*get_material)(void *_instance);
        DWORD set_materialOffset;
        void (*set_material)(void *_instance, void *value);
        DWORD get_sharedMaterialOffset;
        void *(*get_sharedMaterial)(void *_instance);
        DWORD set_sharedMaterialOffset;
        void (*set_sharedMaterial)(void *_instance, void *value);
        DWORD get_sharedMaterialsOffset;
    }Renderer;
    struct RenderSettings {
        DWORD get_fogOffset;
        bool (*get_fog)();
        DWORD set_fogOffset;
        void (*set_fog)(bool value);
        DWORD get_fogStartDistanceOffset;
        float (*get_fogStartDistance)();
        DWORD get_fogEndDistanceOffset;
        float (*get_fogEndDistance)();
        DWORD get_fogModeOffset;
        int(*get_fogMode)();
        DWORD get_fogColorOffset;
        Color (*get_fogColor)();
        DWORD set_fogColorOffset;
        void (*set_fogColor)(Color value);
        DWORD get_fogDensityOffset;
        float (*get_fogDensity)();
        DWORD set_fogDensityOffset;
        void (*set_fogDensity)(float value);
        DWORD get_ambientModeOffset;
        int(*get_ambientMode)();
        DWORD set_ambientIntensityOffset;
        void (*set_ambientIntensity)(float value);
        DWORD set_ambientLightOffset;
        void (*set_ambientLight)(Color value);
        DWORD get_skyboxOffset;
        void *(*get_skybox)();
        DWORD set_skyboxOffset;
        void (*set_skybox)(void *value);
        DWORD get_ambientProbeOffset;
        int(*get_ambientProbe)();
    }RenderSettings;
    struct Shader {
        DWORD FindOffset;
        void *(*Find)(monoString *name);
        DWORD get_isSupportedOffset;
        bool (*get_isSupported)(void *_instance);
        DWORD EnableKeywordOffset;
        void (*EnableKeyword)(monoString *keyword);
        DWORD DisableKeywordOffset;
        void (*DisableKeyword)(monoString *keyword);
        DWORD get_disableBatchingOffset;
        int(*get_disableBatching)(void *_instance);
        DWORD PropertyToIDOffset;
        int (*PropertyToID)(monoString *name);
        DWORD SetGlobalFloatImplOffset;
        void (*SetGlobalFloatImpl)(int name, float value);
        DWORD SetGlobalTextureImplOffset;
        void (*SetGlobalTextureImpl)(int name, void *value);
        DWORD SetGlobalFloatOffset;
        void (*SetGlobalFloat)(monoString *name, float value);
        DWORD SetGlobalColorOffset;
        void (*SetGlobalColor)(monoString *name, Color value);
        DWORD SetGlobalTextureOffset;
        void (*SetGlobalTexture)(monoString *name, void *value);
        DWORD SetGlobalTexture1Offset;
        void (*SetGlobalTexture1)(int nameID, void *value);
    }Shader;
    struct Material {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, void *source);
        DWORD ctor2Offset;
        void (*ctor2)(void *_instance, monoString *contents);
        DWORD CreateWithShaderOffset;
        void (*CreateWithShader)(void *self, void *shader);
        DWORD CreateWithMaterialOffset;
        void (*CreateWithMaterial)(void *self, void *source);
        DWORD CreateWithStringOffset;
        void (*CreateWithString)(void *self);
        DWORD get_shaderOffset;
        void *(*get_shader)(void *_instance);
        DWORD set_shaderOffset;
        void (*set_shader)(void *_instance, void *value);
        DWORD get_colorOffset;
        Color (*get_color)(void *_instance);
        DWORD set_colorOffset;
        void (*set_color)(void *_instance, Color value);
        DWORD get_mainTextureOffset;
        void *(*get_mainTexture)(void *_instance);
        DWORD set_mainTextureOffset;
        void (*set_mainTexture)(void *_instance, void *value);
        DWORD get_mainTextureOffsetOffset;
        DWORD set_mainTextureOffsetOffset;
        DWORD get_mainTextureScaleOffset;
        Vector2 (*get_mainTextureScale)(void *_instance);
        DWORD set_mainTextureScaleOffset;
        void (*set_mainTextureScale)(void *_instance, Vector2 value);
        DWORD HasPropertyOffset;
        bool (*HasProperty)(void *_instance, int nameID);
        DWORD HasProperty1Offset;
        bool (*HasProperty1)(void *_instance, monoString *name);
        DWORD get_renderQueueOffset;
        int (*get_renderQueue)(void *_instance);
        DWORD set_renderQueueOffset;
        void (*set_renderQueue)(void *_instance, int value);
        DWORD EnableKeywordOffset;
        void (*EnableKeyword)(void *_instance, monoString *keyword);
        DWORD DisableKeywordOffset;
        void (*DisableKeyword)(void *_instance, monoString *keyword);
        DWORD IsKeywordEnabledOffset;
        bool (*IsKeywordEnabled)(void *_instance, monoString *keyword);
        DWORD set_enableInstancingOffset;
        void (*set_enableInstancing)(void *_instance, bool value);
        DWORD get_passCountOffset;
        int (*get_passCount)(void *_instance);
        DWORD SetPassOffset;
        bool (*SetPass)(void *_instance, int pass);
        DWORD CopyPropertiesFromMaterialOffset;
        void (*CopyPropertiesFromMaterial)(void *_instance, void *mat);
        DWORD GetShaderKeywordsOffset;
        DWORD get_shaderKeywordsOffset;
        DWORD SetFloatImplOffset;
        void (*SetFloatImpl)(void *_instance, int name, float value);
        DWORD SetColorImplOffset;
        void (*SetColorImpl)(void *_instance, int name, Color value);
        DWORD SetTextureImplOffset;
        void (*SetTextureImpl)(void *_instance, int name, void *value);
        DWORD GetFloatImplOffset;
        float (*GetFloatImpl)(void *_instance, int name);
        DWORD GetColorImplOffset;
        Color (*GetColorImpl)(void *_instance, int name);
        DWORD GetTextureImplOffset;
        void *(*GetTextureImpl)(void *_instance, int name);
        DWORD GetTextureScaleAndOffsetImplOffset;
        int(*GetTextureScaleAndOffsetImpl)(void *_instance, int name);
        DWORD SetTextureOffsetImplOffset;
        void (*SetTextureOffsetImpl)(void *_instance, int name, Vector2 offset);
        DWORD SetTextureScaleImplOffset;
        void (*SetTextureScaleImpl)(void *_instance, int name, Vector2 scale);
        DWORD SetFloatOffset;
        void (*SetFloat)(void *_instance, monoString *name, float value);
        DWORD SetFloat1Offset;
        void (*SetFloat1)(void *_instance, int nameID, float value);
        DWORD SetIntOffset;
        void (*SetInt)(void *_instance, monoString *name, int value);
        DWORD SetColorOffset;
        void (*SetColor)(void *_instance, monoString *name, Color value);
        DWORD SetColor1Offset;
        void (*SetColor1)(void *_instance, int nameID, Color value);
        DWORD SetTextureOffset;
        void (*SetTexture)(void *_instance, monoString *name, void *value);
        DWORD SetTexture1Offset;
        void (*SetTexture1)(void *_instance, int nameID, void *value);
        DWORD GetFloatOffset;
        float (*GetFloat)(void *_instance, monoString *name);
        DWORD GetColorOffset;
        Color (*GetColor)(void *_instance, monoString *name);
        DWORD GetColor1Offset;
        Color (*GetColor1)(void *_instance, int nameID);
        DWORD GetVectorOffset;
        int(*GetVector)(void *_instance, monoString *name);
        DWORD GetTextureOffset;
        void *(*GetTexture)(void *_instance, monoString *name);
        DWORD SetTextureOffsetOffset;
        DWORD SetTextureScaleOffset;
        void (*SetTextureScale)(void *_instance, monoString *name, Vector2 value);
        DWORD GetTextureOffsetOffset;
        DWORD GetTextureOffset1Offset;
        Vector2 (*GetTextureOffset1)(void *_instance, int nameID);
        DWORD GetTextureScaleOffset;
        Vector2 (*GetTextureScale)(void *_instance, monoString *name);
        DWORD GetTextureScale1Offset;
        Vector2 (*GetTextureScale1)(void *_instance, int nameID);
    }Material;
    struct LensFlare {
        DWORD set_colorOffset;
        void (*set_color)(void *_instance, Color value);
    }LensFlare;
    struct Light {
        DWORD get_typeOffset;
        int(*get_type)(void *_instance);
        DWORD get_spotAngleOffset;
        float (*get_spotAngle)(void *_instance);
        DWORD set_spotAngleOffset;
        void (*set_spotAngle)(void *_instance, float value);
        DWORD get_colorOffset;
        Color (*get_color)(void *_instance);
        DWORD set_colorOffset;
        void (*set_color)(void *_instance, Color value);
        DWORD get_intensityOffset;
        float (*get_intensity)(void *_instance);
        DWORD set_intensityOffset;
        void (*set_intensity)(void *_instance, float value);
        DWORD set_bounceIntensityOffset;
        void (*set_bounceIntensity)(void *_instance, float value);
        DWORD get_rangeOffset;
        float (*get_range)(void *_instance);
        DWORD set_rangeOffset;
        void (*set_range)(void *_instance, float value);
        DWORD get_bakingOutputOffset;
        int(*get_bakingOutput)(void *_instance);
        DWORD set_cullingMaskOffset;
        void (*set_cullingMask)(void *_instance, int value);
        DWORD get_shadowsOffset;
        int(*get_shadows)(void *_instance);
    }Light;
    struct SkinnedMeshRenderer {
        DWORD get_updateWhenOffscreenOffset;
        bool (*get_updateWhenOffscreen)(void *_instance);
        DWORD set_updateWhenOffscreenOffset;
        void (*set_updateWhenOffscreen)(void *_instance, bool value);
        DWORD get_bonesOffset;
        DWORD get_sharedMeshOffset;
        void *(*get_sharedMesh)(void *_instance);
        DWORD set_sharedMeshOffset;
        void (*set_sharedMesh)(void *_instance, void *value);
    }SkinnedMeshRenderer;
    struct LODGroup {
        DWORD get_lodCountOffset;
        int (*get_lodCount)(void *_instance);
        DWORD RecalculateBoundsOffset;
        void (*RecalculateBounds)(void *_instance);
        DWORD GetLODsOffset;
    }LODGroup;
    struct Mesh {
        DWORD Internal_CreateOffset;
        void (*Internal_Create)(void *mono);
        DWORD FromInstanceIDOffset;
        void *(*FromInstanceID)(int id);
        DWORD GetTrianglesImplOffset;
        DWORD GetIndicesImplOffset;
        DWORD GetBoneWeightsImplOffset;
        DWORD get_bindposesOffset;
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
        DWORD get_canAccessOffset;
        bool (*get_canAccess)(void *_instance);
        DWORD get_vertexCountOffset;
        int (*get_vertexCount)(void *_instance);
        DWORD get_subMeshCountOffset;
        int (*get_subMeshCount)(void *_instance);
        DWORD set_subMeshCountOffset;
        void (*set_subMeshCount)(void *_instance, int value);
        DWORD get_boundsOffset;
        int(*get_bounds)(void *_instance);
        DWORD ClearImplOffset;
        void (*ClearImpl)(void *_instance, bool keepVertexLayout);
        DWORD RecalculateBoundsImplOffset;
        void (*RecalculateBoundsImpl)(void *_instance);
        DWORD RecalculateNormalsImplOffset;
        void (*RecalculateNormalsImpl)(void *_instance);
        DWORD MarkDynamicImplOffset;
        void (*MarkDynamicImpl)(void *_instance);
        DWORD GetUVChannelOffset;
        int(*GetUVChannel)(void *_instance, int uvIndex);
        DWORD get_verticesOffset;
        DWORD get_normalsOffset;
        DWORD get_tangentsOffset;
        DWORD get_uvOffset;
        DWORD get_uv2Offset;
        DWORD get_uv3Offset;
        DWORD get_uv4Offset;
        DWORD get_colorsOffset;
        DWORD get_colors32Offset;
        DWORD PrintErrorCantAccessIndicesOffset;
        void (*PrintErrorCantAccessIndices)(void *_instance);
        DWORD CheckCanAccessSubmeshOffset;
        bool (*CheckCanAccessSubmesh)(void *_instance, int submesh, bool errorAboutTriangles);
        DWORD CheckCanAccessSubmeshTrianglesOffset;
        bool (*CheckCanAccessSubmeshTriangles)(void *_instance, int submesh);
        DWORD CheckCanAccessSubmeshIndicesOffset;
        bool (*CheckCanAccessSubmeshIndices)(void *_instance, int submesh);
        DWORD get_trianglesOffset;
        DWORD GetTrianglesOffset;
        DWORD GetTriangles1Offset;
        DWORD GetIndicesOffset;
        DWORD GetIndices1Offset;
        DWORD SetTrianglesImplOffset;
        void (*SetTrianglesImpl)(void *_instance, int submesh, void *triangles, int arraySize, bool calculateBounds, int baseVertex);
        DWORD get_boneWeightsOffset;
        DWORD ClearOffset;
        void (*Clear)(void *_instance, bool keepVertexLayout);
        DWORD Clear1Offset;
        void (*Clear1)(void *_instance);
        DWORD RecalculateBoundsOffset;
        void (*RecalculateBounds)(void *_instance);
        DWORD RecalculateNormalsOffset;
        void (*RecalculateNormals)(void *_instance);
        DWORD MarkDynamicOffset;
        void (*MarkDynamic)(void *_instance);
    }Mesh;
    struct StaticBatchingHelper {
    }StaticBatchingHelper;
    struct BoneWeight {
        DWORD get_weight0Offset;
        float (*get_weight0)(void *_instance);
        DWORD set_weight0Offset;
        void (*set_weight0)(void *_instance, float value);
        DWORD get_weight1Offset;
        float (*get_weight1)(void *_instance);
        DWORD set_weight1Offset;
        void (*set_weight1)(void *_instance, float value);
        DWORD get_weight2Offset;
        float (*get_weight2)(void *_instance);
        DWORD set_weight2Offset;
        void (*set_weight2)(void *_instance, float value);
        DWORD get_weight3Offset;
        float (*get_weight3)(void *_instance);
        DWORD set_weight3Offset;
        void (*set_weight3)(void *_instance, float value);
        DWORD get_boneIndex0Offset;
        int (*get_boneIndex0)(void *_instance);
        DWORD set_boneIndex0Offset;
        void (*set_boneIndex0)(void *_instance, int value);
        DWORD get_boneIndex1Offset;
        int (*get_boneIndex1)(void *_instance);
        DWORD set_boneIndex1Offset;
        void (*set_boneIndex1)(void *_instance, int value);
        DWORD get_boneIndex2Offset;
        int (*get_boneIndex2)(void *_instance);
        DWORD set_boneIndex2Offset;
        void (*set_boneIndex2)(void *_instance, int value);
        DWORD get_boneIndex3Offset;
        int (*get_boneIndex3)(void *_instance);
        DWORD set_boneIndex3Offset;
        void (*set_boneIndex3)(void *_instance, int value);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }BoneWeight;
    struct CombineInstance {
        DWORD get_meshOffset;
        void *(*get_mesh)(void *_instance);
        DWORD set_meshOffset;
        void (*set_mesh)(void *_instance, void *value);
    }CombineInstance;
    struct Texture {
        DWORD GetDataWidthOffset;
        int (*GetDataWidth)(void *_instance);
        DWORD GetDataHeightOffset;
        int (*GetDataHeight)(void *_instance);
        DWORD GetDimensionOffset;
        int(*GetDimension)(void *_instance);
        DWORD get_widthOffset;
        int (*get_width)(void *_instance);
        DWORD set_widthOffset;
        void (*set_width)(void *_instance, int value);
        DWORD get_heightOffset;
        int (*get_height)(void *_instance);
        DWORD set_heightOffset;
        void (*set_height)(void *_instance, int value);
        DWORD get_dimensionOffset;
        int(*get_dimension)(void *_instance);
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
        DWORD get_wrapModeOffset;
        int(*get_wrapMode)(void *_instance);
        DWORD get_anisoLevelOffset;
        int (*get_anisoLevel)(void *_instance);
        DWORD set_anisoLevelOffset;
        void (*set_anisoLevel)(void *_instance, int value);
        DWORD get_texelSizeOffset;
        Vector2 (*get_texelSize)(void *_instance);
        DWORD CreateNonReadableExceptionOffset;
        void *(*CreateNonReadableException)(void *_instance, void *t);
    }Texture;
    struct Texture2D {
        DWORD ctor3Offset;
        void (*ctor3)(void *_instance, int width, int height);
        DWORD get_mipmapCountOffset;
        int (*get_mipmapCount)(void *_instance);
        DWORD get_formatOffset;
        int(*get_format)(void *_instance);
        DWORD get_whiteTextureOffset;
        void *(*get_whiteTexture)();
        DWORD get_blackTextureOffset;
        void *(*get_blackTexture)();
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
        DWORD ApplyImplOffset;
        void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD ResizeImplOffset;
        bool (*ResizeImpl)(void *_instance, int width, int height);
        DWORD SetPixelImplOffset;
        void (*SetPixelImpl)(void *_instance, int image, int x, int y, Color color);
        DWORD GetPixelImplOffset;
        Color (*GetPixelImpl)(void *_instance, int image, int x, int y);
        DWORD GetPixelBilinearImplOffset;
        Color (*GetPixelBilinearImpl)(void *_instance, int image, float u, float v);
        DWORD GetRawTextureDataOffset;
        DWORD GetPixelsOffset;
        DWORD GetPixels1Offset;
        DWORD GetPixels32Offset;
        DWORD GetPixels321Offset;
        DWORD SetPixelOffset;
        void (*SetPixel)(void *_instance, int x, int y, Color color);
        DWORD GetPixelOffset;
        Color (*GetPixel)(void *_instance, int x, int y);
        DWORD GetPixelBilinearOffset;
        Color (*GetPixelBilinear)(void *_instance, float u, float v);
        DWORD ApplyOffset;
        void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD Apply1Offset;
        void (*Apply1)(void *_instance, bool updateMipmaps);
        DWORD Apply2Offset;
        void (*Apply2)(void *_instance);
        DWORD ResizeOffset;
        bool (*Resize)(void *_instance, int width, int height);
        DWORD GetPixels11Offset;
        DWORD GetPixels2Offset;
    }Texture2D;
    struct Cubemap {
        DWORD get_formatOffset;
        int(*get_format)(void *_instance);
        DWORD ApplyImplOffset;
        void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
        DWORD ApplyOffset;
        void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD Apply1Offset;
        void (*Apply1)(void *_instance, bool updateMipmaps);
    }Cubemap;
    struct Texture3D {
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
        DWORD ApplyImplOffset;
        void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD ApplyOffset;
        void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
        DWORD Apply1Offset;
        void (*Apply1)(void *_instance);
    }Texture3D;
    struct Texture2DArray {
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
    }Texture2DArray;
    struct CubemapArray {
        DWORD get_isReadableOffset;
        bool (*get_isReadable)(void *_instance);
    }CubemapArray;
    struct RenderTexture {
        DWORD ctor2Offset;
        void (*ctor2)(void *_instance, void *textureToCopy);
        DWORD ctor7Offset;
        void (*ctor7)(void *_instance, int width, int height, int depth);
        DWORD get_widthOffset;
        int (*get_width)(void *_instance);
        DWORD set_widthOffset;
        void (*set_width)(void *_instance, int value);
        DWORD get_heightOffset;
        int (*get_height)(void *_instance);
        DWORD set_heightOffset;
        void (*set_height)(void *_instance, int value);
        DWORD get_dimensionOffset;
        int(*get_dimension)(void *_instance);
        DWORD get_graphicsFormatOffset;
        int(*get_graphicsFormat)(void *_instance);
        DWORD set_useMipMapOffset;
        void (*set_useMipMap)(void *_instance, bool value);
        DWORD get_formatOffset;
        int(*get_format)(void *_instance);
        DWORD set_autoGenerateMipsOffset;
        void (*set_autoGenerateMips)(void *_instance, bool value);
        DWORD set_antiAliasingOffset;
        void (*set_antiAliasing)(void *_instance, int value);
        DWORD GetActiveOffset;
        void *(*GetActive)();
        DWORD SetActiveOffset;
        void (*SetActive)(void *rt);
        DWORD get_activeOffset;
        void *(*get_active)();
        DWORD set_activeOffset;
        void (*set_active)(void *value);
        DWORD GetColorBufferOffset;
        int(*GetColorBuffer)(void *_instance);
        DWORD GetDepthBufferOffset;
        int(*GetDepthBuffer)(void *_instance);
        DWORD get_colorBufferOffset;
        int(*get_colorBuffer)(void *_instance);
        DWORD get_depthBufferOffset;
        int(*get_depthBuffer)(void *_instance);
        DWORD DiscardContentsOffset;
        void (*DiscardContents)(void *_instance, bool discardColor, bool discardDepth);
        DWORD MarkRestoreExpectedOffset;
        void (*MarkRestoreExpected)(void *_instance);
        DWORD DiscardContents1Offset;
        void (*DiscardContents1)(void *_instance);
        DWORD CreateOffset;
        bool (*Create)(void *_instance);
        DWORD ReleaseOffset;
        void (*Release)(void *_instance);
        DWORD IsCreatedOffset;
        bool (*IsCreated)(void *_instance);
        DWORD SetSRGBReadWriteOffset;
        void (*SetSRGBReadWrite)(void *_instance, bool srgb);
        DWORD Internal_CreateOffset;
        void (*Internal_Create)(void *rt);
        DWORD GetDescriptorOffset;
        int(*GetDescriptor)(void *_instance);
        DWORD ReleaseTemporaryOffset;
        void (*ReleaseTemporary)(void *temp);
        DWORD get_depthOffset;
        int (*get_depth)(void *_instance);
        DWORD set_depthOffset;
        void (*set_depth)(void *_instance, int value);
        DWORD get_descriptorOffset;
        int(*get_descriptor)(void *_instance);
        DWORD GetTemporary3Offset;
        void *(*GetTemporary3)(int width, int height, int depthBuffer);
        DWORD GetTemporary4Offset;
        void *(*GetTemporary4)(int width, int height);
        DWORD set_isCubemapOffset;
        void (*set_isCubemap)(void *_instance, bool value);
    }RenderTexture;
    struct RenderTextureDescriptor {
        DWORD get_widthOffset;
        int (*get_width)(void *_instance);
        DWORD set_widthOffset;
        void (*set_width)(void *_instance, int value);
        DWORD get_heightOffset;
        int (*get_height)(void *_instance);
        DWORD set_heightOffset;
        void (*set_height)(void *_instance, int value);
        DWORD get_msaaSamplesOffset;
        int (*get_msaaSamples)(void *_instance);
        DWORD set_msaaSamplesOffset;
        void (*set_msaaSamples)(void *_instance, int value);
        DWORD get_volumeDepthOffset;
        int (*get_volumeDepth)(void *_instance);
        DWORD set_volumeDepthOffset;
        void (*set_volumeDepth)(void *_instance, int value);
        DWORD get_graphicsFormatOffset;
        int(*get_graphicsFormat)(void *_instance);
        DWORD get_depthBufferBitsOffset;
        int (*get_depthBufferBits)(void *_instance);
        DWORD set_depthBufferBitsOffset;
        void (*set_depthBufferBits)(void *_instance, int value);
        DWORD get_vrUsageOffset;
        int(*get_vrUsage)(void *_instance);
        DWORD set_createdFromScriptOffset;
        void (*set_createdFromScript)(void *_instance, bool value);
        DWORD set_useDynamicScaleOffset;
        void (*set_useDynamicScale)(void *_instance, bool value);
    }RenderTextureDescriptor;
    struct Handheld {
    }Handheld;
    struct Hash128 {
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }Hash128;
    struct GUIElement {
        DWORD GetScreenRectOffset;
        int(*GetScreenRect)(void *_instance, void *camera);
        DWORD GetCameraOrWindowRectOffset;
        int(*GetCameraOrWindowRect)(void *camera);
    }GUIElement;
    struct GUITexture {
        DWORD get_colorOffset;
        Color (*get_color)(void *_instance);
        DWORD set_colorOffset;
        void (*set_color)(void *_instance, Color value);
        DWORD set_textureOffset;
        void (*set_texture)(void *_instance, void *value);
        DWORD get_pixelInsetOffset;
        int(*get_pixelInset)(void *_instance);
    }GUITexture;
    struct GUILayer {
        DWORD HitTestOffset;
        void *(*HitTest)(void *_instance, Vector3 screenPosition);
        DWORD HitTest1Offset;
        void *(*HitTest1)(void *_instance, Vector2 screenPosition);
    }GUILayer;
    struct Cursor {
        DWORD set_visibleOffset;
        void (*set_visible)(bool value);
        DWORD get_lockStateOffset;
        int(*get_lockState)();
    }Cursor;
    struct Input {
        DWORD GetKeyStringOffset;
        bool (*GetKeyString)(monoString *name);
        DWORD GetKeyUpStringOffset;
        bool (*GetKeyUpString)(monoString *name);
        DWORD GetKeyDownStringOffset;
        bool (*GetKeyDownString)(monoString *name);
        DWORD GetAxisOffset;
        float (*GetAxis)(monoString *axisName);
        DWORD GetAxisRawOffset;
        float (*GetAxisRaw)(monoString *axisName);
        DWORD GetButtonOffset;
        bool (*GetButton)(monoString *buttonName);
        DWORD GetButtonDownOffset;
        bool (*GetButtonDown)(monoString *buttonName);
        DWORD GetButtonUpOffset;
        bool (*GetButtonUp)(monoString *buttonName);
        DWORD GetMouseButtonOffset;
        bool (*GetMouseButton)(int button);
        DWORD GetMouseButtonDownOffset;
        bool (*GetMouseButtonDown)(int button);
        DWORD GetMouseButtonUpOffset;
        bool (*GetMouseButtonUp)(int button);
        DWORD GetTouchOffset;
        int(*GetTouch)(int index);
        DWORD GetKey1Offset;
        bool (*GetKey1)(monoString *name);
        DWORD GetKeyUp1Offset;
        bool (*GetKeyUp1)(monoString *name);
        DWORD GetKeyDown1Offset;
        bool (*GetKeyDown1)(monoString *name);
        DWORD get_mousePositionOffset;
        Vector3 (*get_mousePosition)();
        DWORD get_mouseScrollDeltaOffset;
        Vector2 (*get_mouseScrollDelta)();
        DWORD get_imeCompositionModeOffset;
        int(*get_imeCompositionMode)();
        DWORD get_compositionStringOffset;
        monoString *(*get_compositionString)();
        DWORD get_compositionCursorPosOffset;
        Vector2 (*get_compositionCursorPos)();
        DWORD set_compositionCursorPosOffset;
        void (*set_compositionCursorPos)(Vector2 value);
        DWORD get_mousePresentOffset;
        bool (*get_mousePresent)();
        DWORD get_touchCountOffset;
        int (*get_touchCount)();
        DWORD get_touchSupportedOffset;
        bool (*get_touchSupported)();
        DWORD get_accelerationOffset;
        Vector3 (*get_acceleration)();
        DWORD get_touchesOffset;
        DWORD get_mousePosition_InjectedOffset;
        void (*get_mousePosition_Injected)(Vector3 *ret);
        DWORD get_acceleration_InjectedOffset;
        void (*get_acceleration_Injected)(Vector3 *ret);
    }Input;
    struct SendMouseEvents {
        DWORD SetMouseMovedOffset;
        void (*SetMouseMoved)();
        DWORD DoSendMouseEventsOffset;
        void (*DoSendMouseEvents)(int skipRTCameras);
    }SendMouseEvents;
    struct ILogHandler {
    }ILogHandler;
    struct ILogger {
    }ILogger;
    struct Logger {
        DWORD get_logHandlerOffset;
        void *(*get_logHandler)(void *_instance);
        DWORD set_logHandlerOffset;
        void (*set_logHandler)(void *_instance, void *value);
        DWORD get_logEnabledOffset;
        bool (*get_logEnabled)(void *_instance);
        DWORD set_logEnabledOffset;
        void (*set_logEnabled)(void *_instance, bool value);
        DWORD get_filterLogTypeOffset;
        int(*get_filterLogType)(void *_instance);
        DWORD LogExceptionOffset;
        void (*LogException)(void *_instance, void *exception, void *context);
    }Logger;
    struct UnityLogWriter {
        DWORD WriteStringToUnityLogOffset;
        void (*WriteStringToUnityLog)(monoString *s);
        DWORD WriteStringToUnityLogImplOffset;
        void (*WriteStringToUnityLogImpl)(monoString *s);
        DWORD InitOffset;
        void (*Init)();
        DWORD get_EncodingOffset;
        void *(*get_Encoding)(void *_instance);
        DWORD Write1Offset;
        void (*Write1)(void *_instance, monoString *s);
    }UnityLogWriter;
    struct UColor {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, float r, float g, float b);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD Equals1Offset;
        bool (*Equals1)(void *_instance, Color other);
        DWORD op_AdditionOffset;
        Color (*op_Addition)(Color a, Color b);
        DWORD op_SubtractionOffset;
        Color (*op_Subtraction)(Color a, Color b);
        DWORD op_MultiplyOffset;
        Color (*op_Multiply)(Color a, Color b);
        DWORD op_Multiply1Offset;
        Color (*op_Multiply1)(Color a, float b);
        DWORD op_Multiply2Offset;
        Color (*op_Multiply2)(float b, Color a);
        DWORD op_EqualityOffset;
        bool (*op_Equality)(Color lhs, Color rhs);
        DWORD op_InequalityOffset;
        bool (*op_Inequality)(Color lhs, Color rhs);
        DWORD LerpOffset;
        Color (*Lerp)(Color a, Color b, float t);
        DWORD get_redOffset;
        Color (*get_red)();
        DWORD get_greenOffset;
        Color (*get_green)();
        DWORD get_blueOffset;
        Color (*get_blue)();
        DWORD get_whiteOffset;
        Color (*get_white)();
        DWORD get_blackOffset;
        Color (*get_black)();
        DWORD get_yellowOffset;
        Color (*get_yellow)();
        DWORD get_cyanOffset;
        Color (*get_cyan)();
        DWORD get_magentaOffset;
        Color (*get_magenta)();
        DWORD get_greyOffset;
        Color (*get_grey)();
        DWORD get_clearOffset;
        Color (*get_clear)();
        DWORD op_ImplicitOffset;
        int(*op_Implicit)(Color c);
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int index);
        DWORD HSVToRGBOffset;
        Color (*HSVToRGB)(float H, float S, float V, bool hdr);
    }UColor;
    struct Color32 {
        DWORD op_ImplicitOffset;
        int(*op_Implicit)(Color c);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }Color32;
    struct Gradient {
        DWORD InitOffset;
        DWORD CleanupOffset;
        void (*Cleanup)(void *_instance);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD EvaluateOffset;
        Color (*Evaluate)(void *_instance, float time);
        DWORD get_colorKeysOffset;
        DWORD get_alphaKeysOffset;
        DWORD Equals1Offset;
        bool (*Equals1)(void *_instance, void *other);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }Gradient;
    struct Matrix4x4 {
        DWORD get_inverseOffset;
        int(*get_inverse)(void *_instance);
        DWORD get_transposeOffset;
        int(*get_transpose)(void *_instance);
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int row, int column);
        DWORD set_ItemOffset;
        void (*set_Item)(void *_instance, int row, int column, float value);
        DWORD get_Item1Offset;
        float (*get_Item1)(void *_instance, int index);
        DWORD set_Item1Offset;
        void (*set_Item1)(void *_instance, int index, float value);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD GetColumnOffset;
        int(*GetColumn)(void *_instance, int index);
        DWORD GetRowOffset;
        int(*GetRow)(void *_instance, int index);
        DWORD MultiplyPointOffset;
        Vector3 (*MultiplyPoint)(void *_instance, Vector3 point);
        DWORD MultiplyPoint3x4Offset;
        Vector3 (*MultiplyPoint3x4)(void *_instance, Vector3 point);
        DWORD MultiplyVectorOffset;
        Vector3 (*MultiplyVector)(void *_instance, Vector3 vector);
        DWORD get_identityOffset;
        int(*get_identity)();
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }Matrix4x4;
    struct UVector3 {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, float x, float y);
        DWORD SlerpOffset;
        Vector3 (*Slerp)(Vector3 a, Vector3 b, float t);
        DWORD LerpOffset;
        Vector3 (*Lerp)(Vector3 a, Vector3 b, float t);
        DWORD MoveTowardsOffset;
        Vector3 (*MoveTowards)(Vector3 current, Vector3 target, float maxDistanceDelta);
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int index);
        DWORD set_ItemOffset;
        void (*set_Item)(void *_instance, int index, float value);
        DWORD SetOffset;
        void (*Set)(void *_instance, float newX, float newY, float newZ);
        DWORD ScaleOffset;
        Vector3 (*Scale)(Vector3 a, Vector3 b);
        DWORD Scale1Offset;
        void (*Scale1)(void *_instance, Vector3 scale);
        DWORD CrossOffset;
        Vector3 (*Cross)(Vector3 lhs, Vector3 rhs);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD Equals1Offset;
        bool (*Equals1)(void *_instance, Vector3 other);
        DWORD NormalizeOffset;
        Vector3 (*Normalize)(Vector3 value);
        DWORD Normalize1Offset;
        void (*Normalize1)(void *_instance);
        DWORD get_normalizedOffset;
        Vector3 (*get_normalized)(void *_instance);
        DWORD DotOffset;
        float (*Dot)(Vector3 lhs, Vector3 rhs);
        DWORD ProjectOffset;
        Vector3 (*Project)(Vector3 vector, Vector3 onNormal);
        DWORD AngleOffset;
        float (*Angle)(Vector3 from, Vector3 to);
        DWORD DistanceOffset;
        float (*Distance)(Vector3 a, Vector3 b);
        DWORD MagnitudeOffset;
        float (*Magnitude)(Vector3 vector);
        DWORD get_magnitudeOffset;
        float (*get_magnitude)(void *_instance);
        DWORD SqrMagnitudeOffset;
        float (*SqrMagnitude)(Vector3 vector);
        DWORD get_sqrMagnitudeOffset;
        float (*get_sqrMagnitude)(void *_instance);
        DWORD MinOffset;
        Vector3 (*Min)(Vector3 lhs, Vector3 rhs);
        DWORD MaxOffset;
        Vector3 (*Max)(Vector3 lhs, Vector3 rhs);
        DWORD get_zeroOffset;
        Vector3 (*get_zero)();
        DWORD get_oneOffset;
        Vector3 (*get_one)();
        DWORD get_forwardOffset;
        Vector3 (*get_forward)();
        DWORD get_backOffset;
        Vector3 (*get_back)();
        DWORD get_upOffset;
        Vector3 (*get_up)();
        DWORD get_downOffset;
        Vector3 (*get_down)();
        DWORD get_leftOffset;
        Vector3 (*get_left)();
        DWORD get_rightOffset;
        Vector3 (*get_right)();
        DWORD op_AdditionOffset;
        Vector3 (*op_Addition)(Vector3 a, Vector3 b);
        DWORD op_SubtractionOffset;
        Vector3 (*op_Subtraction)(Vector3 a, Vector3 b);
        DWORD op_UnaryNegationOffset;
        Vector3 (*op_UnaryNegation)(Vector3 a);
        DWORD op_MultiplyOffset;
        Vector3 (*op_Multiply)(Vector3 a, float d);
        DWORD op_Multiply1Offset;
        Vector3 (*op_Multiply1)(float d, Vector3 a);
        DWORD op_DivisionOffset;
        Vector3 (*op_Division)(Vector3 a, float d);
        DWORD op_EqualityOffset;
        bool (*op_Equality)(Vector3 lhs, Vector3 rhs);
        DWORD op_InequalityOffset;
        bool (*op_Inequality)(Vector3 lhs, Vector3 rhs);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *_instance, monoString *format);
        DWORD Slerp_InjectedOffset;
        void (*Slerp_Injected)(Vector3 *a, Vector3 *b, float t, Vector3 *ret);
    }UVector3;
    struct Quaternion {
        DWORD FromToRotationOffset;
        int(*FromToRotation)(Vector3 fromDirection, Vector3 toDirection);
        DWORD Internal_FromEulerRadOffset;
        int(*Internal_FromEulerRad)(Vector3 euler);
        DWORD AngleAxisOffset;
        int(*AngleAxis)(float angle, Vector3 axis);
        DWORD LookRotationOffset;
        int(*LookRotation)(Vector3 forward, Vector3 upwards);
        DWORD LookRotation1Offset;
        int(*LookRotation1)(Vector3 forward);
        DWORD get_identityOffset;
        int(*get_identity)();
        DWORD IsEqualUsingDotOffset;
        bool (*IsEqualUsingDot)(float dot);
        DWORD Internal_MakePositiveOffset;
        Vector3 (*Internal_MakePositive)(Vector3 euler);
        DWORD get_eulerAnglesOffset;
        Vector3 (*get_eulerAngles)(void *_instance);
        DWORD EulerOffset;
        int(*Euler)(float x, float y, float z);
        DWORD Euler1Offset;
        int(*Euler1)(Vector3 euler);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *_instance, monoString *format);
    }Quaternion;
    struct Mathf {
        DWORD LinearToGammaSpaceOffset;
        float (*LinearToGammaSpace)(float value);
        DWORD PerlinNoiseOffset;
        float (*PerlinNoise)(float x, float y);
        DWORD SinOffset;
        float (*Sin)(float f);
        DWORD CosOffset;
        float (*Cos)(float f);
        DWORD TanOffset;
        float (*Tan)(float f);
        DWORD AsinOffset;
        float (*Asin)(float f);
        DWORD AcosOffset;
        float (*Acos)(float f);
        DWORD AtanOffset;
        float (*Atan)(float f);
        DWORD Atan2Offset;
        float (*Atan2)(float y, float x);
        DWORD SqrtOffset;
        float (*Sqrt)(float f);
        DWORD AbsOffset;
        float (*Abs)(float f);
        DWORD Abs1Offset;
        int (*Abs1)(int value);
        DWORD MinOffset;
        float (*Min)(float a, float b);
        DWORD Min1Offset;
        int (*Min1)(int a, int b);
        DWORD MaxOffset;
        float (*Max)(float a, float b);
        DWORD Max1Offset;
        int (*Max1)(int a, int b);
        DWORD PowOffset;
        float (*Pow)(float f, float p);
        DWORD ExpOffset;
        float (*Exp)(float power);
        DWORD LogOffset;
        float (*Log)(float f, float p);
        DWORD Log1Offset;
        float (*Log1)(float f);
        DWORD CeilOffset;
        float (*Ceil)(float f);
        DWORD FloorOffset;
        float (*Floor)(float f);
        DWORD RoundOffset;
        float (*Round)(float f);
        DWORD CeilToIntOffset;
        int (*CeilToInt)(float f);
        DWORD FloorToIntOffset;
        int (*FloorToInt)(float f);
        DWORD RoundToIntOffset;
        int (*RoundToInt)(float f);
        DWORD SignOffset;
        float (*Sign)(float f);
        DWORD ClampOffset;
        float (*Clamp)(float value, float min, float max);
        DWORD Clamp1Offset;
        int (*Clamp1)(int value, int min, int max);
        DWORD Clamp01Offset;
        float (*Clamp01)(float value);
        DWORD LerpOffset;
        float (*Lerp)(float a, float b, float t);
        DWORD LerpUnclampedOffset;
        float (*LerpUnclamped)(float a, float b, float t);
        DWORD LerpAngleOffset;
        float (*LerpAngle)(float a, float b, float t);
        DWORD MoveTowardsOffset;
        float (*MoveTowards)(float current, float target, float maxDelta);
        DWORD SmoothStepOffset;
        float (*SmoothStep)(float from, float to, float t);
        DWORD ApproximatelyOffset;
        bool (*Approximately)(float a, float b);
        DWORD RepeatOffset;
        float (*Repeat)(float t, float length);
        DWORD PingPongOffset;
        float (*PingPong)(float t, float length);
        DWORD InverseLerpOffset;
        float (*InverseLerp)(float a, float b, float value);
        DWORD DeltaAngleOffset;
        float (*DeltaAngle)(float current, float target);
    }Mathf;
    struct UVector2 {
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int index);
        DWORD set_ItemOffset;
        void (*set_Item)(void *_instance, int index, float value);
        DWORD SetOffset;
        void (*Set)(void *_instance, float newX, float newY);
        DWORD LerpOffset;
        Vector2 (*Lerp)(Vector2 a, Vector2 b, float t);
        DWORD ScaleOffset;
        Vector2 (*Scale)(Vector2 a, Vector2 b);
        DWORD NormalizeOffset;
        void (*Normalize)(void *_instance);
        DWORD get_normalizedOffset;
        Vector2 (*get_normalized)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *_instance, monoString *format);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD Equals1Offset;
        bool (*Equals1)(void *_instance, Vector2 other);
        DWORD DotOffset;
        float (*Dot)(Vector2 lhs, Vector2 rhs);
        DWORD get_magnitudeOffset;
        float (*get_magnitude)(void *_instance);
        DWORD get_sqrMagnitudeOffset;
        float (*get_sqrMagnitude)(void *_instance);
        DWORD AngleOffset;
        float (*Angle)(Vector2 from, Vector2 to);
        DWORD DistanceOffset;
        float (*Distance)(Vector2 a, Vector2 b);
        DWORD ClampMagnitudeOffset;
        Vector2 (*ClampMagnitude)(Vector2 vector, float maxLength);
        DWORD op_AdditionOffset;
        Vector2 (*op_Addition)(Vector2 a, Vector2 b);
        DWORD op_SubtractionOffset;
        Vector2 (*op_Subtraction)(Vector2 a, Vector2 b);
        DWORD op_MultiplyOffset;
        Vector2 (*op_Multiply)(Vector2 a, Vector2 b);
        DWORD op_DivisionOffset;
        Vector2 (*op_Division)(Vector2 a, Vector2 b);
        DWORD op_Multiply1Offset;
        Vector2 (*op_Multiply1)(Vector2 a, float d);
        DWORD op_Multiply2Offset;
        Vector2 (*op_Multiply2)(float d, Vector2 a);
        DWORD op_Division1Offset;
        Vector2 (*op_Division1)(Vector2 a, float d);
        DWORD op_EqualityOffset;
        bool (*op_Equality)(Vector2 lhs, Vector2 rhs);
        DWORD op_InequalityOffset;
        bool (*op_Inequality)(Vector2 lhs, Vector2 rhs);
        DWORD op_ImplicitOffset;
        Vector2 (*op_Implicit)(Vector3 v);
        DWORD op_Implicit1Offset;
        Vector3 (*op_Implicit1)(Vector2 v);
        DWORD get_zeroOffset;
        Vector2 (*get_zero)();
        DWORD get_oneOffset;
        Vector2 (*get_one)();
        DWORD get_upOffset;
        Vector2 (*get_up)();
        DWORD get_rightOffset;
        Vector2 (*get_right)();
    }UVector2;
    struct Vector2Int {
        DWORD get_xOffset;
        int (*get_x)(void *_instance);
        DWORD set_xOffset;
        void (*set_x)(void *_instance, int value);
        DWORD get_yOffset;
        int (*get_y)(void *_instance);
        DWORD set_yOffset;
        void (*set_y)(void *_instance, int value);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD get_zeroOffset;
        int(*get_zero)();
    }Vector2Int;
    struct Vector3Int {
        DWORD get_xOffset;
        int (*get_x)(void *_instance);
        DWORD set_xOffset;
        void (*set_x)(void *_instance, int value);
        DWORD get_yOffset;
        int (*get_y)(void *_instance);
        DWORD set_yOffset;
        void (*set_y)(void *_instance, int value);
        DWORD get_zOffset;
        int (*get_z)(void *_instance);
        DWORD set_zOffset;
        void (*set_z)(void *_instance, int value);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *_instance, monoString *format);
        DWORD get_zeroOffset;
        int(*get_zero)();
    }Vector3Int;
    struct Vector4 {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, float x, float y, float z);
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int index);
        DWORD set_ItemOffset;
        void (*set_Item)(void *_instance, int index, float value);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD get_magnitudeOffset;
        float (*get_magnitude)(void *_instance);
        DWORD get_sqrMagnitudeOffset;
        float (*get_sqrMagnitude)(void *_instance);
        DWORD get_zeroOffset;
        int(*get_zero)();
        DWORD get_oneOffset;
        int(*get_one)();
        DWORD op_ImplicitOffset;
        int(*op_Implicit)(Vector3 v);
        DWORD op_Implicit2Offset;
        int(*op_Implicit2)(Vector2 v);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }Vector4;
    struct Ping {
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD DestroyPingOffset;
        void (*DestroyPing)(void *_instance);
        DWORD Internal_CreateOffset;
        DWORD get_isDoneOffset;
        bool (*get_isDone)(void *_instance);
        DWORD Internal_IsDoneOffset;
        bool (*Internal_IsDone)(void *_instance);
        DWORD get_timeOffset;
        int (*get_time)(void *_instance);
    }Ping;
    struct IPlayerEditorConnectionNative {
    }IPlayerEditorConnectionNative;
    struct PlayerConnectionInternal {
        DWORD UnityEngineIPlayerEditorConnectionNativePollOffset;
        void (*UnityEngineIPlayerEditorConnectionNativePoll)(void *_instance);
        DWORD UnityEngineIPlayerEditorConnectionNativeInitializeOffset;
        void (*UnityEngineIPlayerEditorConnectionNativeInitialize)(void *_instance);
        DWORD UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset;
        bool (*UnityEngineIPlayerEditorConnectionNativeIsConnected)(void *_instance);
        DWORD UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset;
        void (*UnityEngineIPlayerEditorConnectionNativeDisconnectAll)(void *_instance);
        DWORD IsConnectedOffset;
        bool (*IsConnected)();
        DWORD InitializeOffset;
        void (*Initialize)();
        DWORD RegisterInternalOffset;
        void (*RegisterInternal)(monoString *messageId);
        DWORD UnregisterInternalOffset;
        void (*UnregisterInternal)(monoString *messageId);
        DWORD PollInternalOffset;
        void (*PollInternal)();
        DWORD DisconnectAllOffset;
        void (*DisconnectAll)();
    }PlayerConnectionInternal;
    struct PlayerPrefsException {
    }PlayerPrefsException;
    struct PropertyAttribute {
    }PropertyAttribute;
    struct ContextMenuItemAttribute {
    }ContextMenuItemAttribute;
    struct TooltipAttribute {
    }TooltipAttribute;
    struct SpaceAttribute {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, float height);
    }SpaceAttribute;
    struct HeaderAttribute {
    }HeaderAttribute;
    struct RangeAttribute {
    }RangeAttribute;
    struct MultilineAttribute {
    }MultilineAttribute;
    struct TextAreaAttribute {
    }TextAreaAttribute;
    struct ColorUsageAttribute {
    }ColorUsageAttribute;
    struct Random {
        DWORD RangeOffset;
        float (*Range)(float min, float max);
        DWORD Range1Offset;
        int (*Range1)(int min, int max);
        DWORD RandomRangeIntOffset;
        int (*RandomRangeInt)(int min, int max);
        DWORD get_valueOffset;
        float (*get_value)();
        DWORD get_insideUnitSphereOffset;
        Vector3 (*get_insideUnitSphere)();
        DWORD get_insideUnitCircleOffset;
        Vector2 (*get_insideUnitCircle)();
        DWORD get_onUnitSphereOffset;
        Vector3 (*get_onUnitSphere)();
        DWORD get_rotationOffset;
        int(*get_rotation)();
        DWORD ColorHSVOffset;
        Color (*ColorHSV)(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax, float alphaMin, float alphaMax);
        DWORD get_insideUnitSphere_InjectedOffset;
        void (*get_insideUnitSphere_Injected)(Vector3 *ret);
        DWORD get_onUnitSphere_InjectedOffset;
        void (*get_onUnitSphere_Injected)(Vector3 *ret);
    }Random;
    struct ResourceRequest {
        DWORD get_assetOffset;
        void *(*get_asset)(void *_instance);
    }ResourceRequest;
    struct Resources {
        DWORD FindObjectsOfTypeAllOffset;
        DWORD LoadOffset;
        void *(*Load)(monoString *path);
        DWORD Load2Offset;
        void *(*Load2)(monoString *path, void *systemTypeInstance);
        DWORD LoadAsyncOffset;
        void *(*LoadAsync)(monoString *path);
        DWORD LoadAsync1Offset;
        void *(*LoadAsync1)(monoString *path, void *type);
        DWORD LoadAsyncInternalOffset;
        void *(*LoadAsyncInternal)(monoString *path, void *type);
        DWORD GetBuiltinResourceOffset;
        void *(*GetBuiltinResource)(void *type, monoString *path);
        DWORD UnloadAssetOffset;
        void (*UnloadAsset)(void *assetToUnload);
        DWORD UnloadUnusedAssetsOffset;
        void *(*UnloadUnusedAssets)();
    }Resources;
    struct AsyncOperation {
        DWORD get_isDoneOffset;
        bool (*get_isDone)(void *_instance);
        DWORD get_progressOffset;
        float (*get_progress)(void *_instance);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD InvokeCompletionEventOffset;
        void (*InvokeCompletionEvent)(void *_instance);
    }AsyncOperation;
    struct AttributeHelperEngine {
        DWORD GetParentTypeDisallowingMultipleInclusionOffset;
        void *(*GetParentTypeDisallowingMultipleInclusion)(void *type);
        DWORD GetRequiredComponentsOffset;
        DWORD GetExecuteModeOffset;
        int (*GetExecuteMode)(void *klass);
        DWORD CheckIsEditorScriptOffset;
        int (*CheckIsEditorScript)(void *klass);
        DWORD GetDefaultExecutionOrderForOffset;
        int (*GetDefaultExecutionOrderFor)(void *klass);
    }AttributeHelperEngine;
    struct DisallowMultipleComponent {
    }DisallowMultipleComponent;
    struct RequireComponent {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, void *requiredComponent, void *requiredComponent2);
        DWORD ctor2Offset;
        void (*ctor2)(void *_instance, void *requiredComponent, void *requiredComponent2, void *requiredComponent3);
    }RequireComponent;
    struct AddComponentMenu {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, monoString *menuName, int order);
    }AddComponentMenu;
    struct CreateAssetMenuAttribute {
        DWORD set_menuNameOffset;
        void (*set_menuName)(void *_instance, monoString *value);
        DWORD set_fileNameOffset;
        void (*set_fileName)(void *_instance, monoString *value);
        DWORD set_orderOffset;
        void (*set_order)(void *_instance, int value);
    }CreateAssetMenuAttribute;
    struct ContextMenu {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, monoString *itemName, bool isValidateFunction);
        DWORD ctor2Offset;
        void (*ctor2)(void *_instance, monoString *itemName, bool isValidateFunction, int priority);
    }ContextMenu;
    struct ExecuteInEditMode {
    }ExecuteInEditMode;
    struct ExecuteAlways {
    }ExecuteAlways;
    struct HideInInspector {
    }HideInInspector;
    struct HelpURLAttribute {
    }HelpURLAttribute;
    struct ExcludeFromPresetAttribute {
    }ExcludeFromPresetAttribute;
    struct Behaviour {
        DWORD get_enabledOffset;
        bool (*get_enabled)(void *_instance);
        DWORD set_enabledOffset;
        void (*set_enabled)(void *_instance, bool value);
        DWORD get_isActiveAndEnabledOffset;
        bool (*get_isActiveAndEnabled)(void *_instance);
    }Behaviour;
    struct Component {
        DWORD get_transformOffset;
        void *(*get_transform)(void *_instance);
        DWORD get_gameObjectOffset;
        void *(*get_gameObject)(void *_instance);
        DWORD GetComponentOffset;
        void *(*GetComponent)(void *_instance, void *type);
        DWORD GetComponent2Offset;
        void *(*GetComponent2)(void *_instance, monoString *type);
        DWORD GetComponentInChildrenOffset;
        void *(*GetComponentInChildren)(void *_instance, void *t, bool includeInactive);
        DWORD GetComponentInParentOffset;
        void *(*GetComponentInParent)(void *_instance, void *t);
        DWORD GetComponentsOffset;
        DWORD get_tagOffset;
        monoString *(*get_tag)(void *_instance);
        DWORD CompareTagOffset;
        bool (*CompareTag)(void *_instance, monoString *tag);
    }Component;
    struct Coroutine {
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
    }Coroutine;
    struct SetupCoroutine {
    }SetupCoroutine;
    struct CustomYieldInstruction {
        DWORD get_CurrentOffset;
        DWORD MoveNextOffset;
        bool (*MoveNext)(void *_instance);
        DWORD ResetOffset;
        void (*Reset)(void *_instance);
    }CustomYieldInstruction;
    struct ExcludeFromObjectFactoryAttribute {
    }ExcludeFromObjectFactoryAttribute;
    struct ExtensionOfNativeClassAttribute {
    }ExtensionOfNativeClassAttribute;
    struct GameObject {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance);
        DWORD GetComponent1Offset;
        void *(*GetComponent1)(void *_instance, void *type);
        DWORD GetComponentByNameOffset;
        void *(*GetComponentByName)(void *_instance, monoString *type);
        DWORD GetComponent11Offset;
        void *(*GetComponent11)(void *_instance, monoString *type);
        DWORD GetComponentInChildrenOffset;
        void *(*GetComponentInChildren)(void *_instance, void *type, bool includeInactive);
        DWORD GetComponentInParentOffset;
        void *(*GetComponentInParent)(void *_instance, void *type);
        DWORD GetComponentsOffset;
        DWORD Internal_AddComponentWithTypeOffset;
        void *(*Internal_AddComponentWithType)(void *_instance, void *componentType);
        DWORD AddComponentOffset;
        void *(*AddComponent)(void *_instance, void *componentType);
        DWORD get_transformOffset;
        void *(*get_transform)(void *_instance);
        DWORD get_layerOffset;
        int (*get_layer)(void *_instance);
        DWORD set_layerOffset;
        void (*set_layer)(void *_instance, int value);
        DWORD SetActiveOffset;
        void (*SetActive)(void *_instance, bool value);
        DWORD get_activeSelfOffset;
        bool (*get_activeSelf)(void *_instance);
        DWORD get_activeInHierarchyOffset;
        bool (*get_activeInHierarchy)(void *_instance);
        DWORD get_isStaticOffset;
        bool (*get_isStatic)(void *_instance);
        DWORD set_isStaticOffset;
        void (*set_isStatic)(void *_instance, bool value);
        DWORD get_isStaticBatchableOffset;
        bool (*get_isStaticBatchable)(void *_instance);
        DWORD get_tagOffset;
        monoString *(*get_tag)(void *_instance);
        DWORD set_tagOffset;
        void (*set_tag)(void *_instance, monoString *value);
        DWORD CompareTagOffset;
        bool (*CompareTag)(void *_instance, monoString *tag);
        DWORD FindGameObjectWithTagOffset;
        void *(*FindGameObjectWithTag)(monoString *tag);
        DWORD FindGameObjectsWithTagOffset;
        DWORD SendMessage2Offset;
        void (*SendMessage2)(void *_instance, monoString *methodName);
        DWORD Internal_CreateGameObjectOffset;
        void (*Internal_CreateGameObject)(void *self, monoString *name);
        DWORD FindOffset;
        void *(*Find)(monoString *name);
        DWORD get_sceneOffset;
        int(*get_scene)(void *_instance);
        DWORD get_gameObjectOffset;
        void *(*get_gameObject)(void *_instance);
    }GameObject;
    struct LayerMask {
        DWORD op_Implicit1Offset;
        int(*op_Implicit1)(int intVal);
        DWORD get_valueOffset;
        int (*get_value)(void *_instance);
        DWORD NameToLayerOffset;
        int (*NameToLayer)(monoString *layerName);
    }LayerMask;
    struct ManagedStreamHelpers {
        DWORD ValidateLoadFromStreamOffset;
        void (*ValidateLoadFromStream)(void *stream);
    }ManagedStreamHelpers;
    struct MonoBehaviour {
        DWORD IsInvokingOffset;
        bool (*IsInvoking)(void *_instance);
        DWORD CancelInvokeOffset;
        void (*CancelInvoke)(void *_instance);
        DWORD InvokeOffset;
        void (*Invoke)(void *_instance, monoString *methodName, float time);
        DWORD InvokeRepeatingOffset;
        void (*InvokeRepeating)(void *_instance, monoString *methodName, float time, float repeatRate);
        DWORD CancelInvoke1Offset;
        void (*CancelInvoke1)(void *_instance, monoString *methodName);
        DWORD IsInvoking1Offset;
        bool (*IsInvoking1)(void *_instance, monoString *methodName);
        DWORD StartCoroutineOffset;
        void *(*StartCoroutine)(void *_instance, monoString *methodName);
        DWORD StartCoroutine2Offset;
        void *(*StartCoroutine2)(void *_instance, void *routine);
        DWORD StartCoroutine_AutoOffset;
        void *(*StartCoroutine_Auto)(void *_instance, void *routine);
        DWORD StopCoroutineOffset;
        void (*StopCoroutine)(void *_instance, void *routine);
        DWORD StopCoroutine1Offset;
        void (*StopCoroutine1)(void *_instance, void *routine);
        DWORD StopCoroutine2Offset;
        void (*StopCoroutine2)(void *_instance, monoString *methodName);
        DWORD StopAllCoroutinesOffset;
        void (*StopAllCoroutines)(void *_instance);
        DWORD get_useGUILayoutOffset;
        bool (*get_useGUILayout)(void *_instance);
        DWORD set_useGUILayoutOffset;
        void (*set_useGUILayout)(void *_instance, bool value);
        DWORD Internal_CancelInvokeAllOffset;
        void (*Internal_CancelInvokeAll)(void *self);
        DWORD Internal_IsInvokingAllOffset;
        bool (*Internal_IsInvokingAll)(void *self);
        DWORD InvokeDelayedOffset;
        void (*InvokeDelayed)(void *self, monoString *methodName, float time, float repeatRate);
        DWORD CancelInvoke11Offset;
        void (*CancelInvoke11)(void *self, monoString *methodName);
        DWORD IsInvoking11Offset;
        bool (*IsInvoking11)(void *self, monoString *methodName);
        DWORD IsObjectMonoBehaviourOffset;
        bool (*IsObjectMonoBehaviour)(void *obj);
        DWORD StartCoroutineManaged2Offset;
        void *(*StartCoroutineManaged2)(void *_instance, void *enumerator);
        DWORD StopCoroutineManagedOffset;
        void (*StopCoroutineManaged)(void *_instance, void *routine);
        DWORD StopCoroutineFromEnumeratorManagedOffset;
        void (*StopCoroutineFromEnumeratorManaged)(void *_instance, void *routine);
        DWORD GetScriptClassNameOffset;
        monoString *(*GetScriptClassName)(void *_instance);
    }MonoBehaviour;
    struct NoAllocHelpers {
        DWORD SafeLengthOffset;
        int (*SafeLength)(void *values);
    }NoAllocHelpers;
    struct RangeInt {
        DWORD get_endOffset;
        int (*get_end)(void *_instance);
    }RangeInt;
    struct RuntimeInitializeOnLoadMethodAttribute {
    }RuntimeInitializeOnLoadMethodAttribute;
    struct ScriptableObject {
        DWORD CreateInstanceOffset;
        void *(*CreateInstance)(void *type);
        DWORD CreateScriptableObjectOffset;
        void (*CreateScriptableObject)(void *self);
        DWORD CreateScriptableObjectInstanceFromTypeOffset;
        void *(*CreateScriptableObjectInstanceFromType)(void *type, bool applyDefaultsAndReset);
    }ScriptableObject;
    struct SelectionBaseAttribute {
    }SelectionBaseAttribute;
    struct StackTraceUtility {
        DWORD SetProjectFolderOffset;
        void (*SetProjectFolder)(monoString *folder);
        DWORD ExtractStackTraceOffset;
        monoString *(*ExtractStackTrace)();
        DWORD PostprocessStacktraceOffset;
        monoString *(*PostprocessStacktrace)(monoString *oldString, bool stripEngineInternalInformation);
        DWORD ExtractFormattedStackTraceOffset;
        monoString *(*ExtractFormattedStackTrace)(void *stackTrace);
    }StackTraceUtility;
    struct UnityException {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, monoString *message);
    }UnityException;
    struct TrackedReference {
        DWORD op_EqualityOffset;
        bool (*op_Equality)(void *x, void *y);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }TrackedReference;
    struct UnhandledExceptionHandler {
        DWORD RegisterUECatcherOffset;
        void (*RegisterUECatcher)();
    }UnhandledExceptionHandler;
    struct UnityAPICompatibilityVersionAttribute {
    }UnityAPICompatibilityVersionAttribute;
    struct Object {
        DWORD GetInstanceIDOffset;
        int (*GetInstanceID)(void *_instance);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD op_ImplicitOffset;
        bool (*op_Implicit)(void *exists);
        DWORD CompareBaseObjectsOffset;
        bool (*CompareBaseObjects)(void *lhs, void *rhs);
        DWORD IsNativeObjectAliveOffset;
        bool (*IsNativeObjectAlive)(void *o);
        DWORD GetCachedPtrOffset;
        DWORD get_nameOffset;
        monoString *(*get_name)(void *_instance);
        DWORD set_nameOffset;
        void (*set_name)(void *_instance, monoString *value);
        DWORD Instantiate1Offset;
        void *(*Instantiate1)(void *original);
        DWORD Instantiate2Offset;
        void *(*Instantiate2)(void *original, void *parent, bool instantiateInWorldSpace);
        DWORD DestroyOffset;
        void (*Destroy)(void *obj, float t);
        DWORD Destroy1Offset;
        void (*Destroy1)(void *obj);
        DWORD DestroyImmediateOffset;
        void (*DestroyImmediate)(void *obj, bool allowDestroyingAssets);
        DWORD DestroyImmediate1Offset;
        void (*DestroyImmediate1)(void *obj);
        DWORD FindObjectsOfTypeOffset;
        DWORD DontDestroyOnLoadOffset;
        void (*DontDestroyOnLoad)(void *target);
        DWORD get_hideFlagsOffset;
        int(*get_hideFlags)(void *_instance);
        DWORD FindSceneObjectsOfTypeOffset;
        DWORD FindObjectOfType1Offset;
        void *(*FindObjectOfType1)(void *type);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD op_EqualityOffset;
        bool (*op_Equality)(void *x, void *y);
        DWORD op_InequalityOffset;
        bool (*op_Inequality)(void *x, void *y);
        DWORD GetOffsetOfInstanceIDInCPlusPlusObjectOffset;
        int (*GetOffsetOfInstanceIDInCPlusPlusObject)();
        DWORD Internal_CloneSingleOffset;
        void *(*Internal_CloneSingle)(void *data);
        DWORD Internal_CloneSingleWithParentOffset;
        void *(*Internal_CloneSingleWithParent)(void *data, void *parent, bool worldPositionStays);
        DWORD ToString1Offset;
        monoString *(*ToString1)(void *obj);
        DWORD GetNameOffset;
        monoString *(*GetName)(void *obj);
        DWORD SetNameOffset;
        void (*SetName)(void *obj, monoString *name);
        DWORD FindObjectFromInstanceIDOffset;
        void *(*FindObjectFromInstanceID)(int instanceID);
    }Object;
    struct UnitySynchronizationContext {
        DWORD CreateCopyOffset;
        void *(*CreateCopy)(void *_instance);
        DWORD ExecOffset;
        void (*Exec)(void *_instance);
        DWORD InitializeSynchronizationContextOffset;
        void (*InitializeSynchronizationContext)();
        DWORD ExecuteTasksOffset;
        void (*ExecuteTasks)();
    }UnitySynchronizationContext;
    struct WaitForEndOfFrame {
    }WaitForEndOfFrame;
    struct WaitForSeconds {
    }WaitForSeconds;
    struct WaitForSecondsRealtime {
        DWORD get_waitTimeOffset;
        float (*get_waitTime)(void *_instance);
        DWORD set_waitTimeOffset;
        void (*set_waitTime)(void *_instance, float value);
        DWORD get_keepWaitingOffset;
        bool (*get_keepWaiting)(void *_instance);
    }WaitForSecondsRealtime;
    struct WaitUntil {
        DWORD get_keepWaitingOffset;
        bool (*get_keepWaiting)(void *_instance);
    }WaitUntil;
    struct YieldInstruction {
    }YieldInstruction;
    struct SerializeField {
    }SerializeField;
    struct InternalStaticBatchingUtility {
        DWORD CombineRootOffset;
        void (*CombineRoot)(void *staticBatchRoot);
        DWORD CombineOffset;
        void (*Combine)(void *staticBatchRoot, bool combineOnlyStatic, bool isEditorPostprocessScene);
        DWORD CombineGameObjectsm__0Offset;
        bool (*CombineGameObjectsm__0)(void *m);
    }InternalStaticBatchingUtility;
    struct SystemInfo {
        DWORD get_operatingSystemOffset;
        monoString *(*get_operatingSystem)();
        DWORD get_operatingSystemFamilyOffset;
        int(*get_operatingSystemFamily)();
        DWORD get_processorTypeOffset;
        monoString *(*get_processorType)();
        DWORD get_processorCountOffset;
        int (*get_processorCount)();
        DWORD get_systemMemorySizeOffset;
        int (*get_systemMemorySize)();
        DWORD get_deviceUniqueIdentifierOffset;
        monoString *(*get_deviceUniqueIdentifier)();
        DWORD get_deviceNameOffset;
        monoString *(*get_deviceName)();
        DWORD get_deviceModelOffset;
        monoString *(*get_deviceModel)();
        DWORD get_supportsAccelerometerOffset;
        bool (*get_supportsAccelerometer)();
        DWORD get_supportsGyroscopeOffset;
        bool (*get_supportsGyroscope)();
        DWORD get_supportsLocationServiceOffset;
        bool (*get_supportsLocationService)();
        DWORD get_deviceTypeOffset;
        int(*get_deviceType)();
        DWORD get_graphicsMemorySizeOffset;
        int (*get_graphicsMemorySize)();
        DWORD get_graphicsDeviceNameOffset;
        monoString *(*get_graphicsDeviceName)();
        DWORD get_graphicsDeviceTypeOffset;
        int(*get_graphicsDeviceType)();
        DWORD get_graphicsDeviceVersionOffset;
        monoString *(*get_graphicsDeviceVersion)();
        DWORD get_graphicsShaderLevelOffset;
        int (*get_graphicsShaderLevel)();
        DWORD get_graphicsMultiThreadedOffset;
        bool (*get_graphicsMultiThreaded)();
        DWORD get_supportsShadowsOffset;
        bool (*get_supportsShadows)();
        DWORD get_supportsRenderTexturesOffset;
        bool (*get_supportsRenderTextures)();
        DWORD get_supportsMotionVectorsOffset;
        bool (*get_supportsMotionVectors)();
        DWORD get_supportsImageEffectsOffset;
        bool (*get_supportsImageEffects)();
        DWORD get_supports3DTexturesOffset;
        bool (*get_supports3DTextures)();
        DWORD get_supports2DArrayTexturesOffset;
        bool (*get_supports2DArrayTextures)();
        DWORD get_supports3DRenderTexturesOffset;
        bool (*get_supports3DRenderTextures)();
        DWORD get_supportsCubemapArrayTexturesOffset;
        bool (*get_supportsCubemapArrayTextures)();
        DWORD get_supportsComputeShadersOffset;
        bool (*get_supportsComputeShaders)();
        DWORD get_supportsInstancingOffset;
        bool (*get_supportsInstancing)();
        DWORD IsValidEnumValueOffset;
        bool (*IsValidEnumValue)(void *value);
        DWORD get_maxTextureSizeOffset;
        int (*get_maxTextureSize)();
        DWORD get_maxCubemapSizeOffset;
        int (*get_maxCubemapSize)();
        DWORD GetOperatingSystemOffset;
        monoString *(*GetOperatingSystem)();
        DWORD GetOperatingSystemFamilyOffset;
        int(*GetOperatingSystemFamily)();
        DWORD GetProcessorTypeOffset;
        monoString *(*GetProcessorType)();
        DWORD GetProcessorCountOffset;
        int (*GetProcessorCount)();
        DWORD GetPhysicalMemoryMBOffset;
        int (*GetPhysicalMemoryMB)();
        DWORD GetDeviceUniqueIdentifierOffset;
        monoString *(*GetDeviceUniqueIdentifier)();
        DWORD GetDeviceNameOffset;
        monoString *(*GetDeviceName)();
        DWORD GetDeviceModelOffset;
        monoString *(*GetDeviceModel)();
        DWORD SupportsAccelerometerOffset;
        bool (*SupportsAccelerometer)();
        DWORD IsGyroAvailableOffset;
        bool (*IsGyroAvailable)();
        DWORD SupportsLocationServiceOffset;
        bool (*SupportsLocationService)();
        DWORD GetDeviceTypeOffset;
        int(*GetDeviceType)();
        DWORD GetGraphicsMemorySizeOffset;
        int (*GetGraphicsMemorySize)();
        DWORD GetGraphicsDeviceNameOffset;
        monoString *(*GetGraphicsDeviceName)();
        DWORD GetGraphicsDeviceTypeOffset;
        int(*GetGraphicsDeviceType)();
        DWORD GetGraphicsDeviceVersionOffset;
        monoString *(*GetGraphicsDeviceVersion)();
        DWORD GetGraphicsShaderLevelOffset;
        int (*GetGraphicsShaderLevel)();
        DWORD GetGraphicsMultiThreadedOffset;
        bool (*GetGraphicsMultiThreaded)();
        DWORD SupportsShadowsOffset;
        bool (*SupportsShadows)();
        DWORD SupportsMotionVectorsOffset;
        bool (*SupportsMotionVectors)();
        DWORD Supports3DTexturesOffset;
        bool (*Supports3DTextures)();
        DWORD Supports2DArrayTexturesOffset;
        bool (*Supports2DArrayTextures)();
        DWORD Supports3DRenderTexturesOffset;
        bool (*Supports3DRenderTextures)();
        DWORD SupportsCubemapArrayTexturesOffset;
        bool (*SupportsCubemapArrayTextures)();
        DWORD SupportsComputeShadersOffset;
        bool (*SupportsComputeShaders)();
        DWORD SupportsInstancingOffset;
        bool (*SupportsInstancing)();
        DWORD GetMaxTextureSizeOffset;
        int (*GetMaxTextureSize)();
        DWORD GetMaxCubemapSizeOffset;
        int (*GetMaxCubemapSize)();
    }SystemInfo;
    struct SystemClock {
        DWORD get_nowOffset;
        int(*get_now)();
    }SystemClock;
    struct TouchScreenKeyboard {
        DWORD DestroyOffset;
        void (*Destroy)(void *_instance);
        DWORD FinalizeOffset;
        void (*Finalize)(void *_instance);
        DWORD get_isSupportedOffset;
        bool (*get_isSupported)();
        DWORD get_isInPlaceEditingAllowedOffset;
        bool (*get_isInPlaceEditingAllowed)();
        DWORD get_textOffset;
        monoString *(*get_text)(void *_instance);
        DWORD set_textOffset;
        void (*set_text)(void *_instance, monoString *value);
        DWORD set_hideInputOffset;
        void (*set_hideInput)(bool value);
        DWORD get_activeOffset;
        bool (*get_active)(void *_instance);
        DWORD set_activeOffset;
        void (*set_active)(void *_instance, bool value);
        DWORD get_statusOffset;
        int(*get_status)(void *_instance);
        DWORD set_characterLimitOffset;
        void (*set_characterLimit)(void *_instance, int value);
        DWORD get_canGetSelectionOffset;
        bool (*get_canGetSelection)(void *_instance);
        DWORD get_canSetSelectionOffset;
        bool (*get_canSetSelection)(void *_instance);
        DWORD get_selectionOffset;
        int(*get_selection)(void *_instance);
        DWORD SetSelectionOffset;
        void (*SetSelection)(int start, int length);
        DWORD get_visibleOffset;
        bool (*get_visible)();
    }TouchScreenKeyboard;
    struct Pose {
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }Pose;
    struct DrivenRectTransformTracker {
        DWORD ClearOffset;
        void (*Clear)(void *_instance);
    }DrivenRectTransformTracker;
    struct RectTransform {
        DWORD add_reapplyDrivenPropertiesOffset;
        void (*add_reapplyDrivenProperties)(void *value);
        DWORD remove_reapplyDrivenPropertiesOffset;
        void (*remove_reapplyDrivenProperties)(void *value);
        DWORD get_rectOffset;
        int(*get_rect)(void *_instance);
        DWORD get_anchorMinOffset;
        Vector2 (*get_anchorMin)(void *_instance);
        DWORD set_anchorMinOffset;
        void (*set_anchorMin)(void *_instance, Vector2 value);
        DWORD get_anchorMaxOffset;
        Vector2 (*get_anchorMax)(void *_instance);
        DWORD set_anchorMaxOffset;
        void (*set_anchorMax)(void *_instance, Vector2 value);
        DWORD get_anchoredPositionOffset;
        Vector2 (*get_anchoredPosition)(void *_instance);
        DWORD set_anchoredPositionOffset;
        void (*set_anchoredPosition)(void *_instance, Vector2 value);
        DWORD get_sizeDeltaOffset;
        Vector2 (*get_sizeDelta)(void *_instance);
        DWORD set_sizeDeltaOffset;
        void (*set_sizeDelta)(void *_instance, Vector2 value);
        DWORD get_pivotOffset;
        Vector2 (*get_pivot)(void *_instance);
        DWORD set_pivotOffset;
        void (*set_pivot)(void *_instance, Vector2 value);
        DWORD set_anchoredPosition3DOffset;
        void (*set_anchoredPosition3D)(void *_instance, Vector3 value);
        DWORD get_offsetMinOffset;
        Vector2 (*get_offsetMin)(void *_instance);
        DWORD set_offsetMinOffset;
        void (*set_offsetMin)(void *_instance, Vector2 value);
        DWORD get_offsetMaxOffset;
        Vector2 (*get_offsetMax)(void *_instance);
        DWORD set_offsetMaxOffset;
        void (*set_offsetMax)(void *_instance, Vector2 value);
        DWORD SendReapplyDrivenPropertiesOffset;
        void (*SendReapplyDrivenProperties)(void *driven);
        DWORD GetParentSizeOffset;
        Vector2 (*GetParentSize)(void *_instance);
    }RectTransform;
    struct Transform {
        DWORD get_positionOffset;
        Vector3 (*get_position)(void *_instance);
        DWORD set_positionOffset;
        void (*set_position)(void *_instance, Vector3 value);
        DWORD get_localPositionOffset;
        Vector3 (*get_localPosition)(void *_instance);
        DWORD set_localPositionOffset;
        void (*set_localPosition)(void *_instance, Vector3 value);
        DWORD get_eulerAnglesOffset;
        Vector3 (*get_eulerAngles)(void *_instance);
        DWORD set_eulerAnglesOffset;
        void (*set_eulerAngles)(void *_instance, Vector3 value);
        DWORD get_localEulerAnglesOffset;
        Vector3 (*get_localEulerAngles)(void *_instance);
        DWORD set_localEulerAnglesOffset;
        void (*set_localEulerAngles)(void *_instance, Vector3 value);
        DWORD get_rightOffset;
        Vector3 (*get_right)(void *_instance);
        DWORD get_upOffset;
        Vector3 (*get_up)(void *_instance);
        DWORD get_forwardOffset;
        Vector3 (*get_forward)(void *_instance);
        DWORD get_rotationOffset;
        int(*get_rotation)(void *_instance);
        DWORD get_localRotationOffset;
        int(*get_localRotation)(void *_instance);
        DWORD 
            Offset;
        Vector3 (*get_localScale)(void *_instance);
        DWORD set_localScaleOffset;
        void (*set_localScale)(void *_instance, Vector3 value);
        DWORD get_parentOffset;
        void *(*get_parent)(void *_instance);
        DWORD set_parentOffset;
        void (*set_parent)(void *_instance, void *value);
        DWORD get_parentInternalOffset;
        void *(*get_parentInternal)(void *_instance);
        DWORD set_parentInternalOffset;
        void (*set_parentInternal)(void *_instance, void *value);
        DWORD GetParentOffset;
        void *(*GetParent)(void *_instance);
        DWORD SetParentOffset;
        void (*SetParent)(void *_instance, void *p);
        DWORD SetParent1Offset;
        void (*SetParent1)(void *_instance, void *parent, bool worldPositionStays);
        DWORD get_worldToLocalMatrixOffset;
        int(*get_worldToLocalMatrix)(void *_instance);
        DWORD get_localToWorldMatrixOffset;
        int(*get_localToWorldMatrix)(void *_instance);
        DWORD Translate1Offset;
        void (*Translate1)(void *_instance, Vector3 translation);
        DWORD Translate2Offset;
        void (*Translate2)(void *_instance, float x, float y, float z);
        DWORD Rotate1Offset;
        void (*Rotate1)(void *_instance, Vector3 eulers);
        DWORD Rotate3Offset;
        void (*Rotate3)(void *_instance, float xAngle, float yAngle, float zAngle);
        DWORD RotateAroundInternalOffset;
        void (*RotateAroundInternal)(void *_instance, Vector3 axis, float angle);
        DWORD Rotate21Offset;
        void (*Rotate21)(void *_instance, Vector3 axis, float angle);
        DWORD RotateAroundOffset;
        void (*RotateAround)(void *_instance, Vector3 point, Vector3 axis, float angle);
        DWORD LookAtOffset;
        void (*LookAt)(void *_instance, void *target, Vector3 worldUp);
        DWORD LookAt1Offset;
        void (*LookAt1)(void *_instance, void *target);
        DWORD LookAt2Offset;
        void (*LookAt2)(void *_instance, Vector3 worldPosition, Vector3 worldUp);
        DWORD LookAt3Offset;
        void (*LookAt3)(void *_instance, Vector3 worldPosition);
        DWORD Internal_LookAtOffset;
        void (*Internal_LookAt)(void *_instance, Vector3 worldPosition, Vector3 worldUp);
        DWORD TransformDirectionOffset;
        Vector3 (*TransformDirection)(void *_instance, Vector3 direction);
        DWORD InverseTransformDirectionOffset;
        Vector3 (*InverseTransformDirection)(void *_instance, Vector3 direction);
        DWORD TransformPointOffset;
        Vector3 (*TransformPoint)(void *_instance, Vector3 position);
        DWORD TransformPoint1Offset;
        Vector3 (*TransformPoint1)(void *_instance, float x, float y, float z);
        DWORD InverseTransformPointOffset;
        Vector3 (*InverseTransformPoint)(void *_instance, Vector3 position);
        DWORD get_rootOffset;
        void *(*get_root)(void *_instance);
        DWORD GetRootOffset;
        void *(*GetRoot)(void *_instance);
        DWORD get_childCountOffset;
        int (*get_childCount)(void *_instance);
        DWORD SetAsFirstSiblingOffset;
        void (*SetAsFirstSibling)(void *_instance);
        DWORD SetAsLastSiblingOffset;
        void (*SetAsLastSibling)(void *_instance);
        DWORD SetSiblingIndexOffset;
        void (*SetSiblingIndex)(void *_instance, int index);
        DWORD GetSiblingIndexOffset;
        int (*GetSiblingIndex)(void *_instance);
        DWORD FindRelativeTransformWithPathOffset;
        void *(*FindRelativeTransformWithPath)(void *transform, monoString *path, bool isActiveOnly);
        DWORD FindOffset;
        void *(*Find)(void *_instance, monoString *n);
        DWORD get_lossyScaleOffset;
        Vector3 (*get_lossyScale)(void *_instance);
        DWORD IsChildOfOffset;
        bool (*IsChildOf)(void *_instance, void *parent);
        DWORD get_hasChangedOffset;
        bool (*get_hasChanged)(void *_instance);
        DWORD set_hasChangedOffset;
        void (*set_hasChanged)(void *_instance, bool value);
        DWORD GetEnumeratorOffset;
        void *(*GetEnumerator)(void *_instance);
        DWORD GetChildOffset;
        void *(*GetChild)(void *_instance, int index);
        DWORD get_position_InjectedOffset;
        void (*get_position_Injected)(void *_instance, Vector3 *ret);
        DWORD set_position_InjectedOffset;
        void (*set_position_Injected)(void *_instance, Vector3 *value);
        DWORD get_localPosition_InjectedOffset;
        void (*get_localPosition_Injected)(void *_instance, Vector3 *ret);
        DWORD set_localPosition_InjectedOffset;
        void (*set_localPosition_Injected)(void *_instance, Vector3 *value);
        DWORD get_localScale_InjectedOffset;
        void (*get_localScale_Injected)(void *_instance, Vector3 *ret);
        DWORD set_localScale_InjectedOffset;
        void (*set_localScale_Injected)(void *_instance, Vector3 *value);
        DWORD RotateAroundInternal_InjectedOffset;
        void (*RotateAroundInternal_Injected)(void *_instance, Vector3 *axis, float angle);
        DWORD Internal_LookAt_InjectedOffset;
        void (*Internal_LookAt_Injected)(void *_instance, Vector3 *worldPosition, Vector3 *worldUp);
        DWORD TransformDirection_InjectedOffset;
        void (*TransformDirection_Injected)(void *_instance, Vector3 *direction, Vector3 *ret);
        DWORD InverseTransformDirection_InjectedOffset;
        void (*InverseTransformDirection_Injected)(void *_instance, Vector3 *direction, Vector3 *ret);
        DWORD TransformPoint_InjectedOffset;
        void (*TransformPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
        DWORD InverseTransformPoint_InjectedOffset;
        void (*InverseTransformPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
        DWORD get_lossyScale_InjectedOffset;
        void (*get_lossyScale_Injected)(void *_instance, Vector3 *ret);
    }Transform;
    struct SpriteRenderer {
        DWORD set_spriteOffset;
        void (*set_sprite)(void *_instance, void *value);
        DWORD get_sizeOffset;
        Vector2 (*get_size)(void *_instance);
        DWORD set_sizeOffset;
        void (*set_size)(void *_instance, Vector2 value);
    }SpriteRenderer;
    struct Sprite {
        DWORD GetPackingModeOffset;
        int (*GetPackingMode)(void *_instance);
        DWORD GetPackedOffset;
        int (*GetPacked)(void *_instance);
        DWORD GetTextureRectOffset;
        int(*GetTextureRect)(void *_instance);
        DWORD GetInnerUVsOffset;
        int(*GetInnerUVs)(void *_instance);
        DWORD GetOuterUVsOffset;
        int(*GetOuterUVs)(void *_instance);
        DWORD GetPaddingOffset;
        int(*GetPadding)(void *_instance);
        DWORD get_boundsOffset;
        int(*get_bounds)(void *_instance);
        DWORD get_rectOffset;
        int(*get_rect)(void *_instance);
        DWORD get_borderOffset;
        int(*get_border)(void *_instance);
        DWORD get_textureOffset;
        void *(*get_texture)(void *_instance);
        DWORD get_pixelsPerUnitOffset;
        float (*get_pixelsPerUnit)(void *_instance);
        DWORD get_associatedAlphaSplitTextureOffset;
        void *(*get_associatedAlphaSplitTexture)(void *_instance);
        DWORD get_pivotOffset;
        Vector2 (*get_pivot)(void *_instance);
        DWORD get_packedOffset;
        bool (*get_packed)(void *_instance);
        DWORD get_packingModeOffset;
        int(*get_packingMode)(void *_instance);
        DWORD get_textureRectOffset;
        int(*get_textureRect)(void *_instance);
        DWORD get_verticesOffset;
        DWORD get_trianglesOffset;
        DWORD get_uvOffset;
    }Sprite;
}
namespace UnityEngineAssertions{
    struct Assert {
        DWORD FailOffset;
        void (*Fail)(monoString *message, monoString *userMessage);
        DWORD AreEqual2Offset;
        void (*AreEqual2)(void *expected, void *actual, monoString *message);
        DWORD AreEqual3Offset;
        void (*AreEqual3)(int expected, int actual);
    }Assert;
    struct AssertionException {
        DWORD get_MessageOffset;
        monoString *(*get_Message)(void *_instance);
    }AssertionException;
    struct AssertionMessageUtil {
        DWORD GetMessageOffset;
        monoString *(*GetMessage)(monoString *failureMessage);
        DWORD GetMessage1Offset;
        monoString *(*GetMessage1)(monoString *failureMessage, monoString *expected);
    }AssertionMessageUtil;
}
namespace UnityEngineEvents{
    struct ArgumentCache {
        DWORD get_unityObjectArgumentOffset;
        void *(*get_unityObjectArgument)(void *_instance);
        DWORD get_unityObjectArgumentAssemblyTypeNameOffset;
        monoString *(*get_unityObjectArgumentAssemblyTypeName)(void *_instance);
        DWORD get_intArgumentOffset;
        int (*get_intArgument)(void *_instance);
        DWORD get_floatArgumentOffset;
        float (*get_floatArgument)(void *_instance);
        DWORD get_stringArgumentOffset;
        monoString *(*get_stringArgument)(void *_instance);
        DWORD get_boolArgumentOffset;
        bool (*get_boolArgument)(void *_instance);
        DWORD TidyAssemblyTypeNameOffset;
        void (*TidyAssemblyTypeName)(void *_instance);
        DWORD OnBeforeSerializeOffset;
        void (*OnBeforeSerialize)(void *_instance);
        DWORD OnAfterDeserializeOffset;
        void (*OnAfterDeserialize)(void *_instance);
    }ArgumentCache;
    struct BaseInvokableCall {
        DWORD AllowInvokeOffset;
        bool (*AllowInvoke)(void *delegate);
    }BaseInvokableCall;
    struct InvokableCall {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, void *action);
        DWORD add_DelegateOffset;
        void (*add_Delegate)(void *_instance, void *value);
        DWORD remove_DelegateOffset;
        void (*remove_Delegate)(void *_instance, void *value);
        DWORD Invoke1Offset;
        void (*Invoke1)(void *_instance);
    }InvokableCall;
    struct PersistentCall {
        DWORD get_targetOffset;
        void *(*get_target)(void *_instance);
        DWORD get_methodNameOffset;
        monoString *(*get_methodName)(void *_instance);
        DWORD get_modeOffset;
        int(*get_mode)(void *_instance);
        DWORD get_argumentsOffset;
        void *(*get_arguments)(void *_instance);
        DWORD IsValidOffset;
        bool (*IsValid)(void *_instance);
        DWORD GetRuntimeCallOffset;
        void *(*GetRuntimeCall)(void *_instance, void *theEvent);
        DWORD GetObjectCallOffset;
        void *(*GetObjectCall)(void *target, void *method, void *arguments);
    }PersistentCall;
    struct PersistentCallGroup {
        DWORD get_CountOffset;
        int (*get_Count)(void *_instance);
        DWORD GetListenerOffset;
        void *(*GetListener)(void *_instance, int index);
        DWORD InitializeOffset;
        void (*Initialize)(void *_instance, void *invokableList, void *unityEventBase);
    }PersistentCallGroup;
    struct InvokableCallList {
        DWORD AddPersistentInvokableCallOffset;
        void (*AddPersistentInvokableCall)(void *_instance, void *call);
        DWORD AddListenerOffset;
        void (*AddListener)(void *_instance, void *call);
        DWORD ClearOffset;
        void (*Clear)(void *_instance);
        DWORD ClearPersistentOffset;
        void (*ClearPersistent)(void *_instance);
        DWORD PrepareInvokeOffset;
    }InvokableCallList;
    struct UnityEventBase {
        DWORD UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset;
        void (*UnityEngineISerializationCallbackReceiverOnBeforeSerialize)(void *_instance);
        DWORD UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset;
        void (*UnityEngineISerializationCallbackReceiverOnAfterDeserialize)(void *_instance);
        DWORD FindMethodOffset;
        void *(*FindMethod)(void *_instance, void *call);
        DWORD GetPersistentEventCountOffset;
        int (*GetPersistentEventCount)(void *_instance);
        DWORD DirtyPersistentCallsOffset;
        void (*DirtyPersistentCalls)(void *_instance);
        DWORD RebuildPersistentCallsIfNeededOffset;
        void (*RebuildPersistentCallsIfNeeded)(void *_instance);
        DWORD AddCallOffset;
        void (*AddCall)(void *_instance, void *call);
        DWORD RemoveAllListenersOffset;
        void (*RemoveAllListeners)(void *_instance);
        DWORD PrepareInvokeOffset;
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }UnityEventBase;
    struct UnityAction {
        DWORD InvokeOffset;
        void (*Invoke)(void *_instance);
        DWORD EndInvokeOffset;
        void (*EndInvoke)(void *_instance, void *result);
    }UnityAction;
    struct UnityEvent {
        DWORD AddListenerOffset;
        void (*AddListener)(void *_instance, void *call);
        DWORD GetDelegate1Offset;
        void *(*GetDelegate1)(void *action);
        DWORD InvokeOffset;
        void (*Invoke)(void *_instance);
    }UnityEvent;
}
namespace UnityEngineExperimentalPlayables{
    struct CameraPlayable {
        DWORD GetHandleOffset;
        int(*GetHandle)(void *_instance);
    }CameraPlayable;
    struct MaterialEffectPlayable {
        DWORD GetHandleOffset;
        int(*GetHandle)(void *_instance);
    }MaterialEffectPlayable;
    struct TextureMixerPlayable {
        DWORD GetHandleOffset;
        int(*GetHandle)(void *_instance);
    }TextureMixerPlayable;
}
namespace UnityEngineExperimentalRendering{
    struct BuiltinRuntimeReflectionSystem {
        DWORD TickRealtimeProbesOffset;
        bool (*TickRealtimeProbes)(void *_instance);
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
        DWORD Dispose1Offset;
        void (*Dispose1)(void *_instance, bool disposing);
        DWORD BuiltinUpdateOffset;
        bool (*BuiltinUpdate)();
        DWORD Internal_BuiltinRuntimeReflectionSystem_NewOffset;
        void *(*Internal_BuiltinRuntimeReflectionSystem_New)();
    }BuiltinRuntimeReflectionSystem;
    struct ScriptableRuntimeReflectionSystemSettings {
        DWORD set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset;
        void (*set_Internal_ScriptableRuntimeReflectionSystemSettings_system)(void *value);
        DWORD get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset;
        void *(*get_Internal_ScriptableRuntimeReflectionSystemSettings_instance)();
        DWORD ScriptingDirtyReflectionSystemInstanceOffset;
        void (*ScriptingDirtyReflectionSystemInstance)();
    }ScriptableRuntimeReflectionSystemSettings;
    struct ScriptableRuntimeReflectionSystemWrapper {
        DWORD get_implementationOffset;
        void *(*get_implementation)(void *_instance);
        DWORD set_implementationOffset;
        void (*set_implementation)(void *_instance, void *value);
    }ScriptableRuntimeReflectionSystemWrapper;
    struct GraphicsFormatUtility {
    }GraphicsFormatUtility;
}
namespace UnityEngineInternal{
    struct DefaultValueAttribute {
        DWORD get_ValueOffset;
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }DefaultValueAttribute;
    struct ExcludeFromDocsAttribute {
    }ExcludeFromDocsAttribute;
}
namespace UnityEngineNetworkingPlayerConnection{
    struct MessageEventArgs {
    }MessageEventArgs;
    struct PlayerConnection {
        DWORD get_instanceOffset;
        void *(*get_instance)();
        DWORD get_isConnectedOffset;
        bool (*get_isConnected)(void *_instance);
        DWORD CreateInstanceOffset;
        void *(*CreateInstance)();
        DWORD OnEnableOffset;
        void (*OnEnable)(void *_instance);
        DWORD GetConnectionNativeApiOffset;
        void *(*GetConnectionNativeApi)(void *_instance);
        DWORD DisconnectAllOffset;
        void (*DisconnectAll)(void *_instance);
        DWORD ConnectedCallbackInternalOffset;
        void (*ConnectedCallbackInternal)(int playerId);
        DWORD DisconnectedCallbackOffset;
        void (*DisconnectedCallback)(int playerId);
    }PlayerConnection;
    struct PlayerEditorConnectionEvents {
    }PlayerEditorConnectionEvents;
}
namespace UnityEnginePlayables{
    struct INotificationReceiver {
    }INotificationReceiver;
    struct IPlayableBehaviour {
    }IPlayableBehaviour;
    struct Playable {
        DWORD get_NullOffset;
        int(*get_Null)();
        DWORD GetHandleOffset;
        int(*GetHandle)(void *_instance);
    }Playable;
    struct PlayableAsset {
        DWORD get_durationOffset;
        DWORD get_outputsOffset;
    }PlayableAsset;
    struct PlayableBehaviour {
        DWORD CloneOffset;
    }PlayableBehaviour;
    struct PlayableBinding {
    }PlayableBinding;
    struct PlayableHandle {
        DWORD get_NullOffset;
        int(*get_Null)();
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
        DWORD IsValidOffset;
        bool (*IsValid)(void *_instance);
        DWORD GetPlayableTypeOffset;
        void *(*GetPlayableType)(void *_instance);
    }PlayableHandle;
    struct PlayableOutput {
        DWORD GetHandleOffset;
        int(*GetHandle)(void *_instance);
    }PlayableOutput;
    struct PlayableOutputHandle {
        DWORD get_NullOffset;
        int(*get_Null)();
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }PlayableOutputHandle;
}
namespace UnityEngineProfilingMemoryExperimental{
    struct MetaData {
    }MetaData;
    struct MemoryProfiler {
        DWORD PrepareMetadataOffset;
        DWORD FinalizeSnapshotOffset;
        void (*FinalizeSnapshot)(monoString *path, bool result);
    }MemoryProfiler;
}
namespace UnityEngineRendering{
    struct SphericalHarmonicsL2 {
        DWORD get_ItemOffset;
        float (*get_Item)(void *_instance, int rgb, int coefficient);
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }SphericalHarmonicsL2;
    struct LODParameters {
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }LODParameters;
    struct RenderPipeline {
        DWORD get_disposedOffset;
        bool (*get_disposed)(void *_instance);
        DWORD set_disposedOffset;
        void (*set_disposed)(void *_instance, bool value);
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
        DWORD Dispose1Offset;
        void (*Dispose1)(void *_instance, bool disposing);
    }RenderPipeline;
    struct RenderPipelineAsset {
        DWORD InternalCreatePipelineOffset;
        void *(*InternalCreatePipeline)(void *_instance);
        DWORD get_renderingLayerMaskNamesOffset;
        DWORD get_defaultMaterialOffset;
        void *(*get_defaultMaterial)(void *_instance);
        DWORD get_autodeskInteractiveShaderOffset;
        void *(*get_autodeskInteractiveShader)(void *_instance);
        DWORD get_autodeskInteractiveTransparentShaderOffset;
        void *(*get_autodeskInteractiveTransparentShader)(void *_instance);
        DWORD get_autodeskInteractiveMaskedShaderOffset;
        void *(*get_autodeskInteractiveMaskedShader)(void *_instance);
        DWORD get_terrainDetailLitShaderOffset;
        void *(*get_terrainDetailLitShader)(void *_instance);
        DWORD get_terrainDetailGrassShaderOffset;
        void *(*get_terrainDetailGrassShader)(void *_instance);
        DWORD get_terrainDetailGrassBillboardShaderOffset;
        void *(*get_terrainDetailGrassBillboardShader)(void *_instance);
        DWORD get_defaultParticleMaterialOffset;
        void *(*get_defaultParticleMaterial)(void *_instance);
        DWORD get_defaultLineMaterialOffset;
        void *(*get_defaultLineMaterial)(void *_instance);
        DWORD get_defaultTerrainMaterialOffset;
        void *(*get_defaultTerrainMaterial)(void *_instance);
        DWORD get_defaultUIMaterialOffset;
        void *(*get_defaultUIMaterial)(void *_instance);
        DWORD get_defaultUIOverdrawMaterialOffset;
        void *(*get_defaultUIOverdrawMaterial)(void *_instance);
        DWORD get_defaultUIETC1SupportedMaterialOffset;
        void *(*get_defaultUIETC1SupportedMaterial)(void *_instance);
        DWORD get_default2DMaterialOffset;
        void *(*get_default2DMaterial)(void *_instance);
        DWORD get_defaultShaderOffset;
        void *(*get_defaultShader)(void *_instance);
        DWORD get_defaultSpeedTree7ShaderOffset;
        void *(*get_defaultSpeedTree7Shader)(void *_instance);
        DWORD get_defaultSpeedTree8ShaderOffset;
        void *(*get_defaultSpeedTree8Shader)(void *_instance);
        DWORD OnValidateOffset;
        void (*OnValidate)(void *_instance);
        DWORD OnDisableOffset;
        void (*OnDisable)(void *_instance);
    }RenderPipelineAsset;
    struct RenderPipelineManager {
        DWORD get_currentPipelineOffset;
        void *(*get_currentPipeline)();
        DWORD set_currentPipelineOffset;
        void (*set_currentPipeline)(void *value);
        DWORD CleanupRenderPipelineOffset;
        void (*CleanupRenderPipeline)();
        DWORD PrepareRenderPipelineOffset;
        void (*PrepareRenderPipeline)(void *pipelineAsset);
    }RenderPipelineManager;
    struct ScriptableRenderContext {
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }ScriptableRenderContext;
    struct SupportedRenderingFeatures {
        DWORD get_activeOffset;
        void *(*get_active)();
        DWORD set_activeOffset;
        void (*set_active)(void *value);
        DWORD get_defaultMixedLightingModesOffset;
        int(*get_defaultMixedLightingModes)(void *_instance);
        DWORD get_mixedLightingModesOffset;
        int(*get_mixedLightingModes)(void *_instance);
        DWORD get_lightmapBakeTypesOffset;
        int(*get_lightmapBakeTypes)(void *_instance);
        DWORD get_lightmapsModesOffset;
        int(*get_lightmapsModes)(void *_instance);
    }SupportedRenderingFeatures;
    struct BatchCullingContext {
    }BatchCullingContext;
    struct BatchRendererGroup {
        DWORD DisposeOffset;
        void (*Dispose)(void *_instance);
    }BatchRendererGroup;
}
namespace UnityEngineSceneManagement{
    struct Scene {
        DWORD IsValidInternalOffset;
        bool (*IsValidInternal)(int sceneHandle);
        DWORD GetNameInternalOffset;
        monoString *(*GetNameInternal)(int sceneHandle);
        DWORD GetIsLoadedInternalOffset;
        bool (*GetIsLoadedInternal)(int sceneHandle);
        DWORD GetBuildIndexInternalOffset;
        int (*GetBuildIndexInternal)(int sceneHandle);
        DWORD GetRootCountInternalOffset;
        int (*GetRootCountInternal)(int sceneHandle);
        DWORD get_handleOffset;
        int (*get_handle)(void *_instance);
        DWORD IsValidOffset;
        bool (*IsValid)(void *_instance);
        DWORD get_nameOffset;
        monoString *(*get_name)(void *_instance);
        DWORD get_isLoadedOffset;
        bool (*get_isLoaded)(void *_instance);
        DWORD get_buildIndexOffset;
        int (*get_buildIndex)(void *_instance);
        DWORD get_rootCountOffset;
        int (*get_rootCount)(void *_instance);
        DWORD GetRootGameObjectsOffset;
        DWORD GetHashCodeOffset;
        int (*GetHashCode)(void *_instance);
    }Scene;
    struct SceneManager {
        DWORD get_sceneCountOffset;
        int (*get_sceneCount)();
        DWORD get_sceneCountInBuildSettingsOffset;
        int (*get_sceneCountInBuildSettings)();
        DWORD GetActiveSceneOffset;
        int(*GetActiveScene)();
        DWORD GetSceneAtOffset;
        int(*GetSceneAt)(int index);
        DWORD GetAllScenesOffset;
        DWORD LoadScene1Offset;
        void (*LoadScene1)(monoString *sceneName);
        DWORD LoadScene4Offset;
        void (*LoadScene4)(int sceneBuildIndex);
        DWORD LoadSceneAsync3Offset;
        void *(*LoadSceneAsync3)(monoString *sceneName);
    }SceneManager;
    struct LoadSceneParameters {
    }LoadSceneParameters;
}
namespace UnityEngineScripting{
    struct PreserveAttribute {
    }PreserveAttribute;
}
namespace UnityEngineScriptingAPIUpdating{
    struct MovedFromAttribute {
    }MovedFromAttribute;
}
namespace UnityEngineSerialization{
    struct FormerlySerializedAsAttribute {
    }FormerlySerializedAsAttribute;
}
namespace UnityEngineU2D{
    struct SpriteAtlasManager {
        DWORD RequestAtlasOffset;
        bool (*RequestAtlas)(monoString *tag);
        DWORD PostRegisteredAtlasOffset;
        void (*PostRegisteredAtlas)(void *spriteAtlas);
        DWORD RegisterOffset;
        void (*Register)(void *spriteAtlas);
    }SpriteAtlasManager;
}
namespace UnityEngine_ScriptingAPIUpdating{
    struct APIUpdaterRuntimeHelpers {
    }APIUpdaterRuntimeHelpers;
}
namespace UnityEngineInternal{
    struct MathfInternal {
    }MathfInternal;
    struct TypeInferenceRuleAttribute {
        DWORD ctor1Offset;
        void (*ctor1)(void *_instance, monoString *rule);
        DWORD ToStringOffset;
        monoString *(*ToString)(void *_instance);
    }TypeInferenceRuleAttribute;
    struct GenericStack {
    }GenericStack;
}
void AssignUnityPointers()
{
    UnityEngine::AndroidJNIHelper.get_debugOffset = getRealOffset(0x18728A0);
    UnityEngine::AndroidJNIHelper.get_debug = (bool(*)())UnityEngine::AndroidJNIHelper.get_debugOffset;

    UnityEngine::AndroidJNIHelper.set_debugOffset = getRealOffset(0x1872908);
    UnityEngine::AndroidJNIHelper.set_debug = (void(*)(bool))UnityEngine::AndroidJNIHelper.set_debugOffset;

    UnityEngine::AndroidJNIHelper.CreateJavaRunnableOffset = getRealOffset(0x1872B7C);
    UnityEngine::AndroidJNIHelper.CreateJavaProxyOffset = getRealOffset(0x1872B84);
    UnityEngine::AndroidJNIHelper.ConvertToJNIArrayOffset = getRealOffset(0x1872BD0);
    UnityEngine::AndroidJNI.AttachCurrentThreadOffset = getRealOffset(0x186F0AC);
    UnityEngine::AndroidJNI.AttachCurrentThread = (int(*)())UnityEngine::AndroidJNI.AttachCurrentThreadOffset;

    UnityEngine::AndroidJNI.DetachCurrentThreadOffset = getRealOffset(0x186F118);
    UnityEngine::AndroidJNI.DetachCurrentThread = (int(*)())UnityEngine::AndroidJNI.DetachCurrentThreadOffset;

    UnityEngine::AndroidJNI.GetVersionOffset = getRealOffset(0x186F184);
    UnityEngine::AndroidJNI.GetVersion = (int(*)())UnityEngine::AndroidJNI.GetVersionOffset;

    UnityEngine::AndroidJNI.FindClassOffset = getRealOffset(0x186F1E8);
    UnityEngine::AndroidJNI.ExceptionOccurredOffset = getRealOffset(0x186F554);
    UnityEngine::AndroidJNI.ExceptionDescribeOffset = getRealOffset(0x186F598);
    UnityEngine::AndroidJNI.ExceptionDescribe = (void(*)())UnityEngine::AndroidJNI.ExceptionDescribeOffset;

    UnityEngine::AndroidJNI.ExceptionClearOffset = getRealOffset(0x186F600);
    UnityEngine::AndroidJNI.ExceptionClear = (void(*)())UnityEngine::AndroidJNI.ExceptionClearOffset;

    UnityEngine::AndroidJNI.FatalErrorOffset = getRealOffset(0x186F644);
    UnityEngine::AndroidJNI.FatalError = (void(*)(monoString*))UnityEngine::AndroidJNI.FatalErrorOffset;

    UnityEngine::AndroidJNI.PushLocalFrameOffset = getRealOffset(0x186F6BC);
    UnityEngine::AndroidJNI.PushLocalFrame = (int(*)(int))UnityEngine::AndroidJNI.PushLocalFrameOffset;

    UnityEngine::AndroidJNI.EnsureLocalCapacityOffset = getRealOffset(0x186F990);
    UnityEngine::AndroidJNI.EnsureLocalCapacity = (int(*)(int))UnityEngine::AndroidJNI.EnsureLocalCapacityOffset;

    UnityEngine::AndroidJNI.NewStringUTFOffset = getRealOffset(0x186FCF4);
    UnityEngine::AndroidJNI.NewBooleanArrayOffset = getRealOffset(0x1871CFC);
    UnityEngine::AndroidJNI.NewByteArrayOffset = getRealOffset(0x1871D78);
    UnityEngine::AndroidJNI.NewSByteArrayOffset = getRealOffset(0x1871DC4);
    UnityEngine::AndroidJNI.NewCharArrayOffset = getRealOffset(0x1871E10);
    UnityEngine::AndroidJNI.NewShortArrayOffset = getRealOffset(0x1871E88);
    UnityEngine::AndroidJNI.NewIntArrayOffset = getRealOffset(0x1871F00);
    UnityEngine::AndroidJNI.NewLongArrayOffset = getRealOffset(0x1871F78);
    UnityEngine::AndroidJNI.NewFloatArrayOffset = getRealOffset(0x1871FF0);
    UnityEngine::AndroidJNI.NewDoubleArrayOffset = getRealOffset(0x1872068);
    UnityEngine::AndroidJNISafe.CheckExceptionOffset = getRealOffset(0x1872C20);
    UnityEngine::AndroidJNISafe.CheckException = (void(*)())UnityEngine::AndroidJNISafe.CheckExceptionOffset;

    UnityEngine::AndroidJNISafe.NewStringUTFOffset = getRealOffset(0x18731E8);
    UnityEngine::AndroidJNISafe.FindClassOffset = getRealOffset(0x1873780);
    UnityEngine::AndroidJavaObject.ctor7Offset = getRealOffset(0x16483EC);
    UnityEngine::AndroidJavaObject.ctor7 = (void(*)(void*))UnityEngine::AndroidJavaObject.ctor7Offset;

    UnityEngine::AndroidJavaObject.DisposeOffset = getRealOffset(0x1877C88);
    UnityEngine::AndroidJavaObject.Dispose = (void(*)(void*))UnityEngine::AndroidJavaObject.DisposeOffset;

    UnityEngine::AndroidJavaObject.GetRawObjectOffset = getRealOffset(0x1877FB4);
    UnityEngine::AndroidJavaObject.GetRawClassOffset = getRealOffset(0x1877FA8);
    UnityEngine::AndroidJavaObject.DebugPrintOffset = getRealOffset(0x18770D8);
    UnityEngine::AndroidJavaObject.DebugPrint = (void(*)(void*, monoString*))UnityEngine::AndroidJavaObject.DebugPrintOffset;

    UnityEngine::AndroidJavaObject.FinalizeOffset = getRealOffset(0x18785C0);
    UnityEngine::AndroidJavaObject.Finalize = (void(*)(void*))UnityEngine::AndroidJavaObject.FinalizeOffset;

    UnityEngine::AndroidJavaObject.Dispose1Offset = getRealOffset(0x1878638);
    UnityEngine::AndroidJavaObject.Dispose1 = (void(*)(void*, bool))UnityEngine::AndroidJavaObject.Dispose1Offset;

    UnityEngine::AndroidJavaObject._DisposeOffset = getRealOffset(0x1877C84);
    UnityEngine::AndroidJavaObject._Dispose = (void(*)(void*))UnityEngine::AndroidJavaObject._DisposeOffset;

    UnityEngine::AndroidJavaObject._GetRawObjectOffset = getRealOffset(0x1877F9C);
    UnityEngine::AndroidJavaObject._GetRawClassOffset = getRealOffset(0x1877FB4);
    UnityEngine::AndroidJavaObject.FindClassOffset = getRealOffset(0x18771A4);
    UnityEngine::AndroidJavaObject.FindClass = (void *(*)(monoString*))UnityEngine::AndroidJavaObject.FindClassOffset;

    UnityEngine::AndroidJavaObject.get_JavaLangClassOffset = getRealOffset(0x1878808);
    UnityEngine::AndroidJavaObject.get_JavaLangClass = (void *(*)())UnityEngine::AndroidJavaObject.get_JavaLangClassOffset;

    UnityEngine::AndroidJavaClass._AndroidJavaClassOffset = getRealOffset(0x1876D9C);
    UnityEngine::AndroidJavaClass._AndroidJavaClass = (void(*)(void*, monoString*))UnityEngine::AndroidJavaClass._AndroidJavaClassOffset;

    UnityEngine::AndroidJavaRunnable.InvokeOffset = getRealOffset(0x1879860);
    UnityEngine::AndroidJavaRunnable.Invoke = (void(*)(void*))UnityEngine::AndroidJavaRunnable.InvokeOffset;

    UnityEngine::AndroidJavaRunnable.EndInvokeOffset = getRealOffset(0x1879AD0);
    UnityEngine::AndroidJavaRunnable.EndInvoke = (void(*)(void*, void *))UnityEngine::AndroidJavaRunnable.EndInvokeOffset;

    UnityEngine::AndroidJavaException.get_StackTraceOffset = getRealOffset(0x1877310);
    UnityEngine::AndroidJavaException.get_StackTrace = (monoString *(*)(void*))UnityEngine::AndroidJavaException.get_StackTraceOffset;

    UnityEngine::GlobalJavaObjectRef.FinalizeOffset = getRealOffset(0x1346BF0);
    UnityEngine::GlobalJavaObjectRef.Finalize = (void(*)(void*))UnityEngine::GlobalJavaObjectRef.FinalizeOffset;

    UnityEngine::GlobalJavaObjectRef.op_ImplicitOffset = getRealOffset(0x1346CDC);
    UnityEngine::GlobalJavaObjectRef.DisposeOffset = getRealOffset(0x1346C54);
    UnityEngine::GlobalJavaObjectRef.Dispose = (void(*)(void*))UnityEngine::GlobalJavaObjectRef.DisposeOffset;

    UnityEngine::AndroidJavaRunnableProxy.runOffset = getRealOffset(0x164B1CC);
    UnityEngine::AndroidJavaRunnableProxy.run = (void(*)(void*))UnityEngine::AndroidJavaRunnableProxy.runOffset;

    UnityEngine::AndroidJavaProxy.ctor1Offset = getRealOffset(0x164A08C);
    UnityEngine::AndroidJavaProxy.ctor1 = (void(*)(void*, void *))UnityEngine::AndroidJavaProxy.ctor1Offset;

    UnityEngine::AndroidJavaProxy.equalsOffset = getRealOffset(0x164AA5C);
    UnityEngine::AndroidJavaProxy.equals = (bool(*)(void*, void *))UnityEngine::AndroidJavaProxy.equalsOffset;

    UnityEngine::AndroidJavaProxy.hashCodeOffset = getRealOffset(0x164AC08);
    UnityEngine::AndroidJavaProxy.hashCode = (int(*)(void*))UnityEngine::AndroidJavaProxy.hashCodeOffset;

    UnityEngine::AndroidJavaProxy.toStringOffset = getRealOffset(0x164AD38);
    UnityEngine::AndroidJavaProxy.toString = (monoString *(*)(void*))UnityEngine::AndroidJavaProxy.toStringOffset;

    UnityEngine::AndroidJavaProxy.GetProxyOffset = getRealOffset(0x164AB38);
    UnityEngine::AndroidJavaProxy.GetProxy = (void *(*)(void*))UnityEngine::AndroidJavaProxy.GetProxyOffset;

    UnityEngine::AndroidReflection.IsPrimitiveOffset = getRealOffset(0x164B1F4);
    UnityEngine::AndroidReflection.IsPrimitive = (bool(*)(void *))UnityEngine::AndroidReflection.IsPrimitiveOffset;

    UnityEngine::AndroidReflection.IsAssignableFromOffset = getRealOffset(0x164B220);
    UnityEngine::AndroidReflection.IsAssignableFrom = (bool(*)(void *, void *))UnityEngine::AndroidReflection.IsAssignableFromOffset;

    UnityEngine::AndroidReflection.GetStaticMethodIDOffset = getRealOffset(0x164B25C);
    UnityEngine::_AndroidJNIHelper.CreateJavaProxyOffset = getRealOffset(0x1AE6B84);
    UnityEngine::_AndroidJNIHelper.CreateJavaRunnableOffset = getRealOffset(0x1AE6C44);
    UnityEngine::_AndroidJNIHelper.UnboxArrayOffset = getRealOffset(0x1AE86C8);
    UnityEngine::_AndroidJNIHelper.UnboxOffset = getRealOffset(0x1AE8D90);
    UnityEngine::_AndroidJNIHelper.ConvertToJNIArrayOffset = getRealOffset(0x1AE7B48);
    UnityEngine::Keyframe.ctor1Offset = getRealOffset(0x4194E4);
    UnityEngine::Keyframe.ctor1 = (void(*)(void*, float, float, float, float))UnityEngine::Keyframe.ctor1Offset;

    UnityEngine::Keyframe.get_timeOffset = getRealOffset(0x419508);
    UnityEngine::Keyframe.get_time = (float(*)(void*))UnityEngine::Keyframe.get_timeOffset;

    UnityEngine::Keyframe.get_valueOffset = getRealOffset(0x419510);
    UnityEngine::Keyframe.get_value = (float(*)(void*))UnityEngine::Keyframe.get_valueOffset;

    UnityEngine::Keyframe.get_inTangentOffset = getRealOffset(0x419518);
    UnityEngine::Keyframe.get_inTangent = (float(*)(void*))UnityEngine::Keyframe.get_inTangentOffset;

    UnityEngine::Keyframe.get_outTangentOffset = getRealOffset(0x419520);
    UnityEngine::Keyframe.get_outTangent = (float(*)(void*))UnityEngine::Keyframe.get_outTangentOffset;

    UnityEngine::AnimationCurve.ctor1Offset = getRealOffset(0x164BC98);
    UnityEngine::AnimationCurve.ctor1 = (void(*)(void*))UnityEngine::AnimationCurve.ctor1Offset;

    UnityEngine::AnimationCurve.FinalizeOffset = getRealOffset(0x164BD90);
    UnityEngine::AnimationCurve.Finalize = (void(*)(void*))UnityEngine::AnimationCurve.FinalizeOffset;

    UnityEngine::AnimationCurve.EvaluateOffset = getRealOffset(0x164BE30);
    UnityEngine::AnimationCurve.Evaluate = (float(*)(void*, float))UnityEngine::AnimationCurve.EvaluateOffset;

    UnityEngine::AnimationCurve.get_keysOffset = getRealOffset(0x164BEB0);
    UnityEngine::AnimationCurve.get_ItemOffset = getRealOffset(0x164BF48);
    UnityEngine::AnimationCurve.get_Item = (int (*)(void*, int))UnityEngine::AnimationCurve.get_ItemOffset;

    UnityEngine::AnimationCurve.get_lengthOffset = getRealOffset(0x164C080);
    UnityEngine::AnimationCurve.get_length = (int(*)(void*))UnityEngine::AnimationCurve.get_lengthOffset;

    UnityEngine::AnimationCurve.GetKeyOffset = getRealOffset(0x164BFF4);
    UnityEngine::AnimationCurve.GetKey = (int (*)(void*, int))UnityEngine::AnimationCurve.GetKeyOffset;

    UnityEngine::AnimationCurve.GetKeysOffset = getRealOffset(0x164BEFC);
    UnityEngine::AnimationCurve.EaseInOutOffset = getRealOffset(0x164C14C);
    UnityEngine::AnimationCurve.EaseInOut = (void *(*)(float, float, float, float))UnityEngine::AnimationCurve.EaseInOutOffset;

    UnityEngine::AnimationCurve.Equals1Offset = getRealOffset(0x164C4A0);
    UnityEngine::AnimationCurve.Equals1 = (bool(*)(void*, void *))UnityEngine::AnimationCurve.Equals1Offset;

    UnityEngine::AnimationCurve.GetHashCodeOffset = getRealOffset(0x164C598);
    UnityEngine::AnimationCurve.GetHashCode = (int(*)(void*))UnityEngine::AnimationCurve.GetHashCodeOffset;

    UnityEngine::Application.QuitOffset = getRealOffset(0x164C5A4);
    UnityEngine::Application.Quit = (void(*)(int))UnityEngine::Application.QuitOffset;

    UnityEngine::Application.Quit1Offset = getRealOffset(0x164C5F0);
    UnityEngine::Application.Quit1 = (void(*)())UnityEngine::Application.Quit1Offset;

    UnityEngine::Application.get_isPlayingOffset = getRealOffset(0x164C638);
    UnityEngine::Application.get_isPlaying = (bool(*)())UnityEngine::Application.get_isPlayingOffset;

    UnityEngine::Application.get_isFocusedOffset = getRealOffset(0x164C6A0);
    UnityEngine::Application.get_isFocused = (bool(*)())UnityEngine::Application.get_isFocusedOffset;

    UnityEngine::Application.get_platformOffset = getRealOffset(0x164C708);
    UnityEngine::Application.get_platform = (int (*)())UnityEngine::Application.get_platformOffset;

    UnityEngine::Application.get_isMobilePlatformOffset = getRealOffset(0x164C74C);
    UnityEngine::Application.get_isMobilePlatform = (bool(*)())UnityEngine::Application.get_isMobilePlatformOffset;

    UnityEngine::Application.get_isConsolePlatformOffset = getRealOffset(0x164C7CC);
    UnityEngine::Application.get_isConsolePlatform = (bool(*)())UnityEngine::Application.get_isConsolePlatformOffset;

    UnityEngine::Application.set_runInBackgroundOffset = getRealOffset(0x164C820);
    UnityEngine::Application.set_runInBackground = (void(*)(bool))UnityEngine::Application.set_runInBackgroundOffset;

    UnityEngine::Application.get_dataPathOffset = getRealOffset(0x164C8A4);
    UnityEngine::Application.get_dataPath = (monoString *(*)())UnityEngine::Application.get_dataPathOffset;

    UnityEngine::Application.get_streamingAssetsPathOffset = getRealOffset(0x164C908);
    UnityEngine::Application.get_streamingAssetsPath = (monoString *(*)())UnityEngine::Application.get_streamingAssetsPathOffset;

    UnityEngine::Application.get_persistentDataPathOffset = getRealOffset(0x164C978);
    UnityEngine::Application.get_persistentDataPath = (monoString *(*)())UnityEngine::Application.get_persistentDataPathOffset;

    UnityEngine::Application.get_temporaryCachePathOffset = getRealOffset(0x164C9E8);
    UnityEngine::Application.get_temporaryCachePath = (monoString *(*)())UnityEngine::Application.get_temporaryCachePathOffset;

    UnityEngine::Application.ExternalEvalOffset = getRealOffset(0x164CA58);
    UnityEngine::Application.ExternalEval = (void(*)(monoString*))UnityEngine::Application.ExternalEvalOffset;

    UnityEngine::Application.Internal_ExternalCallOffset = getRealOffset(0x164CB94);
    UnityEngine::Application.Internal_ExternalCall = (void(*)(monoString*))UnityEngine::Application.Internal_ExternalCallOffset;

    UnityEngine::Application.get_unityVersionOffset = getRealOffset(0x164CBE0);
    UnityEngine::Application.get_unityVersion = (monoString *(*)())UnityEngine::Application.get_unityVersionOffset;

    UnityEngine::Application.get_versionOffset = getRealOffset(0x164CC48);
    UnityEngine::Application.get_version = (monoString *(*)())UnityEngine::Application.get_versionOffset;

    UnityEngine::Application.get_cloudProjectIdOffset = getRealOffset(0x164CCAC);
    UnityEngine::Application.get_cloudProjectId = (monoString *(*)())UnityEngine::Application.get_cloudProjectIdOffset;

    UnityEngine::Application.OpenURLOffset = getRealOffset(0x164CD18);
    UnityEngine::Application.OpenURL = (void(*)(monoString*))UnityEngine::Application.OpenURLOffset;

    UnityEngine::Application.get_targetFrameRateOffset = getRealOffset(0x164CD8C);
    UnityEngine::Application.get_targetFrameRate = (int(*)())UnityEngine::Application.get_targetFrameRateOffset;

    UnityEngine::Application.set_targetFrameRateOffset = getRealOffset(0x164CDF8);
    UnityEngine::Application.set_targetFrameRate = (void(*)(int))UnityEngine::Application.set_targetFrameRateOffset;

    UnityEngine::Application.get_systemLanguageOffset = getRealOffset(0x164CE78);
    UnityEngine::Application.get_systemLanguage = (int (*)())UnityEngine::Application.get_systemLanguageOffset;

    UnityEngine::Application.SetLogCallbackDefinedOffset = getRealOffset(0x164CEE4);
    UnityEngine::Application.SetLogCallbackDefined = (void(*)(bool))UnityEngine::Application.SetLogCallbackDefinedOffset;

    UnityEngine::Application.get_internetReachabilityOffset = getRealOffset(0x164CF30);
    UnityEngine::Application.get_internetReachability = (int (*)())UnityEngine::Application.get_internetReachabilityOffset;

    UnityEngine::Application.CallLowMemoryOffset = getRealOffset(0x164CFA0);
    UnityEngine::Application.CallLowMemory = (void(*)())UnityEngine::Application.CallLowMemoryOffset;

    UnityEngine::Application.add_logMessageReceivedOffset = getRealOffset(0x164D250);
    UnityEngine::Application.add_logMessageReceived = (void(*)(void *))UnityEngine::Application.add_logMessageReceivedOffset;

    UnityEngine::Application.remove_logMessageReceivedOffset = getRealOffset(0x164D334);
    UnityEngine::Application.remove_logMessageReceived = (void(*)(void *))UnityEngine::Application.remove_logMessageReceivedOffset;

    UnityEngine::Application.get_isEditorOffset = getRealOffset(0x164E314);
    UnityEngine::Application.get_isEditor = (bool(*)())UnityEngine::Application.get_isEditorOffset;

    UnityEngine::Application.Internal_ApplicationWantsToQuitOffset = getRealOffset(0x164E31C);
    UnityEngine::Application.Internal_ApplicationWantsToQuit = (bool(*)())UnityEngine::Application.Internal_ApplicationWantsToQuitOffset;

    UnityEngine::Application.Internal_ApplicationQuitOffset = getRealOffset(0x164E638);
    UnityEngine::Application.Internal_ApplicationQuit = (void(*)())UnityEngine::Application.Internal_ApplicationQuitOffset;

    UnityEngine::Application.InvokeOnBeforeRenderOffset = getRealOffset(0x164E6A8);
    UnityEngine::Application.InvokeOnBeforeRender = (void(*)())UnityEngine::Application.InvokeOnBeforeRenderOffset;

    UnityEngine::Application.InvokeFocusChangedOffset = getRealOffset(0x164E938);
    UnityEngine::Application.InvokeFocusChanged = (void(*)(bool))UnityEngine::Application.InvokeFocusChangedOffset;

    UnityEngine::Application.get_levelCountOffset = getRealOffset(0x164E9BC);
    UnityEngine::Application.get_levelCount = (int(*)())UnityEngine::Application.get_levelCountOffset;

    UnityEngine::Application.get_loadedLevelOffset = getRealOffset(0x164E9C4);
    UnityEngine::Application.get_loadedLevel = (int(*)())UnityEngine::Application.get_loadedLevelOffset;

    UnityEngine::Application.LoadLevelOffset = getRealOffset(0x164E9F0);
    UnityEngine::Application.LoadLevel = (void(*)(int))UnityEngine::Application.LoadLevelOffset;

    UnityEngine::Application.LoadLevel1Offset = getRealOffset(0x164E9FC);
    UnityEngine::Application.LoadLevel1 = (void(*)(monoString*))UnityEngine::Application.LoadLevel1Offset;

    UnityEngine::Application.LoadLevelAsyncOffset = getRealOffset(0x164EA08);
    UnityEngine::Application.LoadLevelAsync = (void *(*)(monoString*))UnityEngine::Application.LoadLevelAsyncOffset;

    UnityEngine::Application.LoadLevelAdditiveAsyncOffset = getRealOffset(0x164EA14);
    UnityEngine::Application.LoadLevelAdditiveAsync = (void *(*)(monoString*))UnityEngine::Application.LoadLevelAdditiveAsyncOffset;

    UnityEngine::CachedAssetBundle.get_nameOffset = getRealOffset(0x424358);
    UnityEngine::CachedAssetBundle.get_name = (monoString *(*)(void*))UnityEngine::CachedAssetBundle.get_nameOffset;

    UnityEngine::CachedAssetBundle.get_hashOffset = getRealOffset(0x424360);
    UnityEngine::CachedAssetBundle.get_hash = (int (*)(void*))UnityEngine::CachedAssetBundle.get_hashOffset;

    UnityEngine::Camera.get_nearClipPlaneOffset = getRealOffset(0x1651BFC);
    UnityEngine::Camera.get_nearClipPlane = (float(*)(void*))UnityEngine::Camera.get_nearClipPlaneOffset;

    UnityEngine::Camera.set_nearClipPlaneOffset = getRealOffset(0x1651C68);
    UnityEngine::Camera.set_nearClipPlane = (void(*)(void*, float))UnityEngine::Camera.set_nearClipPlaneOffset;

    UnityEngine::Camera.get_farClipPlaneOffset = getRealOffset(0x1651CEC);
    UnityEngine::Camera.get_farClipPlane = (float(*)(void*))UnityEngine::Camera.get_farClipPlaneOffset;

    UnityEngine::Camera.set_farClipPlaneOffset = getRealOffset(0x1651D58);
    UnityEngine::Camera.set_farClipPlane = (void(*)(void*, float))UnityEngine::Camera.set_farClipPlaneOffset;

    UnityEngine::Camera.get_fieldOfViewOffset = getRealOffset(0x1651DD8);
    UnityEngine::Camera.get_fieldOfView = (float(*)(void*))UnityEngine::Camera.get_fieldOfViewOffset;

    UnityEngine::Camera.set_fieldOfViewOffset = getRealOffset(0x1651E44);
    UnityEngine::Camera.set_fieldOfView = (void(*)(void*, float))UnityEngine::Camera.set_fieldOfViewOffset;

    UnityEngine::Camera.get_renderingPathOffset = getRealOffset(0x1651EC4);
    UnityEngine::Camera.get_renderingPath = (int (*)(void*))UnityEngine::Camera.get_renderingPathOffset;

    UnityEngine::Camera.get_allowHDROffset = getRealOffset(0x1651F84);
    UnityEngine::Camera.get_allowHDR = (bool(*)(void*))UnityEngine::Camera.get_allowHDROffset;

    UnityEngine::Camera.set_allowHDROffset = getRealOffset(0x1651FEC);
    UnityEngine::Camera.set_allowHDR = (void(*)(void*, bool))UnityEngine::Camera.set_allowHDROffset;

    UnityEngine::Camera.get_allowMSAAOffset = getRealOffset(0x165206C);
    UnityEngine::Camera.get_allowMSAA = (bool(*)(void*))UnityEngine::Camera.get_allowMSAAOffset;

    UnityEngine::Camera.set_allowMSAAOffset = getRealOffset(0x16520D4);
    UnityEngine::Camera.set_allowMSAA = (void(*)(void*, bool))UnityEngine::Camera.set_allowMSAAOffset;

    UnityEngine::Camera.set_orthographicSizeOffset = getRealOffset(0x1652154);
    UnityEngine::Camera.set_orthographicSize = (void(*)(void*, float))UnityEngine::Camera.set_orthographicSizeOffset;

    UnityEngine::Camera.get_orthographicOffset = getRealOffset(0x16521D8);
    UnityEngine::Camera.get_orthographic = (bool(*)(void*))UnityEngine::Camera.get_orthographicOffset;

    UnityEngine::Camera.set_orthographicOffset = getRealOffset(0x1652244);
    UnityEngine::Camera.set_orthographic = (void(*)(void*, bool))UnityEngine::Camera.set_orthographicOffset;

    UnityEngine::Camera.get_depthOffset = getRealOffset(0x16522C8);
    UnityEngine::Camera.get_depth = (float(*)(void*))UnityEngine::Camera.get_depthOffset;

    UnityEngine::Camera.set_depthOffset = getRealOffset(0x165232C);
    UnityEngine::Camera.set_depth = (void(*)(void*, float))UnityEngine::Camera.set_depthOffset;

    UnityEngine::Camera.get_aspectOffset = getRealOffset(0x16523A8);
    UnityEngine::Camera.get_aspect = (float(*)(void*))UnityEngine::Camera.get_aspectOffset;

    UnityEngine::Camera.set_aspectOffset = getRealOffset(0x1652410);
    UnityEngine::Camera.set_aspect = (void(*)(void*, float))UnityEngine::Camera.set_aspectOffset;

    UnityEngine::Camera.get_cullingMaskOffset = getRealOffset(0x165248C);
    UnityEngine::Camera.get_cullingMask = (int(*)(void*))UnityEngine::Camera.get_cullingMaskOffset;

    UnityEngine::Camera.set_cullingMaskOffset = getRealOffset(0x16524F8);
    UnityEngine::Camera.set_cullingMask = (void(*)(void*, int))UnityEngine::Camera.set_cullingMaskOffset;

    UnityEngine::Camera.get_eventMaskOffset = getRealOffset(0x1652578);
    UnityEngine::Camera.get_eventMask = (int(*)(void*))UnityEngine::Camera.get_eventMaskOffset;

    UnityEngine::Camera.set_layerCullSphericalOffset = getRealOffset(0x16525E0);
    UnityEngine::Camera.set_layerCullSpherical = (void(*)(void*, bool))UnityEngine::Camera.set_layerCullSphericalOffset;

    UnityEngine::Camera.set_useOcclusionCullingOffset = getRealOffset(0x16527C0);
    UnityEngine::Camera.set_useOcclusionCulling = (void(*)(void*, bool))UnityEngine::Camera.set_useOcclusionCullingOffset;

    UnityEngine::Camera.set_backgroundColorOffset = getRealOffset(0x1652848);
    UnityEngine::Camera.set_backgroundColor = (void(*)(void*, Color))UnityEngine::Camera.set_backgroundColorOffset;

    UnityEngine::Camera.get_clearFlagsOffset = getRealOffset(0x1652904);
    UnityEngine::Camera.get_clearFlags = (int (*)(void*))UnityEngine::Camera.get_clearFlagsOffset;

    UnityEngine::Camera.get_depthTextureModeOffset = getRealOffset(0x16529C4);
    UnityEngine::Camera.get_depthTextureMode = (int (*)(void*))UnityEngine::Camera.get_depthTextureModeOffset;

    UnityEngine::Camera.get_pixelRectOffset = getRealOffset(0x1652B44);
    UnityEngine::Camera.get_pixelRect = (int (*)(void*))UnityEngine::Camera.get_pixelRectOffset;

    UnityEngine::Camera.get_pixelWidthOffset = getRealOffset(0x1652CC4);
    UnityEngine::Camera.get_pixelWidth = (int(*)(void*))UnityEngine::Camera.get_pixelWidthOffset;

    UnityEngine::Camera.get_pixelHeightOffset = getRealOffset(0x1652D30);
    UnityEngine::Camera.get_pixelHeight = (int(*)(void*))UnityEngine::Camera.get_pixelHeightOffset;

    UnityEngine::Camera.get_targetTextureOffset = getRealOffset(0x1652D9C);
    UnityEngine::Camera.get_targetTexture = (void *(*)(void*))UnityEngine::Camera.get_targetTextureOffset;

    UnityEngine::Camera.set_targetTextureOffset = getRealOffset(0x1652E08);
    UnityEngine::Camera.set_targetTexture = (void(*)(void*, void *))UnityEngine::Camera.set_targetTextureOffset;

    UnityEngine::Camera.get_targetDisplayOffset = getRealOffset(0x1652E5C);
    UnityEngine::Camera.get_targetDisplay = (int(*)(void*))UnityEngine::Camera.get_targetDisplayOffset;

    UnityEngine::Camera.get_worldToCameraMatrixOffset = getRealOffset(0x1652EC8);
    UnityEngine::Camera.get_worldToCameraMatrix = (int (*)(void*))UnityEngine::Camera.get_worldToCameraMatrixOffset;

    UnityEngine::Camera.get_projectionMatrixOffset = getRealOffset(0x16530C4);
    UnityEngine::Camera.get_projectionMatrix = (int (*)(void*))UnityEngine::Camera.get_projectionMatrixOffset;

    UnityEngine::Camera.ResetWorldToCameraMatrixOffset = getRealOffset(0x16532C0);
    UnityEngine::Camera.ResetWorldToCameraMatrix = (void(*)(void*))UnityEngine::Camera.ResetWorldToCameraMatrixOffset;

    UnityEngine::Camera.WorldToScreenPoint1Offset = getRealOffset(0x17D070C);
    UnityEngine::Camera.WorldToScreenPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.WorldToScreenPoint1Offset;

    UnityEngine::Camera.WorldToViewportPoint1Offset = getRealOffset(0x1653678);
    UnityEngine::Camera.WorldToViewportPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.WorldToViewportPoint1Offset;

    UnityEngine::Camera.ScreenToWorldPoint1Offset = getRealOffset(0x16536C8);
    UnityEngine::Camera.ScreenToWorldPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.ScreenToWorldPoint1Offset;

    UnityEngine::Camera.ScreenToViewportPointOffset = getRealOffset(0x1653718);
    UnityEngine::Camera.ScreenToViewportPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.ScreenToViewportPointOffset;

    UnityEngine::Camera.ViewportPointToRay2Offset = getRealOffset(0x16539F4);
    UnityEngine::Camera.ViewportPointToRay2 = (int (*)(void*, Vector3))UnityEngine::Camera.ViewportPointToRay2Offset;

    UnityEngine::Camera.ScreenPointToRay2Offset = getRealOffset(0x1653C40);
    UnityEngine::Camera.ScreenPointToRay2 = (int (*)(void*, Vector3))UnityEngine::Camera.ScreenPointToRay2Offset;

    UnityEngine::Camera.get_mainOffset = getRealOffset(0x17D0F58);
    UnityEngine::Camera.get_main = (void *(*)())UnityEngine::Camera.get_mainOffset;

    UnityEngine::Camera.get_currentOffset = getRealOffset(0x1653ED0);
    UnityEngine::Camera.get_current = (void *(*)())UnityEngine::Camera.get_currentOffset;

    UnityEngine::Camera.get_stereoEnabledOffset = getRealOffset(0x1653F30);
    UnityEngine::Camera.get_stereoEnabled = (bool(*)(void*))UnityEngine::Camera.get_stereoEnabledOffset;

    UnityEngine::Camera.GetAllCamerasCountOffset = getRealOffset(0x16543D4);
    UnityEngine::Camera.GetAllCamerasCount = (int(*)())UnityEngine::Camera.GetAllCamerasCountOffset;

    UnityEngine::Camera.get_allCamerasCountOffset = getRealOffset(0x1654464);
    UnityEngine::Camera.get_allCamerasCount = (int(*)())UnityEngine::Camera.get_allCamerasCountOffset;

    UnityEngine::Camera.get_allCamerasOffset = getRealOffset(0x16544A8);
    UnityEngine::Camera.RenderToCubemapImplOffset = getRealOffset(0x16546E0);
    UnityEngine::Camera.RenderToCubemapImpl = (bool(*)(void*, void *, int))UnityEngine::Camera.RenderToCubemapImplOffset;

    UnityEngine::Camera.RenderToCubemapOffset = getRealOffset(0x165473C);
    UnityEngine::Camera.RenderToCubemap = (bool(*)(void*, void *))UnityEngine::Camera.RenderToCubemapOffset;

    UnityEngine::Camera.RenderToCubemap1Offset = getRealOffset(0x1654794);
    UnityEngine::Camera.RenderToCubemap1 = (bool(*)(void*, void *))UnityEngine::Camera.RenderToCubemap1Offset;

    UnityEngine::Camera.RenderOffset = getRealOffset(0x16547EC);
    UnityEngine::Camera.Render = (void(*)(void*))UnityEngine::Camera.RenderOffset;

    UnityEngine::Camera.RenderWithShaderOffset = getRealOffset(0x1654850);
    UnityEngine::Camera.RenderWithShader = (void(*)(void*, void *, monoString*))UnityEngine::Camera.RenderWithShaderOffset;

    UnityEngine::Camera.CopyFromOffset = getRealOffset(0x16548AC);
    UnityEngine::Camera.CopyFrom = (void(*)(void*, void *))UnityEngine::Camera.CopyFromOffset;

    UnityEngine::Camera.FireOnPreCullOffset = getRealOffset(0x165492C);
    UnityEngine::Camera.FireOnPreCull = (void(*)(void *))UnityEngine::Camera.FireOnPreCullOffset;

    UnityEngine::Camera.FireOnPreRenderOffset = getRealOffset(0x1654DA0);
    UnityEngine::Camera.FireOnPreRender = (void(*)(void *))UnityEngine::Camera.FireOnPreRenderOffset;

    UnityEngine::Camera.FireOnPostRenderOffset = getRealOffset(0x1654E14);
    UnityEngine::Camera.FireOnPostRender = (void(*)(void *))UnityEngine::Camera.FireOnPostRenderOffset;

    UnityEngine::Camera.WorldToScreenPoint_InjectedOffset = getRealOffset(0x16533CC);
    UnityEngine::Camera.WorldToScreenPoint_Injected = (void(*)(void*, Vector3 *, int, Vector3 *))UnityEngine::Camera.WorldToScreenPoint_InjectedOffset;

    UnityEngine::Camera.ScreenToViewportPoint_InjectedOffset = getRealOffset(0x16537A8);
    UnityEngine::Camera.ScreenToViewportPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Camera.ScreenToViewportPoint_InjectedOffset;

    UnityEngine::CullingGroup.FinalizeOffset = getRealOffset(0x16579AC);
    UnityEngine::CullingGroup.Finalize = (void(*)(void*))UnityEngine::CullingGroup.FinalizeOffset;

    UnityEngine::CullingGroup.DisposeInternalOffset = getRealOffset(0x1657AEC);
    UnityEngine::CullingGroup.DisposeInternal = (void(*)(void*))UnityEngine::CullingGroup.DisposeInternalOffset;

    UnityEngine::CullingGroup.DisposeOffset = getRealOffset(0x1657B38);
    UnityEngine::CullingGroup.Dispose = (void(*)(void*))UnityEngine::CullingGroup.DisposeOffset;

    UnityEngine::CullingGroup.set_targetCameraOffset = getRealOffset(0x1657BC8);
    UnityEngine::CullingGroup.set_targetCamera = (void(*)(void*, void *))UnityEngine::CullingGroup.set_targetCameraOffset;

    UnityEngine::CullingGroup.SetBoundingSphereCountOffset = getRealOffset(0x1657CA8);
    UnityEngine::CullingGroup.SetBoundingSphereCount = (void(*)(void*, int))UnityEngine::CullingGroup.SetBoundingSphereCountOffset;

    UnityEngine::CullingGroup.FinalizerFailureOffset = getRealOffset(0x1657AA0);
    UnityEngine::CullingGroup.FinalizerFailure = (void(*)(void*))UnityEngine::CullingGroup.FinalizerFailureOffset;

    UnityEngine::ReflectionProbe.CallSetDefaultReflectionOffset = getRealOffset(0x145A58C);
    UnityEngine::ReflectionProbe.CallSetDefaultReflection = (void(*)(void *))UnityEngine::ReflectionProbe.CallSetDefaultReflectionOffset;

    UnityEngine::DebugLogHandler.Internal_LogExceptionOffset = getRealOffset(0x16597C0);
    UnityEngine::DebugLogHandler.Internal_LogException = (void(*)(void *, void *))UnityEngine::DebugLogHandler.Internal_LogExceptionOffset;

    UnityEngine::DebugLogHandler.LogExceptionOffset = getRealOffset(0x1659884);
    UnityEngine::DebugLogHandler.LogException = (void(*)(void*, void *, void *))UnityEngine::DebugLogHandler.LogExceptionOffset;

    UnityEngine::Debug.get_unityLoggerOffset = getRealOffset(0x165835C);
    UnityEngine::Debug.get_unityLogger = (void *(*)())UnityEngine::Debug.get_unityLoggerOffset;

    UnityEngine::Debug.DrawLineOffset = getRealOffset(0x16583E8);
    UnityEngine::Debug.DrawLine = (void(*)(Vector3, Vector3, Color, float))UnityEngine::Debug.DrawLineOffset;

    UnityEngine::Debug.DrawLine1Offset = getRealOffset(0x1658600);
    UnityEngine::Debug.DrawLine1 = (void(*)(Vector3, Vector3, Color))UnityEngine::Debug.DrawLine1Offset;

    UnityEngine::Debug.DrawLine2Offset = getRealOffset(0x16584F4);
    UnityEngine::Debug.DrawLine2 = (void(*)(Vector3, Vector3, Color, float, bool))UnityEngine::Debug.DrawLine2Offset;

    UnityEngine::Debug.BreakOffset = getRealOffset(0x1658770);
    UnityEngine::Debug.Break = (void(*)())UnityEngine::Debug.BreakOffset;

    UnityEngine::Debug.LogExceptionOffset = getRealOffset(0x164E528);
    UnityEngine::Debug.LogException = (void(*)(void *))UnityEngine::Debug.LogExceptionOffset;

    UnityEngine::Debug.LogException1Offset = getRealOffset(0x1658E94);
    UnityEngine::Debug.LogException1 = (void(*)(void *, void *))UnityEngine::Debug.LogException1Offset;

    UnityEngine::Debug.get_isDebugBuildOffset = getRealOffset(0x165942C);
    UnityEngine::Debug.get_isDebugBuild = (bool(*)())UnityEngine::Debug.get_isDebugBuildOffset;

    UnityEngine::Debug.CallOverridenDebugHandlerOffset = getRealOffset(0x1659490);
    UnityEngine::Debug.CallOverridenDebugHandler = (bool(*)(void *, void *))UnityEngine::Debug.CallOverridenDebugHandlerOffset;

    UnityEngine::Bounds.GetHashCodeOffset = getRealOffset(0x4240FC);
    UnityEngine::Bounds.GetHashCode = (int(*)(void*))UnityEngine::Bounds.GetHashCodeOffset;

    UnityEngine::Bounds.get_centerOffset = getRealOffset(0x42413C);
    UnityEngine::Bounds.get_center = (Vector3 (*)(void*))UnityEngine::Bounds.get_centerOffset;

    UnityEngine::Bounds.set_centerOffset = getRealOffset(0x424150);
    UnityEngine::Bounds.set_center = (void(*)(void*, Vector3))UnityEngine::Bounds.set_centerOffset;

    UnityEngine::Bounds.get_sizeOffset = getRealOffset(0x42415C);
    UnityEngine::Bounds.get_size = (Vector3 (*)(void*))UnityEngine::Bounds.get_sizeOffset;

    UnityEngine::Bounds.set_sizeOffset = getRealOffset(0x424170);
    UnityEngine::Bounds.set_size = (void(*)(void*, Vector3))UnityEngine::Bounds.set_sizeOffset;

    UnityEngine::Bounds.get_extentsOffset = getRealOffset(0x42418C);
    UnityEngine::Bounds.get_extents = (Vector3 (*)(void*))UnityEngine::Bounds.get_extentsOffset;

    UnityEngine::Bounds.set_extentsOffset = getRealOffset(0x4241A0);
    UnityEngine::Bounds.set_extents = (void(*)(void*, Vector3))UnityEngine::Bounds.set_extentsOffset;

    UnityEngine::Bounds.get_minOffset = getRealOffset(0x4241AC);
    UnityEngine::Bounds.get_min = (Vector3 (*)(void*))UnityEngine::Bounds.get_minOffset;

    UnityEngine::Bounds.get_maxOffset = getRealOffset(0x4241C0);
    UnityEngine::Bounds.get_max = (Vector3 (*)(void*))UnityEngine::Bounds.get_maxOffset;

    UnityEngine::Bounds.SetMinMaxOffset = getRealOffset(0x4241D4);
    UnityEngine::Bounds.SetMinMax = (void(*)(void*, Vector3, Vector3))UnityEngine::Bounds.SetMinMaxOffset;

    UnityEngine::Bounds.EncapsulateOffset = getRealOffset(0x424204);
    UnityEngine::Bounds.Encapsulate = (void(*)(void*, Vector3))UnityEngine::Bounds.EncapsulateOffset;

    UnityEngine::Bounds.ToStringOffset = getRealOffset(0x424280);
    UnityEngine::Bounds.ToString = (monoString *(*)(void*))UnityEngine::Bounds.ToStringOffset;

    UnityEngine::Bounds.ContainsOffset = getRealOffset(0x424288);
    UnityEngine::Bounds.Contains = (bool(*)(void*, Vector3))UnityEngine::Bounds.ContainsOffset;

    UnityEngine::Bounds.SqrDistanceOffset = getRealOffset(0x4242A4);
    UnityEngine::Bounds.SqrDistance = (float(*)(void*, Vector3))UnityEngine::Bounds.SqrDistanceOffset;

    UnityEngine::GeometryUtility.CalculateFrustumPlanesOffset = getRealOffset(0x1345B0C);
    UnityEngine::Plane.ctor1Offset = getRealOffset(0x419974);
    UnityEngine::Plane.ctor1 = (void(*)(void*, Vector3, float))UnityEngine::Plane.ctor1Offset;

    UnityEngine::Plane.get_normalOffset = getRealOffset(0x419998);
    UnityEngine::Plane.get_normal = (Vector3 (*)(void*))UnityEngine::Plane.get_normalOffset;

    UnityEngine::Plane.get_distanceOffset = getRealOffset(0x4199AC);
    UnityEngine::Plane.get_distance = (float(*)(void*))UnityEngine::Plane.get_distanceOffset;

    UnityEngine::Plane.set_distanceOffset = getRealOffset(0x4199B4);
    UnityEngine::Plane.set_distance = (void(*)(void*, float))UnityEngine::Plane.set_distanceOffset;

    UnityEngine::Plane.FlipOffset = getRealOffset(0x4199BC);
    UnityEngine::Plane.Flip = (void(*)(void*))UnityEngine::Plane.FlipOffset;

    UnityEngine::Plane.get_flippedOffset = getRealOffset(0x4199C4);
    UnityEngine::Plane.get_flipped = (int (*)(void*))UnityEngine::Plane.get_flippedOffset;

    UnityEngine::Plane.GetDistanceToPointOffset = getRealOffset(0x4199D8);
    UnityEngine::Plane.GetDistanceToPoint = (float(*)(void*, Vector3))UnityEngine::Plane.GetDistanceToPointOffset;

    UnityEngine::Plane.GetSideOffset = getRealOffset(0x4199F4);
    UnityEngine::Plane.GetSide = (bool(*)(void*, Vector3))UnityEngine::Plane.GetSideOffset;

    UnityEngine::Plane.ToStringOffset = getRealOffset(0x419A4C);
    UnityEngine::Plane.ToString = (monoString *(*)(void*))UnityEngine::Plane.ToStringOffset;

    UnityEngine::Ray.get_originOffset = getRealOffset(0x41FD94);
    UnityEngine::Ray.get_origin = (Vector3 (*)(void*))UnityEngine::Ray.get_originOffset;

    UnityEngine::Ray.get_directionOffset = getRealOffset(0x41FDA8);
    UnityEngine::Ray.get_direction = (Vector3 (*)(void*))UnityEngine::Ray.get_directionOffset;

    UnityEngine::Ray.GetPointOffset = getRealOffset(0x41FDBC);
    UnityEngine::Ray.GetPoint = (Vector3 (*)(void*, float))UnityEngine::Ray.GetPointOffset;

    UnityEngine::Ray.ToStringOffset = getRealOffset(0x41FDD0);
    UnityEngine::Ray.ToString = (monoString *(*)(void*))UnityEngine::Ray.ToStringOffset;

    UnityEngine::Rect.ctor1Offset = getRealOffset(0x41FDEC);
    UnityEngine::Rect.ctor1 = (void(*)(void*, Vector2, Vector2))UnityEngine::Rect.ctor1Offset;

    UnityEngine::Rect.get_zeroOffset = getRealOffset(0x14567B4);
    UnityEngine::Rect.get_zero = (int (*)())UnityEngine::Rect.get_zeroOffset;

    UnityEngine::Rect.MinMaxRectOffset = getRealOffset(0x14567C0);
    UnityEngine::Rect.MinMaxRect = (int (*)(float, float, float, float))UnityEngine::Rect.MinMaxRectOffset;

    UnityEngine::Rect.get_xOffset = getRealOffset(0x41FE0C);
    UnityEngine::Rect.get_x = (float(*)(void*))UnityEngine::Rect.get_xOffset;

    UnityEngine::Rect.set_xOffset = getRealOffset(0x41FE14);
    UnityEngine::Rect.set_x = (void(*)(void*, float))UnityEngine::Rect.set_xOffset;

    UnityEngine::Rect.get_yOffset = getRealOffset(0x41FE1C);
    UnityEngine::Rect.get_y = (float(*)(void*))UnityEngine::Rect.get_yOffset;

    UnityEngine::Rect.set_yOffset = getRealOffset(0x41FE24);
    UnityEngine::Rect.set_y = (void(*)(void*, float))UnityEngine::Rect.set_yOffset;

    UnityEngine::Rect.get_positionOffset = getRealOffset(0x4DCEF4);
    UnityEngine::Rect.get_position = (Vector2 (*)(void*))UnityEngine::Rect.get_positionOffset;

    UnityEngine::Rect.get_centerOffset = getRealOffset(0x41FE70);
    UnityEngine::Rect.get_center = (Vector2 (*)(void*))UnityEngine::Rect.get_centerOffset;

    UnityEngine::Rect.get_minOffset = getRealOffset(0x41FED4);
    UnityEngine::Rect.get_min = (Vector2 (*)(void*))UnityEngine::Rect.get_minOffset;

    UnityEngine::Rect.get_maxOffset = getRealOffset(0x41FF18);
    UnityEngine::Rect.get_max = (Vector2 (*)(void*))UnityEngine::Rect.get_maxOffset;

    UnityEngine::Rect.get_widthOffset = getRealOffset(0x41FF70);
    UnityEngine::Rect.get_width = (float(*)(void*))UnityEngine::Rect.get_widthOffset;

    UnityEngine::Rect.set_widthOffset = getRealOffset(0x41FF78);
    UnityEngine::Rect.set_width = (void(*)(void*, float))UnityEngine::Rect.set_widthOffset;

    UnityEngine::Rect.get_heightOffset = getRealOffset(0x41FF80);
    UnityEngine::Rect.get_height = (float(*)(void*))UnityEngine::Rect.get_heightOffset;

    UnityEngine::Rect.set_heightOffset = getRealOffset(0x41FF88);
    UnityEngine::Rect.set_height = (void(*)(void*, float))UnityEngine::Rect.set_heightOffset;

    UnityEngine::Rect.get_sizeOffset = getRealOffset(0x41FF90);
    UnityEngine::Rect.get_size = (Vector2 (*)(void*))UnityEngine::Rect.get_sizeOffset;

    UnityEngine::Rect.get_xMinOffset = getRealOffset(0x41FFD4);
    UnityEngine::Rect.get_xMin = (float(*)(void*))UnityEngine::Rect.get_xMinOffset;

    UnityEngine::Rect.set_xMinOffset = getRealOffset(0x41FFDC);
    UnityEngine::Rect.set_xMin = (void(*)(void*, float))UnityEngine::Rect.set_xMinOffset;

    UnityEngine::Rect.get_yMinOffset = getRealOffset(0x41FFFC);
    UnityEngine::Rect.get_yMin = (float(*)(void*))UnityEngine::Rect.get_yMinOffset;

    UnityEngine::Rect.set_yMinOffset = getRealOffset(0x420004);
    UnityEngine::Rect.set_yMin = (void(*)(void*, float))UnityEngine::Rect.set_yMinOffset;

    UnityEngine::Rect.get_xMaxOffset = getRealOffset(0x420024);
    UnityEngine::Rect.get_xMax = (float(*)(void*))UnityEngine::Rect.get_xMaxOffset;

    UnityEngine::Rect.set_xMaxOffset = getRealOffset(0x420038);
    UnityEngine::Rect.set_xMax = (void(*)(void*, float))UnityEngine::Rect.set_xMaxOffset;

    UnityEngine::Rect.get_yMaxOffset = getRealOffset(0x42004C);
    UnityEngine::Rect.get_yMax = (float(*)(void*))UnityEngine::Rect.get_yMaxOffset;

    UnityEngine::Rect.set_yMaxOffset = getRealOffset(0x420060);
    UnityEngine::Rect.set_yMax = (void(*)(void*, float))UnityEngine::Rect.set_yMaxOffset;

    UnityEngine::Rect.ContainsOffset = getRealOffset(0x420074);
    UnityEngine::Rect.Contains = (bool(*)(void*, Vector2))UnityEngine::Rect.ContainsOffset;

    UnityEngine::Rect.Contains1Offset = getRealOffset(0x4200D4);
    UnityEngine::Rect.Contains1 = (bool(*)(void*, Vector3))UnityEngine::Rect.Contains1Offset;

    UnityEngine::Rect.GetHashCodeOffset = getRealOffset(0x420180);
    UnityEngine::Rect.GetHashCode = (int(*)(void*))UnityEngine::Rect.GetHashCodeOffset;

    UnityEngine::Rect.ToStringOffset = getRealOffset(0x4201B4);
    UnityEngine::Rect.ToString = (monoString *(*)(void*))UnityEngine::Rect.ToStringOffset;

    UnityEngine::Rect.ToString1Offset = getRealOffset(0x4201BC);
    UnityEngine::Rect.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Rect.ToString1Offset;

    UnityEngine::RectInt.get_xOffset = getRealOffset(0x4201C4);
    UnityEngine::RectInt.get_x = (int(*)(void*))UnityEngine::RectInt.get_xOffset;

    UnityEngine::RectInt.get_yOffset = getRealOffset(0x4201CC);
    UnityEngine::RectInt.get_y = (int(*)(void*))UnityEngine::RectInt.get_yOffset;

    UnityEngine::RectInt.get_widthOffset = getRealOffset(0x4201D4);
    UnityEngine::RectInt.get_width = (int(*)(void*))UnityEngine::RectInt.get_widthOffset;

    UnityEngine::RectInt.get_heightOffset = getRealOffset(0x4201DC);
    UnityEngine::RectInt.get_height = (int(*)(void*))UnityEngine::RectInt.get_heightOffset;

    UnityEngine::RectInt.ToStringOffset = getRealOffset(0x4201E4);
    UnityEngine::RectInt.ToString = (monoString *(*)(void*))UnityEngine::RectInt.ToStringOffset;

    UnityEngine::RectOffset.FinalizeOffset = getRealOffset(0x14578EC);
    UnityEngine::RectOffset.Finalize = (void(*)(void*))UnityEngine::RectOffset.FinalizeOffset;

    UnityEngine::RectOffset.ToStringOffset = getRealOffset(0x1457A0C);
    UnityEngine::RectOffset.ToString = (monoString *(*)(void*))UnityEngine::RectOffset.ToStringOffset;

    UnityEngine::RectOffset.DestroyOffset = getRealOffset(0x1457960);
    UnityEngine::RectOffset.Destroy = (void(*)(void*))UnityEngine::RectOffset.DestroyOffset;

    UnityEngine::RectOffset.InternalCreateOffset = getRealOffset(0x1457880);
    UnityEngine::RectOffset.get_leftOffset = getRealOffset(0x1457D68);
    UnityEngine::RectOffset.get_left = (int(*)(void*))UnityEngine::RectOffset.get_leftOffset;

    UnityEngine::RectOffset.get_rightOffset = getRealOffset(0x1457DB4);
    UnityEngine::RectOffset.get_right = (int(*)(void*))UnityEngine::RectOffset.get_rightOffset;

    UnityEngine::RectOffset.get_topOffset = getRealOffset(0x1457E00);
    UnityEngine::RectOffset.get_top = (int(*)(void*))UnityEngine::RectOffset.get_topOffset;

    UnityEngine::RectOffset.get_bottomOffset = getRealOffset(0x1457E4C);
    UnityEngine::RectOffset.get_bottom = (int(*)(void*))UnityEngine::RectOffset.get_bottomOffset;

    UnityEngine::RectOffset.get_horizontalOffset = getRealOffset(0x1457EE4);
    UnityEngine::RectOffset.get_horizontal = (int(*)(void*))UnityEngine::RectOffset.get_horizontalOffset;

    UnityEngine::RectOffset.get_verticalOffset = getRealOffset(0x1457F54);
    UnityEngine::RectOffset.get_vertical = (int(*)(void*))UnityEngine::RectOffset.get_verticalOffset;

    UnityEngine::Gizmos.DrawLineOffset = getRealOffset(0x1346464);
    UnityEngine::Gizmos.DrawLine = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawLineOffset;

    UnityEngine::Gizmos.DrawWireSphereOffset = getRealOffset(0x1346524);
    UnityEngine::Gizmos.DrawWireSphere = (void(*)(Vector3, float))UnityEngine::Gizmos.DrawWireSphereOffset;

    UnityEngine::Gizmos.DrawSphereOffset = getRealOffset(0x13465D8);
    UnityEngine::Gizmos.DrawSphere = (void(*)(Vector3, float))UnityEngine::Gizmos.DrawSphereOffset;

    UnityEngine::Gizmos.DrawWireCubeOffset = getRealOffset(0x134668C);
    UnityEngine::Gizmos.DrawWireCube = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawWireCubeOffset;

    UnityEngine::Gizmos.DrawCubeOffset = getRealOffset(0x134674C);
    UnityEngine::Gizmos.DrawCube = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawCubeOffset;

    UnityEngine::Gizmos.set_colorOffset = getRealOffset(0x134680C);
    UnityEngine::Gizmos.set_color = (void(*)(Color))UnityEngine::Gizmos.set_colorOffset;

    UnityEngine::Gizmos.DrawFrustumOffset = getRealOffset(0x13469A4);
    UnityEngine::Gizmos.DrawFrustum = (void(*)(Vector3, float, float, float, float))UnityEngine::Gizmos.DrawFrustumOffset;

    UnityEngine::Gizmos.DrawRayOffset = getRealOffset(0x1346A88);
    UnityEngine::Gizmos.DrawRay = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawRayOffset;

    UnityEngine::Gizmos.DrawLine_InjectedOffset = getRealOffset(0x13464D0);
    UnityEngine::Gizmos.DrawLine_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawLine_InjectedOffset;

    UnityEngine::Gizmos.DrawWireSphere_InjectedOffset = getRealOffset(0x1346584);
    UnityEngine::Gizmos.DrawWireSphere_Injected = (void(*)(Vector3 *, float))UnityEngine::Gizmos.DrawWireSphere_InjectedOffset;

    UnityEngine::Gizmos.DrawSphere_InjectedOffset = getRealOffset(0x1346638);
    UnityEngine::Gizmos.DrawSphere_Injected = (void(*)(Vector3 *, float))UnityEngine::Gizmos.DrawSphere_InjectedOffset;

    UnityEngine::Gizmos.DrawWireCube_InjectedOffset = getRealOffset(0x13466F8);
    UnityEngine::Gizmos.DrawWireCube_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawWireCube_InjectedOffset;

    UnityEngine::Gizmos.DrawCube_InjectedOffset = getRealOffset(0x13467B8);
    UnityEngine::Gizmos.DrawCube_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawCube_InjectedOffset;

    UnityEngine::Gizmos.DrawFrustum_InjectedOffset = getRealOffset(0x1346A24);
    UnityEngine::Gizmos.DrawFrustum_Injected = (void(*)(Vector3 *, float, float, float, float))UnityEngine::Gizmos.DrawFrustum_InjectedOffset;

    UnityEngine::BeforeRenderHelper.InvokeOffset = getRealOffset(0x164E720);
    UnityEngine::BeforeRenderHelper.Invoke = (void(*)())UnityEngine::BeforeRenderHelper.InvokeOffset;

    UnityEngine::Display.get_renderingWidthOffset = getRealOffset(0x16599DC);
    UnityEngine::Display.get_renderingWidth = (int(*)(void*))UnityEngine::Display.get_renderingWidthOffset;

    UnityEngine::Display.get_renderingHeightOffset = getRealOffset(0x1659B10);
    UnityEngine::Display.get_renderingHeight = (int(*)(void*))UnityEngine::Display.get_renderingHeightOffset;

    UnityEngine::Display.get_systemWidthOffset = getRealOffset(0x1659BE8);
    UnityEngine::Display.get_systemWidth = (int(*)(void*))UnityEngine::Display.get_systemWidthOffset;

    UnityEngine::Display.get_systemHeightOffset = getRealOffset(0x1659D1C);
    UnityEngine::Display.get_systemHeight = (int(*)(void*))UnityEngine::Display.get_systemHeightOffset;

    UnityEngine::Display.RelativeMouseAtOffset = getRealOffset(0x1659DF4);
    UnityEngine::Display.RelativeMouseAt = (Vector3 (*)(Vector3))UnityEngine::Display.RelativeMouseAtOffset;

    UnityEngine::Display.FireDisplaysUpdatedOffset = getRealOffset(0x165A1F0);
    UnityEngine::Display.FireDisplaysUpdated = (void(*)())UnityEngine::Display.FireDisplaysUpdatedOffset;

    UnityEngine::Screen.get_widthOffset = getRealOffset(0x1462D78);
    UnityEngine::Screen.get_width = (int(*)())UnityEngine::Screen.get_widthOffset;

    UnityEngine::Screen.get_heightOffset = getRealOffset(0x1462DBC);
    UnityEngine::Screen.get_height = (int(*)())UnityEngine::Screen.get_heightOffset;

    UnityEngine::Screen.get_dpiOffset = getRealOffset(0x1462E00);
    UnityEngine::Screen.get_dpi = (float(*)())UnityEngine::Screen.get_dpiOffset;

    UnityEngine::Screen.GetScreenOrientationOffset = getRealOffset(0x1462EA8);
    UnityEngine::Screen.GetScreenOrientation = (int (*)())UnityEngine::Screen.GetScreenOrientationOffset;

    UnityEngine::Screen.get_orientationOffset = getRealOffset(0x1462EEC);
    UnityEngine::Screen.get_orientation = (int (*)())UnityEngine::Screen.get_orientationOffset;

    UnityEngine::Screen.set_autorotateToPortraitOffset = getRealOffset(0x146305C);
    UnityEngine::Screen.set_autorotateToPortrait = (void(*)(bool))UnityEngine::Screen.set_autorotateToPortraitOffset;

    UnityEngine::Screen.set_autorotateToPortraitUpsideDownOffset = getRealOffset(0x14630AC);
    UnityEngine::Screen.set_autorotateToPortraitUpsideDown = (void(*)(bool))UnityEngine::Screen.set_autorotateToPortraitUpsideDownOffset;

    UnityEngine::Screen.set_autorotateToLandscapeLeftOffset = getRealOffset(0x14630FC);
    UnityEngine::Screen.set_autorotateToLandscapeLeft = (void(*)(bool))UnityEngine::Screen.set_autorotateToLandscapeLeftOffset;

    UnityEngine::Screen.set_autorotateToLandscapeRightOffset = getRealOffset(0x146314C);
    UnityEngine::Screen.set_autorotateToLandscapeRight = (void(*)(bool))UnityEngine::Screen.set_autorotateToLandscapeRightOffset;

    UnityEngine::Screen.get_currentResolutionOffset = getRealOffset(0x146319C);
    UnityEngine::Screen.get_currentResolution = (int (*)())UnityEngine::Screen.get_currentResolutionOffset;

    UnityEngine::Screen.get_fullScreenOffset = getRealOffset(0x146325C);
    UnityEngine::Screen.get_fullScreen = (bool(*)())UnityEngine::Screen.get_fullScreenOffset;

    UnityEngine::Screen.set_fullScreenOffset = getRealOffset(0x14632C0);
    UnityEngine::Screen.set_fullScreen = (void(*)(bool))UnityEngine::Screen.set_fullScreenOffset;

    UnityEngine::Screen.SetResolution1Offset = getRealOffset(0x146339C);
    UnityEngine::Screen.SetResolution1 = (void(*)(int, int, bool, int))UnityEngine::Screen.SetResolution1Offset;

    UnityEngine::Screen.SetResolution2Offset = getRealOffset(0x1463408);
    UnityEngine::Screen.SetResolution2 = (void(*)(int, int, bool))UnityEngine::Screen.SetResolution2Offset;

    UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCountOffset = getRealOffset(0x13472CC);
    UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCount = (int(*)())UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCountOffset;

    UnityEngine::Graphics.GetActiveColorBufferOffset = getRealOffset(0x1347310);
    UnityEngine::Graphics.GetActiveColorBuffer = (int (*)())UnityEngine::Graphics.GetActiveColorBufferOffset;

    UnityEngine::Graphics.GetActiveDepthBufferOffset = getRealOffset(0x134742C);
    UnityEngine::Graphics.GetActiveDepthBuffer = (int (*)())UnityEngine::Graphics.GetActiveDepthBufferOffset;

    UnityEngine::Graphics.Internal_SetNullRTOffset = getRealOffset(0x1347548);
    UnityEngine::Graphics.Internal_SetNullRT = (void(*)())UnityEngine::Graphics.Internal_SetNullRTOffset;

    UnityEngine::Graphics.Internal_BlitMaterial5Offset = getRealOffset(0x1347B00);
    UnityEngine::Graphics.Internal_BlitMaterial5 = (void(*)(void *, void *, void *, int, bool))UnityEngine::Graphics.Internal_BlitMaterial5Offset;

    UnityEngine::Graphics.Blit21Offset = getRealOffset(0x1347BD8);
    UnityEngine::Graphics.Blit21 = (void(*)(void *, void *))UnityEngine::Graphics.Blit21Offset;

    UnityEngine::Graphics.get_activeColorBufferOffset = getRealOffset(0x1348060);
    UnityEngine::Graphics.get_activeColorBuffer = (int (*)())UnityEngine::Graphics.get_activeColorBufferOffset;

    UnityEngine::Graphics.get_activeDepthBufferOffset = getRealOffset(0x13480F0);
    UnityEngine::Graphics.get_activeDepthBuffer = (int (*)())UnityEngine::Graphics.get_activeDepthBufferOffset;

    UnityEngine::Graphics.BlitOffset = getRealOffset(0x1348BCC);
    UnityEngine::Graphics.Blit = (void(*)(void *, void *))UnityEngine::Graphics.BlitOffset;

    UnityEngine::Graphics.Blit1Offset = getRealOffset(0x1348C88);
    UnityEngine::Graphics.Blit1 = (void(*)(void *, void *, void *, int))UnityEngine::Graphics.Blit1Offset;

    UnityEngine::Graphics.Blit2Offset = getRealOffset(0x1348D64);
    UnityEngine::Graphics.Blit2 = (void(*)(void *, void *, void *))UnityEngine::Graphics.Blit2Offset;

    UnityEngine::Graphics.SetRenderTarget11Offset = getRealOffset(0x13495E8);
    UnityEngine::Graphics.SetRenderTarget11 = (void(*)(void *))UnityEngine::Graphics.SetRenderTarget11Offset;

    UnityEngine::GL.Vertex3Offset = getRealOffset(0x1343948);
    UnityEngine::GL.Vertex3 = (void(*)(float, float, float))UnityEngine::GL.Vertex3Offset;

    UnityEngine::GL.VertexOffset = getRealOffset(0x13439A4);
    UnityEngine::GL.Vertex = (void(*)(Vector3))UnityEngine::GL.VertexOffset;

    UnityEngine::GL.TexCoord3Offset = getRealOffset(0x1343A00);
    UnityEngine::GL.TexCoord3 = (void(*)(float, float, float))UnityEngine::GL.TexCoord3Offset;

    UnityEngine::GL.TexCoord2Offset = getRealOffset(0x1343A5C);
    UnityEngine::GL.TexCoord2 = (void(*)(float, float))UnityEngine::GL.TexCoord2Offset;

    UnityEngine::GL.MultiTexCoord3Offset = getRealOffset(0x1343AB4);
    UnityEngine::GL.MultiTexCoord3 = (void(*)(int, float, float, float))UnityEngine::GL.MultiTexCoord3Offset;

    UnityEngine::GL.MultiTexCoord2Offset = getRealOffset(0x1343B18);
    UnityEngine::GL.MultiTexCoord2 = (void(*)(int, float, float))UnityEngine::GL.MultiTexCoord2Offset;

    UnityEngine::GL.PushMatrixOffset = getRealOffset(0x1343C6C);
    UnityEngine::GL.PushMatrix = (void(*)())UnityEngine::GL.PushMatrixOffset;

    UnityEngine::GL.PopMatrixOffset = getRealOffset(0x1343CC8);
    UnityEngine::GL.PopMatrix = (void(*)())UnityEngine::GL.PopMatrixOffset;

    UnityEngine::GL.LoadIdentityOffset = getRealOffset(0x1343D20);
    UnityEngine::GL.LoadIdentity = (void(*)())UnityEngine::GL.LoadIdentityOffset;

    UnityEngine::GL.LoadOrthoOffset = getRealOffset(0x1343D7C);
    UnityEngine::GL.LoadOrtho = (void(*)())UnityEngine::GL.LoadOrthoOffset;

    UnityEngine::GL.GLLoadPixelMatrixScriptOffset = getRealOffset(0x1344028);
    UnityEngine::GL.GLLoadPixelMatrixScript = (void(*)(float, float, float, float))UnityEngine::GL.GLLoadPixelMatrixScriptOffset;

    UnityEngine::GL.LoadPixelMatrixOffset = getRealOffset(0x134408C);
    UnityEngine::GL.LoadPixelMatrix = (void(*)(float, float, float, float))UnityEngine::GL.LoadPixelMatrixOffset;

    UnityEngine::GL.BeginOffset = getRealOffset(0x13440F0);
    UnityEngine::GL.Begin = (void(*)(int))UnityEngine::GL.BeginOffset;

    UnityEngine::GL.EndOffset = getRealOffset(0x1344158);
    UnityEngine::GL.End = (void(*)())UnityEngine::GL.EndOffset;

    UnityEngine::GL.GLClearOffset = getRealOffset(0x13441AC);
    UnityEngine::GL.GLClear = (void(*)(bool, bool, Color, float))UnityEngine::GL.GLClearOffset;

    UnityEngine::GL.ClearOffset = getRealOffset(0x1344290);
    UnityEngine::GL.Clear = (void(*)(bool, bool, Color))UnityEngine::GL.ClearOffset;

    UnityEngine::GL.ClearWithSkyboxOffset = getRealOffset(0x13442BC);
    UnityEngine::GL.ClearWithSkybox = (void(*)(bool, void *))UnityEngine::GL.ClearWithSkyboxOffset;

    UnityEngine::LightmapData.get_lightmapColorOffset = getRealOffset(0x134ECF4);
    UnityEngine::LightmapData.get_lightmapColor = (void *(*)(void*))UnityEngine::LightmapData.get_lightmapColorOffset;

    UnityEngine::LightmapData.set_lightmapColorOffset = getRealOffset(0x134ECFC);
    UnityEngine::LightmapData.set_lightmapColor = (void(*)(void*, void *))UnityEngine::LightmapData.set_lightmapColorOffset;

    UnityEngine::LightmapData.get_lightmapDirOffset = getRealOffset(0x134ED04);
    UnityEngine::LightmapData.get_lightmapDir = (void *(*)(void*))UnityEngine::LightmapData.get_lightmapDirOffset;

    UnityEngine::LightmapData.set_lightmapDirOffset = getRealOffset(0x134ED0C);
    UnityEngine::LightmapData.set_lightmapDir = (void(*)(void*, void *))UnityEngine::LightmapData.set_lightmapDirOffset;

    UnityEngine::LightmapData.get_shadowMaskOffset = getRealOffset(0x134ED14);
    UnityEngine::LightmapData.get_shadowMask = (void *(*)(void*))UnityEngine::LightmapData.get_shadowMaskOffset;

    UnityEngine::LightmapData.set_shadowMaskOffset = getRealOffset(0x134ED1C);
    UnityEngine::LightmapData.set_shadowMask = (void(*)(void*, void *))UnityEngine::LightmapData.set_shadowMaskOffset;

    UnityEngine::LightmapSettings.get_lightmapsOffset = getRealOffset(0x134ED24);
    UnityEngine::QualitySettings.set_pixelLightCountOffset = getRealOffset(0x1361ADC);
    UnityEngine::QualitySettings.set_pixelLightCount = (void(*)(int))UnityEngine::QualitySettings.set_pixelLightCountOffset;

    UnityEngine::QualitySettings.get_shadowDistanceOffset = getRealOffset(0x1361B60);
    UnityEngine::QualitySettings.get_shadowDistance = (float(*)())UnityEngine::QualitySettings.get_shadowDistanceOffset;

    UnityEngine::QualitySettings.set_shadowDistanceOffset = getRealOffset(0x1361BD0);
    UnityEngine::QualitySettings.set_shadowDistance = (void(*)(float))UnityEngine::QualitySettings.set_shadowDistanceOffset;

    UnityEngine::QualitySettings.get_lodBiasOffset = getRealOffset(0x1361C54);
    UnityEngine::QualitySettings.get_lodBias = (float(*)())UnityEngine::QualitySettings.get_lodBiasOffset;

    UnityEngine::QualitySettings.set_lodBiasOffset = getRealOffset(0x1361CBC);
    UnityEngine::QualitySettings.set_lodBias = (void(*)(float))UnityEngine::QualitySettings.set_lodBiasOffset;

    UnityEngine::QualitySettings.set_masterTextureLimitOffset = getRealOffset(0x1361D84);
    UnityEngine::QualitySettings.set_masterTextureLimit = (void(*)(int))UnityEngine::QualitySettings.set_masterTextureLimitOffset;

    UnityEngine::QualitySettings.set_particleRaycastBudgetOffset = getRealOffset(0x1361DD0);
    UnityEngine::QualitySettings.set_particleRaycastBudget = (void(*)(int))UnityEngine::QualitySettings.set_particleRaycastBudgetOffset;

    UnityEngine::QualitySettings.get_vSyncCountOffset = getRealOffset(0x1361E1C);
    UnityEngine::QualitySettings.get_vSyncCount = (int(*)())UnityEngine::QualitySettings.get_vSyncCountOffset;

    UnityEngine::QualitySettings.set_vSyncCountOffset = getRealOffset(0x1361E88);
    UnityEngine::QualitySettings.set_vSyncCount = (void(*)(int))UnityEngine::QualitySettings.set_vSyncCountOffset;

    UnityEngine::QualitySettings.get_antiAliasingOffset = getRealOffset(0x1361F08);
    UnityEngine::QualitySettings.get_antiAliasing = (int(*)())UnityEngine::QualitySettings.get_antiAliasingOffset;

    UnityEngine::QualitySettings.get_activeColorSpaceOffset = getRealOffset(0x1343368);
    UnityEngine::QualitySettings.get_activeColorSpace = (int (*)())UnityEngine::QualitySettings.get_activeColorSpaceOffset;

    UnityEngine::LineRenderer.SetColorsOffset = getRealOffset(0x134EE28);
    UnityEngine::LineRenderer.SetColors = (void(*)(void*, Color, Color))UnityEngine::LineRenderer.SetColorsOffset;

    UnityEngine::LineRenderer.set_startColorOffset = getRealOffset(0x134EE68);
    UnityEngine::LineRenderer.set_startColor = (void(*)(void*, Color))UnityEngine::LineRenderer.set_startColorOffset;

    UnityEngine::LineRenderer.set_endColorOffset = getRealOffset(0x134EED0);
    UnityEngine::LineRenderer.set_endColor = (void(*)(void*, Color))UnityEngine::LineRenderer.set_endColorOffset;

    UnityEngine::LineRenderer.SetPositionOffset = getRealOffset(0x134EFE0);
    UnityEngine::LineRenderer.SetPosition = (void(*)(void*, int, Vector3))UnityEngine::LineRenderer.SetPositionOffset;

    UnityEngine::LineRenderer.SetPosition_InjectedOffset = getRealOffset(0x134F050);
    UnityEngine::LineRenderer.SetPosition_Injected = (void(*)(void*, int, Vector3 *))UnityEngine::LineRenderer.SetPosition_InjectedOffset;

    UnityEngine::MaterialPropertyBlock.GetFloatImplOffset = getRealOffset(0x1352510);
    UnityEngine::MaterialPropertyBlock.GetFloatImpl = (float(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetFloatImplOffset;

    UnityEngine::MaterialPropertyBlock.GetVectorImplOffset = getRealOffset(0x1352564);
    UnityEngine::MaterialPropertyBlock.GetVectorImpl = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetVectorImplOffset;

    UnityEngine::MaterialPropertyBlock.GetMatrixImplOffset = getRealOffset(0x1352638);
    UnityEngine::MaterialPropertyBlock.GetMatrixImpl = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetMatrixImplOffset;

    UnityEngine::MaterialPropertyBlock.GetTextureImplOffset = getRealOffset(0x1352734);
    UnityEngine::MaterialPropertyBlock.GetTextureImpl = (void *(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetTextureImplOffset;

    UnityEngine::MaterialPropertyBlock.SetFloatImplOffset = getRealOffset(0x1352788);
    UnityEngine::MaterialPropertyBlock.SetFloatImpl = (void(*)(void*, int, float))UnityEngine::MaterialPropertyBlock.SetFloatImplOffset;

    UnityEngine::MaterialPropertyBlock.SetColorImplOffset = getRealOffset(0x13528B8);
    UnityEngine::MaterialPropertyBlock.SetColorImpl = (void(*)(void*, int, Color))UnityEngine::MaterialPropertyBlock.SetColorImplOffset;

    UnityEngine::MaterialPropertyBlock.SetTextureImplOffset = getRealOffset(0x1352AAC);
    UnityEngine::MaterialPropertyBlock.SetTextureImpl = (void(*)(void*, int, void *))UnityEngine::MaterialPropertyBlock.SetTextureImplOffset;

    UnityEngine::MaterialPropertyBlock.CreateImplOffset = getRealOffset(0x13524CC);
    UnityEngine::MaterialPropertyBlock.ClearOffset = getRealOffset(0x1352B54);
    UnityEngine::MaterialPropertyBlock.Clear = (void(*)(void*, bool))UnityEngine::MaterialPropertyBlock.ClearOffset;

    UnityEngine::MaterialPropertyBlock.Clear1Offset = getRealOffset(0x1352BA8);
    UnityEngine::MaterialPropertyBlock.Clear1 = (void(*)(void*))UnityEngine::MaterialPropertyBlock.Clear1Offset;

    UnityEngine::MaterialPropertyBlock.FinalizeOffset = getRealOffset(0x1352BF8);
    UnityEngine::MaterialPropertyBlock.Finalize = (void(*)(void*))UnityEngine::MaterialPropertyBlock.FinalizeOffset;

    UnityEngine::MaterialPropertyBlock.DisposeOffset = getRealOffset(0x1352C5C);
    UnityEngine::MaterialPropertyBlock.Dispose = (void(*)(void*))UnityEngine::MaterialPropertyBlock.DisposeOffset;

    UnityEngine::MaterialPropertyBlock.SetFloatOffset = getRealOffset(0x1352D40);
    UnityEngine::MaterialPropertyBlock.SetFloat = (void(*)(void*, monoString*, float))UnityEngine::MaterialPropertyBlock.SetFloatOffset;

    UnityEngine::MaterialPropertyBlock.SetColorOffset = getRealOffset(0x1352E18);
    UnityEngine::MaterialPropertyBlock.SetColor = (void(*)(void*, monoString*, Color))UnityEngine::MaterialPropertyBlock.SetColorOffset;

    UnityEngine::MaterialPropertyBlock.SetTextureOffset = getRealOffset(0x1352F84);
    UnityEngine::MaterialPropertyBlock.SetTexture = (void(*)(void*, monoString*, void *))UnityEngine::MaterialPropertyBlock.SetTextureOffset;

    UnityEngine::MaterialPropertyBlock.SetTexture1Offset = getRealOffset(0x1352FEC);
    UnityEngine::MaterialPropertyBlock.SetTexture1 = (void(*)(void*, int, void *))UnityEngine::MaterialPropertyBlock.SetTexture1Offset;

    UnityEngine::MaterialPropertyBlock.GetFloatOffset = getRealOffset(0x1353048);
    UnityEngine::MaterialPropertyBlock.GetFloat = (float(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetFloatOffset;

    UnityEngine::MaterialPropertyBlock.GetVectorOffset = getRealOffset(0x135309C);
    UnityEngine::MaterialPropertyBlock.GetVector = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetVectorOffset;

    UnityEngine::MaterialPropertyBlock.GetMatrixOffset = getRealOffset(0x1353124);
    UnityEngine::MaterialPropertyBlock.GetMatrix = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetMatrixOffset;

    UnityEngine::MaterialPropertyBlock.GetTextureOffset = getRealOffset(0x1353200);
    UnityEngine::MaterialPropertyBlock.GetTexture = (void *(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetTextureOffset;

    UnityEngine::Renderer.set_castShadowsOffset = getRealOffset(0x145D2BC);
    UnityEngine::Renderer.set_castShadows = (void(*)(void*, bool))UnityEngine::Renderer.set_castShadowsOffset;

    UnityEngine::Renderer.get_boundsOffset = getRealOffset(0x145D374);
    UnityEngine::Renderer.get_bounds = (int (*)(void*))UnityEngine::Renderer.get_boundsOffset;

    UnityEngine::Renderer.GetMaterialOffset = getRealOffset(0x145D50C);
    UnityEngine::Renderer.GetMaterial = (void *(*)(void*))UnityEngine::Renderer.GetMaterialOffset;

    UnityEngine::Renderer.GetSharedMaterialOffset = getRealOffset(0x145D558);
    UnityEngine::Renderer.GetSharedMaterial = (void *(*)(void*))UnityEngine::Renderer.GetSharedMaterialOffset;

    UnityEngine::Renderer.SetMaterialOffset = getRealOffset(0x145D5A4);
    UnityEngine::Renderer.SetMaterial = (void(*)(void*, void *))UnityEngine::Renderer.SetMaterialOffset;

    UnityEngine::Renderer.GetMaterialArrayOffset = getRealOffset(0x145D5F8);
    UnityEngine::Renderer.Internal_SetPropertyBlockOffset = getRealOffset(0x145D698);
    UnityEngine::Renderer.Internal_SetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.Internal_SetPropertyBlockOffset;

    UnityEngine::Renderer.Internal_GetPropertyBlockOffset = getRealOffset(0x145D6EC);
    UnityEngine::Renderer.Internal_GetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.Internal_GetPropertyBlockOffset;

    UnityEngine::Renderer.SetPropertyBlockOffset = getRealOffset(0x145D740);
    UnityEngine::Renderer.SetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.SetPropertyBlockOffset;

    UnityEngine::Renderer.GetPropertyBlockOffset = getRealOffset(0x145D794);
    UnityEngine::Renderer.GetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.GetPropertyBlockOffset;

    UnityEngine::Renderer.get_enabledOffset = getRealOffset(0x145D7E8);
    UnityEngine::Renderer.get_enabled = (bool(*)(void*))UnityEngine::Renderer.get_enabledOffset;

    UnityEngine::Renderer.set_enabledOffset = getRealOffset(0x145D850);
    UnityEngine::Renderer.set_enabled = (void(*)(void*, bool))UnityEngine::Renderer.set_enabledOffset;

    UnityEngine::Renderer.get_isVisibleOffset = getRealOffset(0x145D8D0);
    UnityEngine::Renderer.get_isVisible = (bool(*)(void*))UnityEngine::Renderer.get_isVisibleOffset;

    UnityEngine::Renderer.get_shadowCastingModeOffset = getRealOffset(0x145D93C);
    UnityEngine::Renderer.get_shadowCastingMode = (int (*)(void*))UnityEngine::Renderer.get_shadowCastingModeOffset;

    UnityEngine::Renderer.set_receiveShadowsOffset = getRealOffset(0x145D9B0);
    UnityEngine::Renderer.set_receiveShadows = (void(*)(void*, bool))UnityEngine::Renderer.set_receiveShadowsOffset;

    UnityEngine::Renderer.get_sortingLayerIDOffset = getRealOffset(0x145DAE0);
    UnityEngine::Renderer.get_sortingLayerID = (int(*)(void*))UnityEngine::Renderer.get_sortingLayerIDOffset;

    UnityEngine::Renderer.set_sortingLayerIDOffset = getRealOffset(0x145DB50);
    UnityEngine::Renderer.set_sortingLayerID = (void(*)(void*, int))UnityEngine::Renderer.set_sortingLayerIDOffset;

    UnityEngine::Renderer.get_sortingOrderOffset = getRealOffset(0x145DBD4);
    UnityEngine::Renderer.get_sortingOrder = (int(*)(void*))UnityEngine::Renderer.get_sortingOrderOffset;

    UnityEngine::Renderer.set_sortingOrderOffset = getRealOffset(0x145DC44);
    UnityEngine::Renderer.set_sortingOrder = (void(*)(void*, int))UnityEngine::Renderer.set_sortingOrderOffset;

    UnityEngine::Renderer.set_staticBatchRootTransformOffset = getRealOffset(0x145DCC8);
    UnityEngine::Renderer.set_staticBatchRootTransform = (void(*)(void*, void *))UnityEngine::Renderer.set_staticBatchRootTransformOffset;

    UnityEngine::Renderer.get_staticBatchIndexOffset = getRealOffset(0x145DD1C);
    UnityEngine::Renderer.get_staticBatchIndex = (int(*)(void*))UnityEngine::Renderer.get_staticBatchIndexOffset;

    UnityEngine::Renderer.SetStaticBatchInfoOffset = getRealOffset(0x145DD90);
    UnityEngine::Renderer.SetStaticBatchInfo = (void(*)(void*, int, int))UnityEngine::Renderer.SetStaticBatchInfoOffset;

    UnityEngine::Renderer.get_isPartOfStaticBatchOffset = getRealOffset(0x145DDEC);
    UnityEngine::Renderer.get_isPartOfStaticBatch = (bool(*)(void*))UnityEngine::Renderer.get_isPartOfStaticBatchOffset;

    UnityEngine::Renderer.get_worldToLocalMatrixOffset = getRealOffset(0x145DE60);
    UnityEngine::Renderer.get_worldToLocalMatrix = (int (*)(void*))UnityEngine::Renderer.get_worldToLocalMatrixOffset;

    UnityEngine::Renderer.get_lightmapIndexOffset = getRealOffset(0x145E0D0);
    UnityEngine::Renderer.get_lightmapIndex = (int(*)(void*))UnityEngine::Renderer.get_lightmapIndexOffset;

    UnityEngine::Renderer.set_lightmapIndexOffset = getRealOffset(0x145E120);
    UnityEngine::Renderer.set_lightmapIndex = (void(*)(void*, int))UnityEngine::Renderer.set_lightmapIndexOffset;

    UnityEngine::Renderer.get_lightmapScaleOffsetOffset = getRealOffset(0x145E178);
    UnityEngine::Renderer.get_lightmapScaleOffset = (int (*)(void*))UnityEngine::Renderer.get_lightmapScaleOffsetOffset;

    UnityEngine::Renderer.get_realtimeLightmapScaleOffsetOffset = getRealOffset(0x145E21C);
    UnityEngine::Renderer.get_realtimeLightmapScaleOffset = (int (*)(void*))UnityEngine::Renderer.get_realtimeLightmapScaleOffsetOffset;

    UnityEngine::Renderer.GetSharedMaterialArrayOffset = getRealOffset(0x145E2A0);
    UnityEngine::Renderer.get_materialsOffset = getRealOffset(0x145E2EC);
    UnityEngine::Renderer.get_materialOffset = getRealOffset(0x145E38C);
    UnityEngine::Renderer.get_material = (void *(*)(void*))UnityEngine::Renderer.get_materialOffset;

    UnityEngine::Renderer.set_materialOffset = getRealOffset(0x145E3D8);
    UnityEngine::Renderer.set_material = (void(*)(void*, void *))UnityEngine::Renderer.set_materialOffset;

    UnityEngine::Renderer.get_sharedMaterialOffset = getRealOffset(0x145E42C);
    UnityEngine::Renderer.get_sharedMaterial = (void *(*)(void*))UnityEngine::Renderer.get_sharedMaterialOffset;

    UnityEngine::Renderer.set_sharedMaterialOffset = getRealOffset(0x145E478);
    UnityEngine::Renderer.set_sharedMaterial = (void(*)(void*, void *))UnityEngine::Renderer.set_sharedMaterialOffset;

    UnityEngine::Renderer.get_sharedMaterialsOffset = getRealOffset(0x145E4CC);
    UnityEngine::RenderSettings.get_fogOffset = getRealOffset(0x145A610);
    UnityEngine::RenderSettings.get_fog = (bool(*)())UnityEngine::RenderSettings.get_fogOffset;

    UnityEngine::RenderSettings.set_fogOffset = getRealOffset(0x145A674);
    UnityEngine::RenderSettings.set_fog = (void(*)(bool))UnityEngine::RenderSettings.set_fogOffset;

    UnityEngine::RenderSettings.get_fogStartDistanceOffset = getRealOffset(0x145A6EC);
    UnityEngine::RenderSettings.get_fogStartDistance = (float(*)())UnityEngine::RenderSettings.get_fogStartDistanceOffset;

    UnityEngine::RenderSettings.get_fogEndDistanceOffset = getRealOffset(0x145A75C);
    UnityEngine::RenderSettings.get_fogEndDistance = (float(*)())UnityEngine::RenderSettings.get_fogEndDistanceOffset;

    UnityEngine::RenderSettings.get_fogModeOffset = getRealOffset(0x145A7CC);
    UnityEngine::RenderSettings.get_fogMode = (int (*)())UnityEngine::RenderSettings.get_fogModeOffset;

    UnityEngine::RenderSettings.get_fogColorOffset = getRealOffset(0x145A834);
    UnityEngine::RenderSettings.get_fogColor = (Color (*)())UnityEngine::RenderSettings.get_fogColorOffset;

    UnityEngine::RenderSettings.set_fogColorOffset = getRealOffset(0x145A8E8);
    UnityEngine::RenderSettings.set_fogColor = (void(*)(Color))UnityEngine::RenderSettings.set_fogColorOffset;

    UnityEngine::RenderSettings.get_fogDensityOffset = getRealOffset(0x145A98C);
    UnityEngine::RenderSettings.get_fogDensity = (float(*)())UnityEngine::RenderSettings.get_fogDensityOffset;

    UnityEngine::RenderSettings.set_fogDensityOffset = getRealOffset(0x145A9F8);
    UnityEngine::RenderSettings.set_fogDensity = (void(*)(float))UnityEngine::RenderSettings.set_fogDensityOffset;

    UnityEngine::RenderSettings.get_ambientModeOffset = getRealOffset(0x145AA78);
    UnityEngine::RenderSettings.get_ambientMode = (int (*)())UnityEngine::RenderSettings.get_ambientModeOffset;

    UnityEngine::RenderSettings.set_ambientIntensityOffset = getRealOffset(0x145AAE4);
    UnityEngine::RenderSettings.set_ambientIntensity = (void(*)(float))UnityEngine::RenderSettings.set_ambientIntensityOffset;

    UnityEngine::RenderSettings.set_ambientLightOffset = getRealOffset(0x145AB68);
    UnityEngine::RenderSettings.set_ambientLight = (void(*)(Color))UnityEngine::RenderSettings.set_ambientLightOffset;

    UnityEngine::RenderSettings.get_skyboxOffset = getRealOffset(0x145AC0C);
    UnityEngine::RenderSettings.get_skybox = (void *(*)())UnityEngine::RenderSettings.get_skyboxOffset;

    UnityEngine::RenderSettings.set_skyboxOffset = getRealOffset(0x145AC74);
    UnityEngine::RenderSettings.set_skybox = (void(*)(void *))UnityEngine::RenderSettings.set_skyboxOffset;

    UnityEngine::RenderSettings.get_ambientProbeOffset = getRealOffset(0x145ACF8);
    UnityEngine::RenderSettings.get_ambientProbe = (int (*)())UnityEngine::RenderSettings.get_ambientProbeOffset;

    UnityEngine::Shader.FindOffset = getRealOffset(0x1465B34);
    UnityEngine::Shader.Find = (void *(*)(monoString*))UnityEngine::Shader.FindOffset;

    UnityEngine::Shader.get_isSupportedOffset = getRealOffset(0x1465BA0);
    UnityEngine::Shader.get_isSupported = (bool(*)(void*))UnityEngine::Shader.get_isSupportedOffset;

    UnityEngine::Shader.EnableKeywordOffset = getRealOffset(0x1465C0C);
    UnityEngine::Shader.EnableKeyword = (void(*)(monoString*))UnityEngine::Shader.EnableKeywordOffset;

    UnityEngine::Shader.DisableKeywordOffset = getRealOffset(0x1465C84);
    UnityEngine::Shader.DisableKeyword = (void(*)(monoString*))UnityEngine::Shader.DisableKeywordOffset;

    UnityEngine::Shader.get_disableBatchingOffset = getRealOffset(0x1465CFC);
    UnityEngine::Shader.get_disableBatching = (int (*)(void*))UnityEngine::Shader.get_disableBatchingOffset;

    UnityEngine::Shader.PropertyToIDOffset = getRealOffset(0x1465D6C);
    UnityEngine::Shader.PropertyToID = (int(*)(monoString*))UnityEngine::Shader.PropertyToIDOffset;

    UnityEngine::Shader.SetGlobalFloatImplOffset = getRealOffset(0x1465DB8);
    UnityEngine::Shader.SetGlobalFloatImpl = (void(*)(int, float))UnityEngine::Shader.SetGlobalFloatImplOffset;

    UnityEngine::Shader.SetGlobalTextureImplOffset = getRealOffset(0x1465FD8);
    UnityEngine::Shader.SetGlobalTextureImpl = (void(*)(int, void *))UnityEngine::Shader.SetGlobalTextureImplOffset;

    UnityEngine::Shader.SetGlobalFloatOffset = getRealOffset(0x146602C);
    UnityEngine::Shader.SetGlobalFloat = (void(*)(monoString*, float))UnityEngine::Shader.SetGlobalFloatOffset;

    UnityEngine::Shader.SetGlobalColorOffset = getRealOffset(0x1466158);
    UnityEngine::Shader.SetGlobalColor = (void(*)(monoString*, Color))UnityEngine::Shader.SetGlobalColorOffset;

    UnityEngine::Shader.SetGlobalTextureOffset = getRealOffset(0x1466268);
    UnityEngine::Shader.SetGlobalTexture = (void(*)(monoString*, void *))UnityEngine::Shader.SetGlobalTextureOffset;

    UnityEngine::Shader.SetGlobalTexture1Offset = getRealOffset(0x14662FC);
    UnityEngine::Shader.SetGlobalTexture1 = (void(*)(int, void *))UnityEngine::Shader.SetGlobalTexture1Offset;

    UnityEngine::Material.ctor1Offset = getRealOffset(0x13507EC);
    UnityEngine::Material.ctor1 = (void(*)(void*, void *))UnityEngine::Material.ctor1Offset;

    UnityEngine::Material.ctor2Offset = getRealOffset(0x1350908);
    UnityEngine::Material.ctor2 = (void(*)(void*, monoString*))UnityEngine::Material.ctor2Offset;

    UnityEngine::Material.CreateWithShaderOffset = getRealOffset(0x1350798);
    UnityEngine::Material.CreateWithShader = (void(*)(void *, void *))UnityEngine::Material.CreateWithShaderOffset;

    UnityEngine::Material.CreateWithMaterialOffset = getRealOffset(0x13508B4);
    UnityEngine::Material.CreateWithMaterial = (void(*)(void *, void *))UnityEngine::Material.CreateWithMaterialOffset;

    UnityEngine::Material.CreateWithStringOffset = getRealOffset(0x13509C8);
    UnityEngine::Material.CreateWithString = (void(*)(void *))UnityEngine::Material.CreateWithStringOffset;

    UnityEngine::Material.get_shaderOffset = getRealOffset(0x134DA7C);
    UnityEngine::Material.get_shader = (void *(*)(void*))UnityEngine::Material.get_shaderOffset;

    UnityEngine::Material.set_shaderOffset = getRealOffset(0x1350A14);
    UnityEngine::Material.set_shader = (void(*)(void*, void *))UnityEngine::Material.set_shaderOffset;

    UnityEngine::Material.get_colorOffset = getRealOffset(0x1350A98);
    UnityEngine::Material.get_color = (Color (*)(void*))UnityEngine::Material.get_colorOffset;

    UnityEngine::Material.set_colorOffset = getRealOffset(0x1350BBC);
    UnityEngine::Material.set_color = (void(*)(void*, Color))UnityEngine::Material.set_colorOffset;

    UnityEngine::Material.get_mainTextureOffset = getRealOffset(0x1350C9C);
    UnityEngine::Material.get_mainTexture = (void *(*)(void*))UnityEngine::Material.get_mainTextureOffset;

    UnityEngine::Material.set_mainTextureOffset = getRealOffset(0x1350D60);
    UnityEngine::Material.set_mainTexture = (void(*)(void*, void *))UnityEngine::Material.set_mainTextureOffset;

    UnityEngine::Material.get_mainTextureOffsetOffset = getRealOffset(0x1350E34);

    UnityEngine::Material.get_mainTextureScaleOffset = getRealOffset(0x1350FC4);
    UnityEngine::Material.get_mainTextureScale = (Vector2 (*)(void*))UnityEngine::Material.get_mainTextureScaleOffset;

    UnityEngine::Material.set_mainTextureScaleOffset = getRealOffset(0x135108C);
    UnityEngine::Material.set_mainTextureScale = (void(*)(void*, Vector2))UnityEngine::Material.set_mainTextureScaleOffset;

    UnityEngine::Material.HasPropertyOffset = getRealOffset(0x1351154);
    UnityEngine::Material.HasProperty = (bool(*)(void*, int))UnityEngine::Material.HasPropertyOffset;

    UnityEngine::Material.HasProperty1Offset = getRealOffset(0x13511A8);
    UnityEngine::Material.HasProperty1 = (bool(*)(void*, monoString*))UnityEngine::Material.HasProperty1Offset;

    UnityEngine::Material.get_renderQueueOffset = getRealOffset(0x1351208);
    UnityEngine::Material.get_renderQueue = (int(*)(void*))UnityEngine::Material.get_renderQueueOffset;

    UnityEngine::Material.set_renderQueueOffset = getRealOffset(0x1351274);
    UnityEngine::Material.set_renderQueue = (void(*)(void*, int))UnityEngine::Material.set_renderQueueOffset;

    UnityEngine::Material.EnableKeywordOffset = getRealOffset(0x13512F4);
    UnityEngine::Material.EnableKeyword = (void(*)(void*, monoString*))UnityEngine::Material.EnableKeywordOffset;

    UnityEngine::Material.DisableKeywordOffset = getRealOffset(0x1351374);
    UnityEngine::Material.DisableKeyword = (void(*)(void*, monoString*))UnityEngine::Material.DisableKeywordOffset;

    UnityEngine::Material.IsKeywordEnabledOffset = getRealOffset(0x13513F4);
    UnityEngine::Material.IsKeywordEnabled = (bool(*)(void*, monoString*))UnityEngine::Material.IsKeywordEnabledOffset;

    UnityEngine::Material.set_enableInstancingOffset = getRealOffset(0x1351478);
    UnityEngine::Material.set_enableInstancing = (void(*)(void*, bool))UnityEngine::Material.set_enableInstancingOffset;

    UnityEngine::Material.get_passCountOffset = getRealOffset(0x1351500);
    UnityEngine::Material.get_passCount = (int(*)(void*))UnityEngine::Material.get_passCountOffset;

    UnityEngine::Material.SetPassOffset = getRealOffset(0x135156C);
    UnityEngine::Material.SetPass = (bool(*)(void*, int))UnityEngine::Material.SetPassOffset;

    UnityEngine::Material.CopyPropertiesFromMaterialOffset = getRealOffset(0x13515E4);
    UnityEngine::Material.CopyPropertiesFromMaterial = (void(*)(void*, void *))UnityEngine::Material.CopyPropertiesFromMaterialOffset;

    UnityEngine::Material.GetShaderKeywordsOffset = getRealOffset(0x1351638);
    UnityEngine::Material.get_shaderKeywordsOffset = getRealOffset(0x13516D8);
    UnityEngine::Material.SetFloatImplOffset = getRealOffset(0x1351778);
    UnityEngine::Material.SetFloatImpl = (void(*)(void*, int, float))UnityEngine::Material.SetFloatImplOffset;

    UnityEngine::Material.SetColorImplOffset = getRealOffset(0x13517D4);
    UnityEngine::Material.SetColorImpl = (void(*)(void*, int, Color))UnityEngine::Material.SetColorImplOffset;

    UnityEngine::Material.SetTextureImplOffset = getRealOffset(0x13519C8);
    UnityEngine::Material.SetTextureImpl = (void(*)(void*, int, void *))UnityEngine::Material.SetTextureImplOffset;

    UnityEngine::Material.GetFloatImplOffset = getRealOffset(0x1351A24);
    UnityEngine::Material.GetFloatImpl = (float(*)(void*, int))UnityEngine::Material.GetFloatImplOffset;

    UnityEngine::Material.GetColorImplOffset = getRealOffset(0x1351A78);
    UnityEngine::Material.GetColorImpl = (Color (*)(void*, int))UnityEngine::Material.GetColorImplOffset;

    UnityEngine::Material.GetTextureImplOffset = getRealOffset(0x1351B4C);
    UnityEngine::Material.GetTextureImpl = (void *(*)(void*, int))UnityEngine::Material.GetTextureImplOffset;

    UnityEngine::Material.GetTextureScaleAndOffsetImplOffset = getRealOffset(0x1351BA0);
    UnityEngine::Material.GetTextureScaleAndOffsetImpl = (int (*)(void*, int))UnityEngine::Material.GetTextureScaleAndOffsetImplOffset;

    UnityEngine::Material.SetTextureOffsetImplOffset = getRealOffset(0x1351C74);
    UnityEngine::Material.SetTextureOffsetImpl = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureOffsetImplOffset;

    UnityEngine::Material.SetTextureScaleImplOffset = getRealOffset(0x1351D38);
    UnityEngine::Material.SetTextureScaleImpl = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureScaleImplOffset;

    UnityEngine::Material.SetFloatOffset = getRealOffset(0x1351DFC);
    UnityEngine::Material.SetFloat = (void(*)(void*, monoString*, float))UnityEngine::Material.SetFloatOffset;

    UnityEngine::Material.SetFloat1Offset = getRealOffset(0x1351E64);
    UnityEngine::Material.SetFloat1 = (void(*)(void*, int, float))UnityEngine::Material.SetFloat1Offset;

    UnityEngine::Material.SetIntOffset = getRealOffset(0x1351EC0);
    UnityEngine::Material.SetInt = (void(*)(void*, monoString*, int))UnityEngine::Material.SetIntOffset;

    UnityEngine::Material.SetColorOffset = getRealOffset(0x1350C50);
    UnityEngine::Material.SetColor = (void(*)(void*, monoString*, Color))UnityEngine::Material.SetColorOffset;

    UnityEngine::Material.SetColor1Offset = getRealOffset(0x1351F38);
    UnityEngine::Material.SetColor1 = (void(*)(void*, int, Color))UnityEngine::Material.SetColor1Offset;

    UnityEngine::Material.SetTextureOffset = getRealOffset(0x1350DCC);
    UnityEngine::Material.SetTexture = (void(*)(void*, monoString*, void *))UnityEngine::Material.SetTextureOffset;

    UnityEngine::Material.SetTexture1Offset = getRealOffset(0x135214C);
    UnityEngine::Material.SetTexture1 = (void(*)(void*, int, void *))UnityEngine::Material.SetTexture1Offset;

    UnityEngine::Material.GetFloatOffset = getRealOffset(0x13521A8);
    UnityEngine::Material.GetFloat = (float(*)(void*, monoString*))UnityEngine::Material.GetFloatOffset;

    UnityEngine::Material.GetColorOffset = getRealOffset(0x1350B20);
    UnityEngine::Material.GetColor = (Color (*)(void*, monoString*))UnityEngine::Material.GetColorOffset;

    UnityEngine::Material.GetColor1Offset = getRealOffset(0x1352208);
    UnityEngine::Material.GetColor1 = (Color (*)(void*, int))UnityEngine::Material.GetColor1Offset;

    UnityEngine::Material.GetVectorOffset = getRealOffset(0x1352290);
    UnityEngine::Material.GetVector = (int (*)(void*, monoString*))UnityEngine::Material.GetVectorOffset;

    UnityEngine::Material.GetTextureOffset = getRealOffset(0x1350D00);
    UnityEngine::Material.GetTexture = (void *(*)(void*, monoString*))UnityEngine::Material.GetTextureOffset;

    UnityEngine::Material.SetTextureScaleOffset = getRealOffset(0x1351114);
    UnityEngine::Material.SetTextureScale = (void(*)(void*, monoString*, Vector2))UnityEngine::Material.SetTextureScaleOffset;

    UnityEngine::Material.GetTextureOffset1Offset = getRealOffset(0x135234C);
    UnityEngine::Material.GetTextureOffset1 = (Vector2 (*)(void*, int))UnityEngine::Material.GetTextureOffset1Offset;

    UnityEngine::Material.GetTextureScaleOffset = getRealOffset(0x135104C);
    UnityEngine::Material.GetTextureScale = (Vector2 (*)(void*, monoString*))UnityEngine::Material.GetTextureScaleOffset;

    UnityEngine::Material.GetTextureScale1Offset = getRealOffset(0x13523E4);
    UnityEngine::Material.GetTextureScale1 = (Vector2 (*)(void*, int))UnityEngine::Material.GetTextureScale1Offset;

    UnityEngine::LensFlare.set_colorOffset = getRealOffset(0x134E38C);
    UnityEngine::LensFlare.set_color = (void(*)(void*, Color))UnityEngine::LensFlare.set_colorOffset;

    UnityEngine::Light.get_typeOffset = getRealOffset(0x134E448);
    UnityEngine::Light.get_type = (int (*)(void*))UnityEngine::Light.get_typeOffset;

    UnityEngine::Light.get_spotAngleOffset = getRealOffset(0x134E52C);
    UnityEngine::Light.get_spotAngle = (float(*)(void*))UnityEngine::Light.get_spotAngleOffset;

    UnityEngine::Light.set_spotAngleOffset = getRealOffset(0x134E594);
    UnityEngine::Light.set_spotAngle = (void(*)(void*, float))UnityEngine::Light.set_spotAngleOffset;

    UnityEngine::Light.get_colorOffset = getRealOffset(0x134E610);
    UnityEngine::Light.get_color = (Color (*)(void*))UnityEngine::Light.get_colorOffset;

    UnityEngine::Light.set_colorOffset = getRealOffset(0x134E6D4);
    UnityEngine::Light.set_color = (void(*)(void*, Color))UnityEngine::Light.set_colorOffset;

    UnityEngine::Light.get_intensityOffset = getRealOffset(0x134E790);
    UnityEngine::Light.get_intensity = (float(*)(void*))UnityEngine::Light.get_intensityOffset;

    UnityEngine::Light.set_intensityOffset = getRealOffset(0x134E7F8);
    UnityEngine::Light.set_intensity = (void(*)(void*, float))UnityEngine::Light.set_intensityOffset;

    UnityEngine::Light.set_bounceIntensityOffset = getRealOffset(0x134E874);
    UnityEngine::Light.set_bounceIntensity = (void(*)(void*, float))UnityEngine::Light.set_bounceIntensityOffset;

    UnityEngine::Light.get_rangeOffset = getRealOffset(0x134E8F8);
    UnityEngine::Light.get_range = (float(*)(void*))UnityEngine::Light.get_rangeOffset;

    UnityEngine::Light.set_rangeOffset = getRealOffset(0x134E95C);
    UnityEngine::Light.set_range = (void(*)(void*, float))UnityEngine::Light.set_rangeOffset;

    UnityEngine::Light.get_bakingOutputOffset = getRealOffset(0x134E9D4);
    UnityEngine::Light.get_bakingOutput = (int (*)(void*))UnityEngine::Light.get_bakingOutputOffset;

    UnityEngine::Light.set_cullingMaskOffset = getRealOffset(0x134EB70);
    UnityEngine::Light.set_cullingMask = (void(*)(void*, int))UnityEngine::Light.set_cullingMaskOffset;

    UnityEngine::Light.get_shadowsOffset = getRealOffset(0x134EBF0);
    UnityEngine::Light.get_shadows = (int (*)(void*))UnityEngine::Light.get_shadowsOffset;

    UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreenOffset = getRealOffset(0x1466350);
    UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreen = (bool(*)(void*))UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreenOffset;

    UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreenOffset = getRealOffset(0x14663D0);
    UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreen = (void(*)(void*, bool))UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreenOffset;

    UnityEngine::SkinnedMeshRenderer.get_bonesOffset = getRealOffset(0x1466424);
    UnityEngine::SkinnedMeshRenderer.get_sharedMeshOffset = getRealOffset(0x14664EC);
    UnityEngine::SkinnedMeshRenderer.get_sharedMesh = (void *(*)(void*))UnityEngine::SkinnedMeshRenderer.get_sharedMeshOffset;

    UnityEngine::SkinnedMeshRenderer.set_sharedMeshOffset = getRealOffset(0x1466564);
    UnityEngine::SkinnedMeshRenderer.set_sharedMesh = (void(*)(void*, void *))UnityEngine::SkinnedMeshRenderer.set_sharedMeshOffset;

    UnityEngine::LODGroup.get_lodCountOffset = getRealOffset(0x134DFF4);
    UnityEngine::LODGroup.get_lodCount = (int(*)(void*))UnityEngine::LODGroup.get_lodCountOffset;

    UnityEngine::LODGroup.RecalculateBoundsOffset = getRealOffset(0x134E060);
    UnityEngine::LODGroup.RecalculateBounds = (void(*)(void*))UnityEngine::LODGroup.RecalculateBoundsOffset;

    UnityEngine::LODGroup.GetLODsOffset = getRealOffset(0x134E0D0);
    UnityEngine::Mesh.Internal_CreateOffset = getRealOffset(0x13570AC);
    UnityEngine::Mesh.Internal_Create = (void(*)(void *))UnityEngine::Mesh.Internal_CreateOffset;

    UnityEngine::Mesh.FromInstanceIDOffset = getRealOffset(0x13570F8);
    UnityEngine::Mesh.FromInstanceID = (void *(*)(int))UnityEngine::Mesh.FromInstanceIDOffset;

    UnityEngine::Mesh.GetTrianglesImplOffset = getRealOffset(0x135716C);
    UnityEngine::Mesh.GetIndicesImplOffset = getRealOffset(0x13571C8);
    UnityEngine::Mesh.GetBoneWeightsImplOffset = getRealOffset(0x135741C);
    UnityEngine::Mesh.get_bindposesOffset = getRealOffset(0x13574BC);
    UnityEngine::Mesh.get_isReadableOffset = getRealOffset(0x13575AC);
    UnityEngine::Mesh.get_isReadable = (bool(*)(void*))UnityEngine::Mesh.get_isReadableOffset;

    UnityEngine::Mesh.get_canAccessOffset = getRealOffset(0x134CBB4);
    UnityEngine::Mesh.get_canAccess = (bool(*)(void*))UnityEngine::Mesh.get_canAccessOffset;

    UnityEngine::Mesh.get_vertexCountOffset = getRealOffset(0x134CC00);
    UnityEngine::Mesh.get_vertexCount = (int(*)(void*))UnityEngine::Mesh.get_vertexCountOffset;

    UnityEngine::Mesh.get_subMeshCountOffset = getRealOffset(0x134D734);
    UnityEngine::Mesh.get_subMeshCount = (int(*)(void*))UnityEngine::Mesh.get_subMeshCountOffset;

    UnityEngine::Mesh.set_subMeshCountOffset = getRealOffset(0x1357614);
    UnityEngine::Mesh.set_subMeshCount = (void(*)(void*, int))UnityEngine::Mesh.set_subMeshCountOffset;

    UnityEngine::Mesh.get_boundsOffset = getRealOffset(0x1357694);
    UnityEngine::Mesh.get_bounds = (int (*)(void*))UnityEngine::Mesh.get_boundsOffset;

    UnityEngine::Mesh.ClearImplOffset = getRealOffset(0x1357830);
    UnityEngine::Mesh.ClearImpl = (void(*)(void*, bool))UnityEngine::Mesh.ClearImplOffset;

    UnityEngine::Mesh.RecalculateBoundsImplOffset = getRealOffset(0x1357884);
    UnityEngine::Mesh.RecalculateBoundsImpl = (void(*)(void*))UnityEngine::Mesh.RecalculateBoundsImplOffset;

    UnityEngine::Mesh.RecalculateNormalsImplOffset = getRealOffset(0x13578D0);
    UnityEngine::Mesh.RecalculateNormalsImpl = (void(*)(void*))UnityEngine::Mesh.RecalculateNormalsImplOffset;

    UnityEngine::Mesh.MarkDynamicImplOffset = getRealOffset(0x135791C);
    UnityEngine::Mesh.MarkDynamicImpl = (void(*)(void*))UnityEngine::Mesh.MarkDynamicImplOffset;

    UnityEngine::Mesh.GetUVChannelOffset = getRealOffset(0x13579DC);
    UnityEngine::Mesh.GetUVChannel = (int (*)(void*, int))UnityEngine::Mesh.GetUVChannelOffset;

    UnityEngine::Mesh.get_verticesOffset = getRealOffset(0x1357C68);
    UnityEngine::Mesh.get_normalsOffset = getRealOffset(0x1357D40);
    UnityEngine::Mesh.get_tangentsOffset = getRealOffset(0x1357E18);
    UnityEngine::Mesh.get_uvOffset = getRealOffset(0x1357EF0);
    UnityEngine::Mesh.get_uv2Offset = getRealOffset(0x1357FC8);
    UnityEngine::Mesh.get_uv3Offset = getRealOffset(0x13580A0);
    UnityEngine::Mesh.get_uv4Offset = getRealOffset(0x1358178);
    UnityEngine::Mesh.get_colorsOffset = getRealOffset(0x1358250);
    UnityEngine::Mesh.get_colors32Offset = getRealOffset(0x1358328);
    UnityEngine::Mesh.PrintErrorCantAccessIndicesOffset = getRealOffset(0x1358680);
    UnityEngine::Mesh.PrintErrorCantAccessIndices = (void(*)(void*))UnityEngine::Mesh.PrintErrorCantAccessIndicesOffset;

    UnityEngine::Mesh.CheckCanAccessSubmeshOffset = getRealOffset(0x135872C);
    UnityEngine::Mesh.CheckCanAccessSubmesh = (bool(*)(void*, int, bool))UnityEngine::Mesh.CheckCanAccessSubmeshOffset;

    UnityEngine::Mesh.CheckCanAccessSubmeshTrianglesOffset = getRealOffset(0x13588A4);
    UnityEngine::Mesh.CheckCanAccessSubmeshTriangles = (bool(*)(void*, int))UnityEngine::Mesh.CheckCanAccessSubmeshTrianglesOffset;

    UnityEngine::Mesh.CheckCanAccessSubmeshIndicesOffset = getRealOffset(0x13588AC);
    UnityEngine::Mesh.CheckCanAccessSubmeshIndices = (bool(*)(void*, int))UnityEngine::Mesh.CheckCanAccessSubmeshIndicesOffset;

    UnityEngine::Mesh.get_trianglesOffset = getRealOffset(0x13588B4);
    UnityEngine::Mesh.GetTrianglesOffset = getRealOffset(0x1358B28);
    UnityEngine::Mesh.GetTriangles1Offset = getRealOffset(0x1358B30);
    UnityEngine::Mesh.GetIndicesOffset = getRealOffset(0x1358BFC);
    UnityEngine::Mesh.GetIndices1Offset = getRealOffset(0x1358C04);
    UnityEngine::Mesh.SetTrianglesImplOffset = getRealOffset(0x1358AAC);
    UnityEngine::Mesh.SetTrianglesImpl = (void(*)(void*, int, void *, int, bool, int))UnityEngine::Mesh.SetTrianglesImplOffset;

    UnityEngine::Mesh.get_boneWeightsOffset = getRealOffset(0x1358F30);
    UnityEngine::Mesh.ClearOffset = getRealOffset(0x1358FD0);
    UnityEngine::Mesh.Clear = (void(*)(void*, bool))UnityEngine::Mesh.ClearOffset;

    UnityEngine::Mesh.Clear1Offset = getRealOffset(0x1359024);
    UnityEngine::Mesh.Clear1 = (void(*)(void*))UnityEngine::Mesh.Clear1Offset;

    UnityEngine::Mesh.RecalculateBoundsOffset = getRealOffset(0x1359074);
    UnityEngine::Mesh.RecalculateBounds = (void(*)(void*))UnityEngine::Mesh.RecalculateBoundsOffset;

    UnityEngine::Mesh.RecalculateNormalsOffset = getRealOffset(0x13591A4);
    UnityEngine::Mesh.RecalculateNormals = (void(*)(void*))UnityEngine::Mesh.RecalculateNormalsOffset;

    UnityEngine::Mesh.MarkDynamicOffset = getRealOffset(0x13592D4);
    UnityEngine::Mesh.MarkDynamic = (void(*)(void*))UnityEngine::Mesh.MarkDynamicOffset;

    UnityEngine::BoneWeight.get_weight0Offset = getRealOffset(0x423FFC);
    UnityEngine::BoneWeight.get_weight0 = (float(*)(void*))UnityEngine::BoneWeight.get_weight0Offset;

    UnityEngine::BoneWeight.set_weight0Offset = getRealOffset(0x424004);
    UnityEngine::BoneWeight.set_weight0 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight0Offset;

    UnityEngine::BoneWeight.get_weight1Offset = getRealOffset(0x42400C);
    UnityEngine::BoneWeight.get_weight1 = (float(*)(void*))UnityEngine::BoneWeight.get_weight1Offset;

    UnityEngine::BoneWeight.set_weight1Offset = getRealOffset(0x424014);
    UnityEngine::BoneWeight.set_weight1 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight1Offset;

    UnityEngine::BoneWeight.get_weight2Offset = getRealOffset(0x42401C);
    UnityEngine::BoneWeight.get_weight2 = (float(*)(void*))UnityEngine::BoneWeight.get_weight2Offset;

    UnityEngine::BoneWeight.set_weight2Offset = getRealOffset(0x424024);
    UnityEngine::BoneWeight.set_weight2 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight2Offset;

    UnityEngine::BoneWeight.get_weight3Offset = getRealOffset(0x42402C);
    UnityEngine::BoneWeight.get_weight3 = (float(*)(void*))UnityEngine::BoneWeight.get_weight3Offset;

    UnityEngine::BoneWeight.set_weight3Offset = getRealOffset(0x424034);
    UnityEngine::BoneWeight.set_weight3 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight3Offset;

    UnityEngine::BoneWeight.get_boneIndex0Offset = getRealOffset(0x42403C);
    UnityEngine::BoneWeight.get_boneIndex0 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex0Offset;

    UnityEngine::BoneWeight.set_boneIndex0Offset = getRealOffset(0x424044);
    UnityEngine::BoneWeight.set_boneIndex0 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex0Offset;

    UnityEngine::BoneWeight.get_boneIndex1Offset = getRealOffset(0x42404C);
    UnityEngine::BoneWeight.get_boneIndex1 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex1Offset;

    UnityEngine::BoneWeight.set_boneIndex1Offset = getRealOffset(0x424054);
    UnityEngine::BoneWeight.set_boneIndex1 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex1Offset;

    UnityEngine::BoneWeight.get_boneIndex2Offset = getRealOffset(0x42405C);
    UnityEngine::BoneWeight.get_boneIndex2 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex2Offset;

    UnityEngine::BoneWeight.set_boneIndex2Offset = getRealOffset(0x424064);
    UnityEngine::BoneWeight.set_boneIndex2 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex2Offset;

    UnityEngine::BoneWeight.get_boneIndex3Offset = getRealOffset(0x42406C);
    UnityEngine::BoneWeight.get_boneIndex3 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex3Offset;

    UnityEngine::BoneWeight.set_boneIndex3Offset = getRealOffset(0x424074);
    UnityEngine::BoneWeight.set_boneIndex3 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex3Offset;

    UnityEngine::BoneWeight.GetHashCodeOffset = getRealOffset(0x42407C);
    UnityEngine::BoneWeight.GetHashCode = (int(*)(void*))UnityEngine::BoneWeight.GetHashCodeOffset;

    UnityEngine::CombineInstance.get_meshOffset = getRealOffset(0x4243F8);
    UnityEngine::CombineInstance.get_mesh = (void *(*)(void*))UnityEngine::CombineInstance.get_meshOffset;

    UnityEngine::CombineInstance.set_meshOffset = getRealOffset(0x424404);
    UnityEngine::CombineInstance.set_mesh = (void(*)(void*, void *))UnityEngine::CombineInstance.set_meshOffset;

    UnityEngine::Texture.GetDataWidthOffset = getRealOffset(0x146B3A4);
    UnityEngine::Texture.GetDataWidth = (int(*)(void*))UnityEngine::Texture.GetDataWidthOffset;

    UnityEngine::Texture.GetDataHeightOffset = getRealOffset(0x146B3F0);
    UnityEngine::Texture.GetDataHeight = (int(*)(void*))UnityEngine::Texture.GetDataHeightOffset;

    UnityEngine::Texture.GetDimensionOffset = getRealOffset(0x146B43C);
    UnityEngine::Texture.GetDimension = (int (*)(void*))UnityEngine::Texture.GetDimensionOffset;

    UnityEngine::Texture.get_widthOffset = getRealOffset(0x146B488);
    UnityEngine::Texture.get_width = (int(*)(void*))UnityEngine::Texture.get_widthOffset;

    UnityEngine::Texture.set_widthOffset = getRealOffset(0x146B4D4);
    UnityEngine::Texture.set_width = (void(*)(void*, int))UnityEngine::Texture.set_widthOffset;

    UnityEngine::Texture.get_heightOffset = getRealOffset(0x146B55C);
    UnityEngine::Texture.get_height = (int(*)(void*))UnityEngine::Texture.get_heightOffset;

    UnityEngine::Texture.set_heightOffset = getRealOffset(0x146B5A8);
    UnityEngine::Texture.set_height = (void(*)(void*, int))UnityEngine::Texture.set_heightOffset;

    UnityEngine::Texture.get_dimensionOffset = getRealOffset(0x146B630);
    UnityEngine::Texture.get_dimension = (int (*)(void*))UnityEngine::Texture.get_dimensionOffset;

    UnityEngine::Texture.get_isReadableOffset = getRealOffset(0x146B704);
    UnityEngine::Texture.get_isReadable = (bool(*)(void*))UnityEngine::Texture.get_isReadableOffset;

    UnityEngine::Texture.get_wrapModeOffset = getRealOffset(0x146B770);
    UnityEngine::Texture.get_wrapMode = (int (*)(void*))UnityEngine::Texture.get_wrapModeOffset;

    UnityEngine::Texture.get_anisoLevelOffset = getRealOffset(0x146B8EC);
    UnityEngine::Texture.get_anisoLevel = (int(*)(void*))UnityEngine::Texture.get_anisoLevelOffset;

    UnityEngine::Texture.set_anisoLevelOffset = getRealOffset(0x146B958);
    UnityEngine::Texture.set_anisoLevel = (void(*)(void*, int))UnityEngine::Texture.set_anisoLevelOffset;

    UnityEngine::Texture.get_texelSizeOffset = getRealOffset(0x146B9D8);
    UnityEngine::Texture.get_texelSize = (Vector2 (*)(void*))UnityEngine::Texture.get_texelSizeOffset;

    UnityEngine::Texture.CreateNonReadableExceptionOffset = getRealOffset(0x146BC4C);
    UnityEngine::Texture.CreateNonReadableException = (void *(*)(void*, void *))UnityEngine::Texture.CreateNonReadableExceptionOffset;

    UnityEngine::Texture2D.ctor3Offset = getRealOffset(0x146C040);
    UnityEngine::Texture2D.ctor3 = (void(*)(void*, int, int))UnityEngine::Texture2D.ctor3Offset;

    UnityEngine::Texture2D.get_mipmapCountOffset = getRealOffset(0x146C0C4);
    UnityEngine::Texture2D.get_mipmapCount = (int(*)(void*))UnityEngine::Texture2D.get_mipmapCountOffset;

    UnityEngine::Texture2D.get_formatOffset = getRealOffset(0x146C134);
    UnityEngine::Texture2D.get_format = (int (*)(void*))UnityEngine::Texture2D.get_formatOffset;

    UnityEngine::Texture2D.get_whiteTextureOffset = getRealOffset(0x146C19C);
    UnityEngine::Texture2D.get_whiteTexture = (void *(*)())UnityEngine::Texture2D.get_whiteTextureOffset;

    UnityEngine::Texture2D.get_blackTextureOffset = getRealOffset(0x146C204);
    UnityEngine::Texture2D.get_blackTexture = (void *(*)())UnityEngine::Texture2D.get_blackTextureOffset;

    UnityEngine::Texture2D.get_isReadableOffset = getRealOffset(0x146C2D0);
    UnityEngine::Texture2D.get_isReadable = (bool(*)(void*))UnityEngine::Texture2D.get_isReadableOffset;

    UnityEngine::Texture2D.ApplyImplOffset = getRealOffset(0x146C33C);
    UnityEngine::Texture2D.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Texture2D.ApplyImplOffset;

    UnityEngine::Texture2D.ResizeImplOffset = getRealOffset(0x146C398);
    UnityEngine::Texture2D.ResizeImpl = (bool(*)(void*, int, int))UnityEngine::Texture2D.ResizeImplOffset;

    UnityEngine::Texture2D.SetPixelImplOffset = getRealOffset(0x146C3F4);
    UnityEngine::Texture2D.SetPixelImpl = (void(*)(void*, int, int, int, Color))UnityEngine::Texture2D.SetPixelImplOffset;

    UnityEngine::Texture2D.GetPixelImplOffset = getRealOffset(0x146C4E4);
    UnityEngine::Texture2D.GetPixelImpl = (Color (*)(void*, int, int, int))UnityEngine::Texture2D.GetPixelImplOffset;

    UnityEngine::Texture2D.GetPixelBilinearImplOffset = getRealOffset(0x146C5D0);
    UnityEngine::Texture2D.GetPixelBilinearImpl = (Color (*)(void*, int, float, float))UnityEngine::Texture2D.GetPixelBilinearImplOffset;

    UnityEngine::Texture2D.GetRawTextureDataOffset = getRealOffset(0x146C8CC);
    UnityEngine::Texture2D.GetPixelsOffset = getRealOffset(0x146C93C);
    UnityEngine::Texture2D.GetPixels1Offset = getRealOffset(0x146C9A0);
    UnityEngine::Texture2D.GetPixels32Offset = getRealOffset(0x146CA1C);
    UnityEngine::Texture2D.GetPixels321Offset = getRealOffset(0x146CA70);
    UnityEngine::Texture2D.SetPixelOffset = getRealOffset(0x146CC18);
    UnityEngine::Texture2D.SetPixel = (void(*)(void*, int, int, Color))UnityEngine::Texture2D.SetPixelOffset;

    UnityEngine::Texture2D.GetPixelOffset = getRealOffset(0x146CF18);
    UnityEngine::Texture2D.GetPixel = (Color (*)(void*, int, int))UnityEngine::Texture2D.GetPixelOffset;

    UnityEngine::Texture2D.GetPixelBilinearOffset = getRealOffset(0x146D03C);
    UnityEngine::Texture2D.GetPixelBilinear = (Color (*)(void*, float, float))UnityEngine::Texture2D.GetPixelBilinearOffset;

    UnityEngine::Texture2D.ApplyOffset = getRealOffset(0x146D2DC);
    UnityEngine::Texture2D.Apply = (void(*)(void*, bool, bool))UnityEngine::Texture2D.ApplyOffset;

    UnityEngine::Texture2D.Apply1Offset = getRealOffset(0x146D3B8);
    UnityEngine::Texture2D.Apply1 = (void(*)(void*, bool))UnityEngine::Texture2D.Apply1Offset;

    UnityEngine::Texture2D.Apply2Offset = getRealOffset(0x146D3C0);
    UnityEngine::Texture2D.Apply2 = (void(*)(void*))UnityEngine::Texture2D.Apply2Offset;

    UnityEngine::Texture2D.ResizeOffset = getRealOffset(0x146D3CC);
    UnityEngine::Texture2D.Resize = (bool(*)(void*, int, int))UnityEngine::Texture2D.ResizeOffset;

    UnityEngine::Texture2D.GetPixels11Offset = getRealOffset(0x146D664);
    UnityEngine::Texture2D.GetPixels2Offset = getRealOffset(0x146D718);
    UnityEngine::Cubemap.get_formatOffset = getRealOffset(0x16571CC);
    UnityEngine::Cubemap.get_format = (int (*)(void*))UnityEngine::Cubemap.get_formatOffset;

    UnityEngine::Cubemap.ApplyImplOffset = getRealOffset(0x1657298);
    UnityEngine::Cubemap.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Cubemap.ApplyImplOffset;

    UnityEngine::Cubemap.get_isReadableOffset = getRealOffset(0x16572F4);
    UnityEngine::Cubemap.get_isReadable = (bool(*)(void*))UnityEngine::Cubemap.get_isReadableOffset;

    UnityEngine::Cubemap.ApplyOffset = getRealOffset(0x16574D8);
    UnityEngine::Cubemap.Apply = (void(*)(void*, bool, bool))UnityEngine::Cubemap.ApplyOffset;

    UnityEngine::Cubemap.Apply1Offset = getRealOffset(0x16575BC);
    UnityEngine::Cubemap.Apply1 = (void(*)(void*, bool))UnityEngine::Cubemap.Apply1Offset;

    UnityEngine::Texture3D.get_isReadableOffset = getRealOffset(0x146DD10);
    UnityEngine::Texture3D.get_isReadable = (bool(*)(void*))UnityEngine::Texture3D.get_isReadableOffset;

    UnityEngine::Texture3D.ApplyImplOffset = getRealOffset(0x146DDE0);
    UnityEngine::Texture3D.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Texture3D.ApplyImplOffset;

    UnityEngine::Texture3D.ApplyOffset = getRealOffset(0x146DEF0);
    UnityEngine::Texture3D.Apply = (void(*)(void*, bool, bool))UnityEngine::Texture3D.ApplyOffset;

    UnityEngine::Texture3D.Apply1Offset = getRealOffset(0x146DFCC);
    UnityEngine::Texture3D.Apply1 = (void(*)(void*))UnityEngine::Texture3D.Apply1Offset;

    UnityEngine::Texture2DArray.get_isReadableOffset = getRealOffset(0x146D9C4);
    UnityEngine::Texture2DArray.get_isReadable = (bool(*)(void*))UnityEngine::Texture2DArray.get_isReadableOffset;

    UnityEngine::CubemapArray.get_isReadableOffset = getRealOffset(0x1657828);
    UnityEngine::CubemapArray.get_isReadable = (bool(*)(void*))UnityEngine::CubemapArray.get_isReadableOffset;

    UnityEngine::RenderTexture.ctor2Offset = getRealOffset(0x145B3C4);
    UnityEngine::RenderTexture.ctor2 = (void(*)(void*, void *))UnityEngine::RenderTexture.ctor2Offset;

    UnityEngine::RenderTexture.ctor7Offset = getRealOffset(0x145BC08);
    UnityEngine::RenderTexture.ctor7 = (void(*)(void*, int, int, int))UnityEngine::RenderTexture.ctor7Offset;

    UnityEngine::RenderTexture.get_widthOffset = getRealOffset(0x145BC54);
    UnityEngine::RenderTexture.get_width = (int(*)(void*))UnityEngine::RenderTexture.get_widthOffset;

    UnityEngine::RenderTexture.set_widthOffset = getRealOffset(0x145BCC0);
    UnityEngine::RenderTexture.set_width = (void(*)(void*, int))UnityEngine::RenderTexture.set_widthOffset;

    UnityEngine::RenderTexture.get_heightOffset = getRealOffset(0x145BD40);
    UnityEngine::RenderTexture.get_height = (int(*)(void*))UnityEngine::RenderTexture.get_heightOffset;

    UnityEngine::RenderTexture.set_heightOffset = getRealOffset(0x145BDAC);
    UnityEngine::RenderTexture.set_height = (void(*)(void*, int))UnityEngine::RenderTexture.set_heightOffset;

    UnityEngine::RenderTexture.get_dimensionOffset = getRealOffset(0x145BE2C);
    UnityEngine::RenderTexture.get_dimension = (int (*)(void*))UnityEngine::RenderTexture.get_dimensionOffset;

    UnityEngine::RenderTexture.get_graphicsFormatOffset = getRealOffset(0x145BEF0);
    UnityEngine::RenderTexture.get_graphicsFormat = (int (*)(void*))UnityEngine::RenderTexture.get_graphicsFormatOffset;

    UnityEngine::RenderTexture.set_useMipMapOffset = getRealOffset(0x145BF3C);
    UnityEngine::RenderTexture.set_useMipMap = (void(*)(void*, bool))UnityEngine::RenderTexture.set_useMipMapOffset;

    UnityEngine::RenderTexture.get_formatOffset = getRealOffset(0x145BFC4);
    UnityEngine::RenderTexture.get_format = (int (*)(void*))UnityEngine::RenderTexture.get_formatOffset;

    UnityEngine::RenderTexture.set_autoGenerateMipsOffset = getRealOffset(0x145C018);
    UnityEngine::RenderTexture.set_autoGenerateMips = (void(*)(void*, bool))UnityEngine::RenderTexture.set_autoGenerateMipsOffset;

    UnityEngine::RenderTexture.set_antiAliasingOffset = getRealOffset(0x145C0A4);
    UnityEngine::RenderTexture.set_antiAliasing = (void(*)(void*, int))UnityEngine::RenderTexture.set_antiAliasingOffset;

    UnityEngine::RenderTexture.GetActiveOffset = getRealOffset(0x145C12C);
    UnityEngine::RenderTexture.GetActive = (void *(*)())UnityEngine::RenderTexture.GetActiveOffset;

    UnityEngine::RenderTexture.SetActiveOffset = getRealOffset(0x145C170);
    UnityEngine::RenderTexture.SetActive = (void(*)(void *))UnityEngine::RenderTexture.SetActiveOffset;

    UnityEngine::RenderTexture.get_activeOffset = getRealOffset(0x145C1BC);
    UnityEngine::RenderTexture.get_active = (void *(*)())UnityEngine::RenderTexture.get_activeOffset;

    UnityEngine::RenderTexture.set_activeOffset = getRealOffset(0x145C200);
    UnityEngine::RenderTexture.set_active = (void(*)(void *))UnityEngine::RenderTexture.set_activeOffset;

    UnityEngine::RenderTexture.GetColorBufferOffset = getRealOffset(0x145C24C);
    UnityEngine::RenderTexture.GetColorBuffer = (int (*)(void*))UnityEngine::RenderTexture.GetColorBufferOffset;

    UnityEngine::RenderTexture.GetDepthBufferOffset = getRealOffset(0x145C310);
    UnityEngine::RenderTexture.GetDepthBuffer = (int (*)(void*))UnityEngine::RenderTexture.GetDepthBufferOffset;

    UnityEngine::RenderTexture.get_colorBufferOffset = getRealOffset(0x145C3D4);
    UnityEngine::RenderTexture.get_colorBuffer = (int (*)(void*))UnityEngine::RenderTexture.get_colorBufferOffset;

    UnityEngine::RenderTexture.get_depthBufferOffset = getRealOffset(0x145C444);
    UnityEngine::RenderTexture.get_depthBuffer = (int (*)(void*))UnityEngine::RenderTexture.get_depthBufferOffset;

    UnityEngine::RenderTexture.DiscardContentsOffset = getRealOffset(0x145C4B4);
    UnityEngine::RenderTexture.DiscardContents = (void(*)(void*, bool, bool))UnityEngine::RenderTexture.DiscardContentsOffset;

    UnityEngine::RenderTexture.MarkRestoreExpectedOffset = getRealOffset(0x145C510);
    UnityEngine::RenderTexture.MarkRestoreExpected = (void(*)(void*))UnityEngine::RenderTexture.MarkRestoreExpectedOffset;

    UnityEngine::RenderTexture.DiscardContents1Offset = getRealOffset(0x145C588);
    UnityEngine::RenderTexture.DiscardContents1 = (void(*)(void*))UnityEngine::RenderTexture.DiscardContents1Offset;

    UnityEngine::RenderTexture.CreateOffset = getRealOffset(0x145C5DC);
    UnityEngine::RenderTexture.Create = (bool(*)(void*))UnityEngine::RenderTexture.CreateOffset;

    UnityEngine::RenderTexture.ReleaseOffset = getRealOffset(0x145C644);
    UnityEngine::RenderTexture.Release = (void(*)(void*))UnityEngine::RenderTexture.ReleaseOffset;

    UnityEngine::RenderTexture.IsCreatedOffset = getRealOffset(0x145C6B0);
    UnityEngine::RenderTexture.IsCreated = (bool(*)(void*))UnityEngine::RenderTexture.IsCreatedOffset;

    UnityEngine::RenderTexture.SetSRGBReadWriteOffset = getRealOffset(0x145BB1C);
    UnityEngine::RenderTexture.SetSRGBReadWrite = (void(*)(void*, bool))UnityEngine::RenderTexture.SetSRGBReadWriteOffset;

    UnityEngine::RenderTexture.Internal_CreateOffset = getRealOffset(0x145B2DC);
    UnityEngine::RenderTexture.Internal_Create = (void(*)(void *))UnityEngine::RenderTexture.Internal_CreateOffset;

    UnityEngine::RenderTexture.GetDescriptorOffset = getRealOffset(0x145C770);
    UnityEngine::RenderTexture.GetDescriptor = (int (*)(void*))UnityEngine::RenderTexture.GetDescriptorOffset;

    UnityEngine::RenderTexture.ReleaseTemporaryOffset = getRealOffset(0x145C920);
    UnityEngine::RenderTexture.ReleaseTemporary = (void(*)(void *))UnityEngine::RenderTexture.ReleaseTemporaryOffset;

    UnityEngine::RenderTexture.get_depthOffset = getRealOffset(0x145C96C);
    UnityEngine::RenderTexture.get_depth = (int(*)(void*))UnityEngine::RenderTexture.get_depthOffset;

    UnityEngine::RenderTexture.set_depthOffset = getRealOffset(0x145BA74);
    UnityEngine::RenderTexture.set_depth = (void(*)(void*, int))UnityEngine::RenderTexture.set_depthOffset;

    UnityEngine::RenderTexture.get_descriptorOffset = getRealOffset(0x145B5A0);
    UnityEngine::RenderTexture.get_descriptor = (int (*)(void*))UnityEngine::RenderTexture.get_descriptorOffset;

    UnityEngine::RenderTexture.GetTemporary3Offset = getRealOffset(0x145D068);
    UnityEngine::RenderTexture.GetTemporary3 = (void *(*)(int, int, int))UnityEngine::RenderTexture.GetTemporary3Offset;

    UnityEngine::RenderTexture.GetTemporary4Offset = getRealOffset(0x145D0BC);
    UnityEngine::RenderTexture.GetTemporary4 = (void *(*)(int, int))UnityEngine::RenderTexture.GetTemporary4Offset;

    UnityEngine::RenderTexture.set_isCubemapOffset = getRealOffset(0x145D10C);
    UnityEngine::RenderTexture.set_isCubemap = (void(*)(void*, bool))UnityEngine::RenderTexture.set_isCubemapOffset;

    UnityEngine::RenderTextureDescriptor.get_widthOffset = getRealOffset(0x4203AC);
    UnityEngine::RenderTextureDescriptor.get_width = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_widthOffset;

    UnityEngine::RenderTextureDescriptor.set_widthOffset = getRealOffset(0x4203B4);
    UnityEngine::RenderTextureDescriptor.set_width = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_widthOffset;

    UnityEngine::RenderTextureDescriptor.get_heightOffset = getRealOffset(0x4203BC);
    UnityEngine::RenderTextureDescriptor.get_height = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_heightOffset;

    UnityEngine::RenderTextureDescriptor.set_heightOffset = getRealOffset(0x4203C4);
    UnityEngine::RenderTextureDescriptor.set_height = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_heightOffset;

    UnityEngine::RenderTextureDescriptor.get_msaaSamplesOffset = getRealOffset(0x4203CC);
    UnityEngine::RenderTextureDescriptor.get_msaaSamples = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_msaaSamplesOffset;

    UnityEngine::RenderTextureDescriptor.set_msaaSamplesOffset = getRealOffset(0x4203D4);
    UnityEngine::RenderTextureDescriptor.set_msaaSamples = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_msaaSamplesOffset;

    UnityEngine::RenderTextureDescriptor.get_volumeDepthOffset = getRealOffset(0x4203DC);
    UnityEngine::RenderTextureDescriptor.get_volumeDepth = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_volumeDepthOffset;

    UnityEngine::RenderTextureDescriptor.set_volumeDepthOffset = getRealOffset(0x4203E4);
    UnityEngine::RenderTextureDescriptor.set_volumeDepth = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_volumeDepthOffset;

    UnityEngine::RenderTextureDescriptor.get_graphicsFormatOffset = getRealOffset(0x4203EC);
    UnityEngine::RenderTextureDescriptor.get_graphicsFormat = (int (*)(void*))UnityEngine::RenderTextureDescriptor.get_graphicsFormatOffset;

    UnityEngine::RenderTextureDescriptor.get_depthBufferBitsOffset = getRealOffset(0x420428);
    UnityEngine::RenderTextureDescriptor.get_depthBufferBits = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_depthBufferBitsOffset;

    UnityEngine::RenderTextureDescriptor.set_depthBufferBitsOffset = getRealOffset(0x420430);
    UnityEngine::RenderTextureDescriptor.set_depthBufferBits = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_depthBufferBitsOffset;

    UnityEngine::RenderTextureDescriptor.get_vrUsageOffset = getRealOffset(0x42045C);
    UnityEngine::RenderTextureDescriptor.get_vrUsage = (int (*)(void*))UnityEngine::RenderTextureDescriptor.get_vrUsageOffset;

    UnityEngine::RenderTextureDescriptor.set_createdFromScriptOffset = getRealOffset(0x42048C);
    UnityEngine::RenderTextureDescriptor.set_createdFromScript = (void(*)(void*, bool))UnityEngine::RenderTextureDescriptor.set_createdFromScriptOffset;

    UnityEngine::RenderTextureDescriptor.set_useDynamicScaleOffset = getRealOffset(0x4204A4);
    UnityEngine::RenderTextureDescriptor.set_useDynamicScale = (void(*)(void*, bool))UnityEngine::RenderTextureDescriptor.set_useDynamicScaleOffset;

    UnityEngine::Hash128.ToStringOffset = getRealOffset(0x4193E4);
    UnityEngine::Hash128.ToString = (monoString *(*)(void*))UnityEngine::Hash128.ToStringOffset;

    UnityEngine::Hash128.GetHashCodeOffset = getRealOffset(0x419458);
    UnityEngine::Hash128.GetHashCode = (int(*)(void*))UnityEngine::Hash128.GetHashCodeOffset;

    UnityEngine::GUIElement.GetScreenRectOffset = getRealOffset(0x1344318);
    UnityEngine::GUIElement.GetScreenRect = (int (*)(void*, void *))UnityEngine::GUIElement.GetScreenRectOffset;

    UnityEngine::GUIElement.GetCameraOrWindowRectOffset = getRealOffset(0x1344374);
    UnityEngine::GUIElement.GetCameraOrWindowRect = (int (*)(void *))UnityEngine::GUIElement.GetCameraOrWindowRectOffset;

    UnityEngine::GUITexture.get_colorOffset = getRealOffset(0x1344704);
    UnityEngine::GUITexture.get_color = (Color (*)(void*))UnityEngine::GUITexture.get_colorOffset;

    UnityEngine::GUITexture.set_colorOffset = getRealOffset(0x13447C8);
    UnityEngine::GUITexture.set_color = (void(*)(void*, Color))UnityEngine::GUITexture.set_colorOffset;

    UnityEngine::GUITexture.set_textureOffset = getRealOffset(0x1344884);
    UnityEngine::GUITexture.set_texture = (void(*)(void*, void *))UnityEngine::GUITexture.set_textureOffset;

    UnityEngine::GUITexture.get_pixelInsetOffset = getRealOffset(0x134490C);
    UnityEngine::GUITexture.get_pixelInset = (int (*)(void*))UnityEngine::GUITexture.get_pixelInsetOffset;

    UnityEngine::GUILayer.HitTestOffset = getRealOffset(0x1344614);
    UnityEngine::GUILayer.HitTest = (void *(*)(void*, Vector3))UnityEngine::GUILayer.HitTestOffset;

    UnityEngine::GUILayer.HitTest1Offset = getRealOffset(0x1344650);
    UnityEngine::GUILayer.HitTest1 = (void *(*)(void*, Vector2))UnityEngine::GUILayer.HitTest1Offset;

    UnityEngine::Cursor.set_visibleOffset = getRealOffset(0x16581E0);
    UnityEngine::Cursor.set_visible = (void(*)(bool))UnityEngine::Cursor.set_visibleOffset;

    UnityEngine::Cursor.get_lockStateOffset = getRealOffset(0x1658254);
    UnityEngine::Cursor.get_lockState = (int (*)())UnityEngine::Cursor.get_lockStateOffset;

    UnityEngine::Input.GetKeyStringOffset = getRealOffset(0x1349D64);
    UnityEngine::Input.GetKeyString = (bool(*)(monoString*))UnityEngine::Input.GetKeyStringOffset;

    UnityEngine::Input.GetKeyUpStringOffset = getRealOffset(0x1349DFC);
    UnityEngine::Input.GetKeyUpString = (bool(*)(monoString*))UnityEngine::Input.GetKeyUpStringOffset;

    UnityEngine::Input.GetKeyDownStringOffset = getRealOffset(0x1349E94);
    UnityEngine::Input.GetKeyDownString = (bool(*)(monoString*))UnityEngine::Input.GetKeyDownStringOffset;

    UnityEngine::Input.GetAxisOffset = getRealOffset(0x1349EE0);
    UnityEngine::Input.GetAxis = (float(*)(monoString*))UnityEngine::Input.GetAxisOffset;

    UnityEngine::Input.GetAxisRawOffset = getRealOffset(0x1349F50);
    UnityEngine::Input.GetAxisRaw = (float(*)(monoString*))UnityEngine::Input.GetAxisRawOffset;

    UnityEngine::Input.GetButtonOffset = getRealOffset(0x1349FC4);
    UnityEngine::Input.GetButton = (bool(*)(monoString*))UnityEngine::Input.GetButtonOffset;

    UnityEngine::Input.GetButtonDownOffset = getRealOffset(0x134A034);
    UnityEngine::Input.GetButtonDown = (bool(*)(monoString*))UnityEngine::Input.GetButtonDownOffset;

    UnityEngine::Input.GetButtonUpOffset = getRealOffset(0x134A0A8);
    UnityEngine::Input.GetButtonUp = (bool(*)(monoString*))UnityEngine::Input.GetButtonUpOffset;

    UnityEngine::Input.GetMouseButtonOffset = getRealOffset(0x134A11C);
    UnityEngine::Input.GetMouseButton = (bool(*)(int))UnityEngine::Input.GetMouseButtonOffset;

    UnityEngine::Input.GetMouseButtonDownOffset = getRealOffset(0x134A190);
    UnityEngine::Input.GetMouseButtonDown = (bool(*)(int))UnityEngine::Input.GetMouseButtonDownOffset;

    UnityEngine::Input.GetMouseButtonUpOffset = getRealOffset(0x134A208);
    UnityEngine::Input.GetMouseButtonUp = (bool(*)(int))UnityEngine::Input.GetMouseButtonUpOffset;

    UnityEngine::Input.GetTouchOffset = getRealOffset(0x134A280);
    UnityEngine::Input.GetTouch = (int (*)(int))UnityEngine::Input.GetTouchOffset;

    UnityEngine::Input.GetKey1Offset = getRealOffset(0x134A39C);
    UnityEngine::Input.GetKey1 = (bool(*)(monoString*))UnityEngine::Input.GetKey1Offset;

    UnityEngine::Input.GetKeyUp1Offset = getRealOffset(0x134A434);
    UnityEngine::Input.GetKeyUp1 = (bool(*)(monoString*))UnityEngine::Input.GetKeyUp1Offset;

    UnityEngine::Input.GetKeyDown1Offset = getRealOffset(0x134A4CC);
    UnityEngine::Input.GetKeyDown1 = (bool(*)(monoString*))UnityEngine::Input.GetKeyDown1Offset;

    UnityEngine::Input.get_mousePositionOffset = getRealOffset(0x134A518);
    UnityEngine::Input.get_mousePosition = (Vector3 (*)())UnityEngine::Input.get_mousePositionOffset;

    UnityEngine::Input.get_mouseScrollDeltaOffset = getRealOffset(0x134A5D8);
    UnityEngine::Input.get_mouseScrollDelta = (Vector2 (*)())UnityEngine::Input.get_mouseScrollDeltaOffset;

    UnityEngine::Input.get_imeCompositionModeOffset = getRealOffset(0x134A68C);
    UnityEngine::Input.get_imeCompositionMode = (int (*)())UnityEngine::Input.get_imeCompositionModeOffset;

    UnityEngine::Input.get_compositionStringOffset = getRealOffset(0x134A740);
    UnityEngine::Input.get_compositionString = (monoString *(*)())UnityEngine::Input.get_compositionStringOffset;

    UnityEngine::Input.get_compositionCursorPosOffset = getRealOffset(0x134A7A8);
    UnityEngine::Input.get_compositionCursorPos = (Vector2 (*)())UnityEngine::Input.get_compositionCursorPosOffset;

    UnityEngine::Input.set_compositionCursorPosOffset = getRealOffset(0x134A85C);
    UnityEngine::Input.set_compositionCursorPos = (void(*)(Vector2))UnityEngine::Input.set_compositionCursorPosOffset;

    UnityEngine::Input.get_mousePresentOffset = getRealOffset(0x134A900);
    UnityEngine::Input.get_mousePresent = (bool(*)())UnityEngine::Input.get_mousePresentOffset;

    UnityEngine::Input.get_touchCountOffset = getRealOffset(0x134A964);
    UnityEngine::Input.get_touchCount = (int(*)())UnityEngine::Input.get_touchCountOffset;

    UnityEngine::Input.get_touchSupportedOffset = getRealOffset(0x134A9A8);
    UnityEngine::Input.get_touchSupported = (bool(*)())UnityEngine::Input.get_touchSupportedOffset;

    UnityEngine::Input.get_accelerationOffset = getRealOffset(0x134AA0C);
    UnityEngine::Input.get_acceleration = (Vector3 (*)())UnityEngine::Input.get_accelerationOffset;

    UnityEngine::Input.get_touchesOffset = getRealOffset(0x134AACC);
    UnityEngine::Input.get_mousePosition_InjectedOffset = getRealOffset(0x134A58C);
    UnityEngine::Input.get_mousePosition_Injected = (void(*)(Vector3 *))UnityEngine::Input.get_mousePosition_InjectedOffset;

    UnityEngine::Input.get_acceleration_InjectedOffset = getRealOffset(0x134AA80);
    UnityEngine::Input.get_acceleration_Injected = (void(*)(Vector3 *))UnityEngine::Input.get_acceleration_InjectedOffset;

    UnityEngine::SendMouseEvents.SetMouseMovedOffset = getRealOffset(0x14635EC);
    UnityEngine::SendMouseEvents.SetMouseMoved = (void(*)())UnityEngine::SendMouseEvents.SetMouseMovedOffset;

    UnityEngine::SendMouseEvents.DoSendMouseEventsOffset = getRealOffset(0x14637EC);
    UnityEngine::SendMouseEvents.DoSendMouseEvents = (void(*)(int))UnityEngine::SendMouseEvents.DoSendMouseEventsOffset;

    UnityEngine::Logger.get_logHandlerOffset = getRealOffset(0x134F180);
    UnityEngine::Logger.get_logHandler = (void *(*)(void*))UnityEngine::Logger.get_logHandlerOffset;

    UnityEngine::Logger.set_logHandlerOffset = getRealOffset(0x134F168);
    UnityEngine::Logger.set_logHandler = (void(*)(void*, void *))UnityEngine::Logger.set_logHandlerOffset;

    UnityEngine::Logger.get_logEnabledOffset = getRealOffset(0x134F188);
    UnityEngine::Logger.get_logEnabled = (bool(*)(void*))UnityEngine::Logger.get_logEnabledOffset;

    UnityEngine::Logger.set_logEnabledOffset = getRealOffset(0x134F170);
    UnityEngine::Logger.set_logEnabled = (void(*)(void*, bool))UnityEngine::Logger.set_logEnabledOffset;

    UnityEngine::Logger.get_filterLogTypeOffset = getRealOffset(0x134F190);
    UnityEngine::Logger.get_filterLogType = (int (*)(void*))UnityEngine::Logger.get_filterLogTypeOffset;

    UnityEngine::Logger.LogExceptionOffset = getRealOffset(0x13500C4);
    UnityEngine::Logger.LogException = (void(*)(void*, void *, void *))UnityEngine::Logger.LogExceptionOffset;

    UnityEngine::UnityLogWriter.WriteStringToUnityLogOffset = getRealOffset(0x1472BA4);
    UnityEngine::UnityLogWriter.WriteStringToUnityLog = (void(*)(monoString*))UnityEngine::UnityLogWriter.WriteStringToUnityLogOffset;

    UnityEngine::UnityLogWriter.WriteStringToUnityLogImplOffset = getRealOffset(0x1472BF8);
    UnityEngine::UnityLogWriter.WriteStringToUnityLogImpl = (void(*)(monoString*))UnityEngine::UnityLogWriter.WriteStringToUnityLogImplOffset;

    UnityEngine::UnityLogWriter.InitOffset = getRealOffset(0x1472C44);
    UnityEngine::UnityLogWriter.Init = (void(*)())UnityEngine::UnityLogWriter.InitOffset;

    UnityEngine::UnityLogWriter.get_EncodingOffset = getRealOffset(0x1472CE0);
    UnityEngine::UnityLogWriter.get_Encoding = (void *(*)(void*))UnityEngine::UnityLogWriter.get_EncodingOffset;

    UnityEngine::UnityLogWriter.Write1Offset = getRealOffset(0x1472D54);
    UnityEngine::UnityLogWriter.Write1 = (void(*)(void*, monoString*))UnityEngine::UnityLogWriter.Write1Offset;

    UnityEngine::UColor.ctor1Offset = getRealOffset(0x424384);
    UnityEngine::UColor.ctor1 = (void(*)(void*, float, float, float))UnityEngine::UColor.ctor1Offset;

    UnityEngine::UColor.ToStringOffset = getRealOffset(0x424394);
    UnityEngine::UColor.ToString = (monoString *(*)(void*))UnityEngine::UColor.ToStringOffset;

    UnityEngine::UColor.GetHashCodeOffset = getRealOffset(0x42439C);
    UnityEngine::UColor.GetHashCode = (int(*)(void*))UnityEngine::UColor.GetHashCodeOffset;

    UnityEngine::UColor.Equals1Offset = getRealOffset(0x4243AC);
    UnityEngine::UColor.Equals1 = (bool(*)(void*, Color))UnityEngine::UColor.Equals1Offset;

    UnityEngine::UColor.op_AdditionOffset = getRealOffset(0x1655330);
    UnityEngine::UColor.op_Addition = (Color (*)(Color, Color))UnityEngine::UColor.op_AdditionOffset;

    UnityEngine::UColor.op_SubtractionOffset = getRealOffset(0x1655374);
    UnityEngine::UColor.op_Subtraction = (Color (*)(Color, Color))UnityEngine::UColor.op_SubtractionOffset;

    UnityEngine::UColor.op_MultiplyOffset = getRealOffset(0x16553B8);
    UnityEngine::UColor.op_Multiply = (Color (*)(Color, Color))UnityEngine::UColor.op_MultiplyOffset;

    UnityEngine::UColor.op_Multiply1Offset = getRealOffset(0x16553FC);
    UnityEngine::UColor.op_Multiply1 = (Color (*)(Color, float))UnityEngine::UColor.op_Multiply1Offset;

    UnityEngine::UColor.op_Multiply2Offset = getRealOffset(0x1655434);
    UnityEngine::UColor.op_Multiply2 = (Color (*)(float, Color))UnityEngine::UColor.op_Multiply2Offset;

    UnityEngine::UColor.op_EqualityOffset = getRealOffset(0x165546C);
    UnityEngine::UColor.op_Equality = (bool(*)(Color, Color))UnityEngine::UColor.op_EqualityOffset;

    UnityEngine::UColor.op_InequalityOffset = getRealOffset(0x1655590);
    UnityEngine::UColor.op_Inequality = (bool(*)(Color, Color))UnityEngine::UColor.op_InequalityOffset;

    UnityEngine::UColor.LerpOffset = getRealOffset(0x16555CC);
    UnityEngine::UColor.Lerp = (Color (*)(Color, Color, float))UnityEngine::UColor.LerpOffset;

    UnityEngine::UColor.get_redOffset = getRealOffset(0x16556E8);
    UnityEngine::UColor.get_red = (Color (*)())UnityEngine::UColor.get_redOffset;

    UnityEngine::UColor.get_greenOffset = getRealOffset(0x1655708);
    UnityEngine::UColor.get_green = (Color (*)())UnityEngine::UColor.get_greenOffset;

    UnityEngine::UColor.get_blueOffset = getRealOffset(0x1655728);
    UnityEngine::UColor.get_blue = (Color (*)())UnityEngine::UColor.get_blueOffset;

    UnityEngine::UColor.get_whiteOffset = getRealOffset(0x1655748);
    UnityEngine::UColor.get_white = (Color (*)())UnityEngine::UColor.get_whiteOffset;

    UnityEngine::UColor.get_blackOffset = getRealOffset(0x1655758);
    UnityEngine::UColor.get_black = (Color (*)())UnityEngine::UColor.get_blackOffset;

    UnityEngine::UColor.get_yellowOffset = getRealOffset(0x1655778);
    UnityEngine::UColor.get_yellow = (Color (*)())UnityEngine::UColor.get_yellowOffset;

    UnityEngine::UColor.get_cyanOffset = getRealOffset(0x1655798);
    UnityEngine::UColor.get_cyan = (Color (*)())UnityEngine::UColor.get_cyanOffset;

    UnityEngine::UColor.get_magentaOffset = getRealOffset(0x16557B8);
    UnityEngine::UColor.get_magenta = (Color (*)())UnityEngine::UColor.get_magentaOffset;

    UnityEngine::UColor.get_greyOffset = getRealOffset(0x16557D8);
    UnityEngine::UColor.get_grey = (Color (*)())UnityEngine::UColor.get_greyOffset;

    UnityEngine::UColor.get_clearOffset = getRealOffset(0x16557F8);
    UnityEngine::UColor.get_clear = (Color (*)())UnityEngine::UColor.get_clearOffset;

    UnityEngine::UColor.op_ImplicitOffset = getRealOffset(0x16551C4);
    UnityEngine::UColor.op_Implicit = (int (*)(Color))UnityEngine::UColor.op_ImplicitOffset;

    UnityEngine::UColor.get_ItemOffset = getRealOffset(0x4243D0);
    UnityEngine::UColor.get_Item = (float(*)(void*, int))UnityEngine::UColor.get_ItemOffset;

    UnityEngine::UColor.HSVToRGBOffset = getRealOffset(0x16558F8);
    UnityEngine::UColor.HSVToRGB = (Color (*)(float, float, float, bool))UnityEngine::UColor.HSVToRGBOffset;

    UnityEngine::Color32.op_ImplicitOffset = getRealOffset(0x1655B60);
    UnityEngine::Color32.op_Implicit = (int (*)(Color))UnityEngine::Color32.op_ImplicitOffset;

    UnityEngine::Color32.ToStringOffset = getRealOffset(0x4243F0);
    UnityEngine::Color32.ToString = (monoString *(*)(void*))UnityEngine::Color32.ToStringOffset;

    UnityEngine::Gradient.InitOffset = getRealOffset(0x1346D54);
    UnityEngine::Gradient.CleanupOffset = getRealOffset(0x1346D98);
    UnityEngine::Gradient.Cleanup = (void(*)(void*))UnityEngine::Gradient.CleanupOffset;

    UnityEngine::Gradient.FinalizeOffset = getRealOffset(0x1346E38);
    UnityEngine::Gradient.Finalize = (void(*)(void*))UnityEngine::Gradient.FinalizeOffset;

    UnityEngine::Gradient.EvaluateOffset = getRealOffset(0x1346ED4);
    UnityEngine::Gradient.Evaluate = (Color (*)(void*, float))UnityEngine::Gradient.EvaluateOffset;

    UnityEngine::Gradient.get_colorKeysOffset = getRealOffset(0x1346FA8);
    UnityEngine::Gradient.get_alphaKeysOffset = getRealOffset(0x1347014);
    UnityEngine::Gradient.Equals1Offset = getRealOffset(0x13471C8);
    UnityEngine::Gradient.Equals1 = (bool(*)(void*, void *))UnityEngine::Gradient.Equals1Offset;

    UnityEngine::Gradient.GetHashCodeOffset = getRealOffset(0x13472C0);
    UnityEngine::Gradient.GetHashCode = (int(*)(void*))UnityEngine::Gradient.GetHashCodeOffset;

    UnityEngine::Matrix4x4.get_inverseOffset = getRealOffset(0x419730);
    UnityEngine::Matrix4x4.get_inverse = (int (*)(void*))UnityEngine::Matrix4x4.get_inverseOffset;

    UnityEngine::Matrix4x4.get_transposeOffset = getRealOffset(0x419744);
    UnityEngine::Matrix4x4.get_transpose = (int (*)(void*))UnityEngine::Matrix4x4.get_transposeOffset;

    UnityEngine::Matrix4x4.get_ItemOffset = getRealOffset(0x419758);
    UnityEngine::Matrix4x4.get_Item = (float(*)(void*, int, int))UnityEngine::Matrix4x4.get_ItemOffset;

    UnityEngine::Matrix4x4.set_ItemOffset = getRealOffset(0x419764);
    UnityEngine::Matrix4x4.set_Item = (void(*)(void*, int, int, float))UnityEngine::Matrix4x4.set_ItemOffset;

    UnityEngine::Matrix4x4.get_Item1Offset = getRealOffset(0x419774);
    UnityEngine::Matrix4x4.get_Item1 = (float(*)(void*, int))UnityEngine::Matrix4x4.get_Item1Offset;

    UnityEngine::Matrix4x4.set_Item1Offset = getRealOffset(0x41977C);
    UnityEngine::Matrix4x4.set_Item1 = (void(*)(void*, int, float))UnityEngine::Matrix4x4.set_Item1Offset;

    UnityEngine::Matrix4x4.GetHashCodeOffset = getRealOffset(0x419784);
    UnityEngine::Matrix4x4.GetHashCode = (int(*)(void*))UnityEngine::Matrix4x4.GetHashCodeOffset;

    UnityEngine::Matrix4x4.GetColumnOffset = getRealOffset(0x419808);
    UnityEngine::Matrix4x4.GetColumn = (int (*)(void*, int))UnityEngine::Matrix4x4.GetColumnOffset;

    UnityEngine::Matrix4x4.GetRowOffset = getRealOffset(0x41981C);
    UnityEngine::Matrix4x4.GetRow = (int (*)(void*, int))UnityEngine::Matrix4x4.GetRowOffset;

    UnityEngine::Matrix4x4.MultiplyPointOffset = getRealOffset(0x419858);
    UnityEngine::Matrix4x4.MultiplyPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyPointOffset;

    UnityEngine::Matrix4x4.MultiplyPoint3x4Offset = getRealOffset(0x41987C);
    UnityEngine::Matrix4x4.MultiplyPoint3x4 = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyPoint3x4Offset;

    UnityEngine::Matrix4x4.MultiplyVectorOffset = getRealOffset(0x4198A0);
    UnityEngine::Matrix4x4.MultiplyVector = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyVectorOffset;

    UnityEngine::Matrix4x4.get_identityOffset = getRealOffset(0x134CAB8);
    UnityEngine::Matrix4x4.get_identity = (int (*)())UnityEngine::Matrix4x4.get_identityOffset;

    UnityEngine::Matrix4x4.ToStringOffset = getRealOffset(0x4198C4);
    UnityEngine::Matrix4x4.ToString = (monoString *(*)(void*))UnityEngine::Matrix4x4.ToStringOffset;

    UnityEngine::UVector3.ctor1Offset = getRealOffset(0x42D354);
    UnityEngine::UVector3.ctor1 = (void(*)(void*, float, float))UnityEngine::UVector3.ctor1Offset;

    UnityEngine::UVector3.SlerpOffset = getRealOffset(0x1AE3450);
    UnityEngine::UVector3.Slerp = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.SlerpOffset;

    UnityEngine::UVector3.LerpOffset = getRealOffset(0x1AE35CC);
    UnityEngine::UVector3.Lerp = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.LerpOffset;

    UnityEngine::UVector3.MoveTowardsOffset = getRealOffset(0x1AE36C8);
    UnityEngine::UVector3.MoveTowards = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.MoveTowardsOffset;

    UnityEngine::UVector3.get_ItemOffset = getRealOffset(0x42D364);
    UnityEngine::UVector3.get_Item = (float(*)(void*, int))UnityEngine::UVector3.get_ItemOffset;

    UnityEngine::UVector3.set_ItemOffset = getRealOffset(0x42D36C);
    UnityEngine::UVector3.set_Item = (void(*)(void*, int, float))UnityEngine::UVector3.set_ItemOffset;

    UnityEngine::UVector3.SetOffset = getRealOffset(0x42D374);
    UnityEngine::UVector3.Set = (void(*)(void*, float, float, float))UnityEngine::UVector3.SetOffset;

    UnityEngine::UVector3.ScaleOffset = getRealOffset(0x1AE39B8);
    UnityEngine::UVector3.Scale = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.ScaleOffset;

    UnityEngine::UVector3.Scale1Offset = getRealOffset(0x42D380);
    UnityEngine::UVector3.Scale1 = (void(*)(void*, Vector3))UnityEngine::UVector3.Scale1Offset;

    UnityEngine::UVector3.CrossOffset = getRealOffset(0x1AE3A20);
    UnityEngine::UVector3.Cross = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.CrossOffset;

    UnityEngine::UVector3.GetHashCodeOffset = getRealOffset(0x42D3B4);
    UnityEngine::UVector3.GetHashCode = (int(*)(void*))UnityEngine::UVector3.GetHashCodeOffset;

    UnityEngine::UVector3.Equals1Offset = getRealOffset(0x42D3C4);
    UnityEngine::UVector3.Equals1 = (bool(*)(void*, Vector3))UnityEngine::UVector3.Equals1Offset;

    UnityEngine::UVector3.NormalizeOffset = getRealOffset(0x1AE3BB8);
    UnityEngine::UVector3.Normalize = (Vector3 (*)(Vector3))UnityEngine::UVector3.NormalizeOffset;

    UnityEngine::UVector3.Normalize1Offset = getRealOffset(0x42D410);
    UnityEngine::UVector3.Normalize1 = (void(*)(void*))UnityEngine::UVector3.Normalize1Offset;

    UnityEngine::UVector3.get_normalizedOffset = getRealOffset(0x42D418);
    UnityEngine::UVector3.get_normalized = (Vector3 (*)(void*))UnityEngine::UVector3.get_normalizedOffset;

    UnityEngine::UVector3.DotOffset = getRealOffset(0x1AE409C);
    UnityEngine::UVector3.Dot = (float(*)(Vector3, Vector3))UnityEngine::UVector3.DotOffset;

    UnityEngine::UVector3.ProjectOffset = getRealOffset(0x1AE40D0);
    UnityEngine::UVector3.Project = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.ProjectOffset;

    UnityEngine::UVector3.AngleOffset = getRealOffset(0x1AE4290);
    UnityEngine::UVector3.Angle = (float(*)(Vector3, Vector3))UnityEngine::UVector3.AngleOffset;

    UnityEngine::UVector3.DistanceOffset = getRealOffset(0x1AE44AC);
    UnityEngine::UVector3.Distance = (float(*)(Vector3, Vector3))UnityEngine::UVector3.DistanceOffset;

    UnityEngine::UVector3.MagnitudeOffset = getRealOffset(0x1AE3CFC);
    UnityEngine::UVector3.Magnitude = (float(*)(Vector3))UnityEngine::UVector3.MagnitudeOffset;

    UnityEngine::UVector3.get_magnitudeOffset = getRealOffset(0x42D42C);
    UnityEngine::UVector3.get_magnitude = (float(*)(void*))UnityEngine::UVector3.get_magnitudeOffset;

    UnityEngine::UVector3.SqrMagnitudeOffset = getRealOffset(0x1AE465C);
    UnityEngine::UVector3.SqrMagnitude = (float(*)(Vector3))UnityEngine::UVector3.SqrMagnitudeOffset;

    UnityEngine::UVector3.get_sqrMagnitudeOffset = getRealOffset(0x42D434);
    UnityEngine::UVector3.get_sqrMagnitude = (float(*)(void*))UnityEngine::UVector3.get_sqrMagnitudeOffset;

    UnityEngine::UVector3.MinOffset = getRealOffset(0x1AE4684);
    UnityEngine::UVector3.Min = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.MinOffset;

    UnityEngine::UVector3.MaxOffset = getRealOffset(0x1AE4760);
    UnityEngine::UVector3.Max = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.MaxOffset;

    UnityEngine::UVector3.get_zeroOffset = getRealOffset(0x1AE3DF4);
    UnityEngine::UVector3.get_zero = (Vector3 (*)())UnityEngine::UVector3.get_zeroOffset;

    UnityEngine::UVector3.get_oneOffset = getRealOffset(0x1AE483C);
    UnityEngine::UVector3.get_one = (Vector3 (*)())UnityEngine::UVector3.get_oneOffset;

    UnityEngine::UVector3.get_forwardOffset = getRealOffset(0x1AE48D8);
    UnityEngine::UVector3.get_forward = (Vector3 (*)())UnityEngine::UVector3.get_forwardOffset;

    UnityEngine::UVector3.get_backOffset = getRealOffset(0x1AE4974);
    UnityEngine::UVector3.get_back = (Vector3 (*)())UnityEngine::UVector3.get_backOffset;

    UnityEngine::UVector3.get_upOffset = getRealOffset(0x1AE4A10);
    UnityEngine::UVector3.get_up = (Vector3 (*)())UnityEngine::UVector3.get_upOffset;

    UnityEngine::UVector3.get_downOffset = getRealOffset(0x1AE4AAC);
    UnityEngine::UVector3.get_down = (Vector3 (*)())UnityEngine::UVector3.get_downOffset;

    UnityEngine::UVector3.get_leftOffset = getRealOffset(0x1AE4B48);
    UnityEngine::UVector3.get_left = (Vector3 (*)())UnityEngine::UVector3.get_leftOffset;

    UnityEngine::UVector3.get_rightOffset = getRealOffset(0x1AE4BE4);
    UnityEngine::UVector3.get_right = (Vector3 (*)())UnityEngine::UVector3.get_rightOffset;

    UnityEngine::UVector3.op_AdditionOffset = getRealOffset(0x1AE4C80);
    UnityEngine::UVector3.op_Addition = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.op_AdditionOffset;

    UnityEngine::UVector3.op_SubtractionOffset = getRealOffset(0x1AE4CB4);
    UnityEngine::UVector3.op_Subtraction = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.op_SubtractionOffset;

    UnityEngine::UVector3.op_UnaryNegationOffset = getRealOffset(0x1AE4CE8);
    UnityEngine::UVector3.op_UnaryNegation = (Vector3 (*)(Vector3))UnityEngine::UVector3.op_UnaryNegationOffset;

    UnityEngine::UVector3.op_MultiplyOffset = getRealOffset(0x1AE4CFC);
    UnityEngine::UVector3.op_Multiply = (Vector3 (*)(Vector3, float))UnityEngine::UVector3.op_MultiplyOffset;

    UnityEngine::UVector3.op_Multiply1Offset = getRealOffset(0x1AE4D28);
    UnityEngine::UVector3.op_Multiply1 = (Vector3 (*)(float, Vector3))UnityEngine::UVector3.op_Multiply1Offset;

    UnityEngine::UVector3.op_DivisionOffset = getRealOffset(0x1AE3DC8);
    UnityEngine::UVector3.op_Division = (Vector3 (*)(Vector3, float))UnityEngine::UVector3.op_DivisionOffset;

    UnityEngine::UVector3.op_EqualityOffset = getRealOffset(0x1AE4D54);
    UnityEngine::UVector3.op_Equality = (bool(*)(Vector3, Vector3))UnityEngine::UVector3.op_EqualityOffset;

    UnityEngine::UVector3.op_InequalityOffset = getRealOffset(0x1AE4DA8);
    UnityEngine::UVector3.op_Inequality = (bool(*)(Vector3, Vector3))UnityEngine::UVector3.op_InequalityOffset;

    UnityEngine::UVector3.ToStringOffset = getRealOffset(0x42D45C);
    UnityEngine::UVector3.ToString = (monoString *(*)(void*))UnityEngine::UVector3.ToStringOffset;

    UnityEngine::UVector3.ToString1Offset = getRealOffset(0x42D464);
    UnityEngine::UVector3.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::UVector3.ToString1Offset;

    UnityEngine::UVector3.Slerp_InjectedOffset = getRealOffset(0x1AE3568);
    UnityEngine::UVector3.Slerp_Injected = (void(*)(Vector3 *, Vector3 *, float, Vector3 *))UnityEngine::UVector3.Slerp_InjectedOffset;

    UnityEngine::Quaternion.FromToRotationOffset = getRealOffset(0x1361FD0);
    UnityEngine::Quaternion.FromToRotation = (int (*)(Vector3, Vector3))UnityEngine::Quaternion.FromToRotationOffset;

    UnityEngine::Quaternion.Internal_FromEulerRadOffset = getRealOffset(0x13626D8);
    UnityEngine::Quaternion.Internal_FromEulerRad = (int (*)(Vector3))UnityEngine::Quaternion.Internal_FromEulerRadOffset;

    UnityEngine::Quaternion.AngleAxisOffset = getRealOffset(0x1362A80);
    UnityEngine::Quaternion.AngleAxis = (int (*)(float, Vector3))UnityEngine::Quaternion.AngleAxisOffset;

    UnityEngine::Quaternion.LookRotationOffset = getRealOffset(0x1362BC8);
    UnityEngine::Quaternion.LookRotation = (int (*)(Vector3, Vector3))UnityEngine::Quaternion.LookRotationOffset;

    UnityEngine::Quaternion.LookRotation1Offset = getRealOffset(0x1362D20);
    UnityEngine::Quaternion.LookRotation1 = (int (*)(Vector3))UnityEngine::Quaternion.LookRotation1Offset;

    UnityEngine::Quaternion.get_identityOffset = getRealOffset(0x1361128);
    UnityEngine::Quaternion.get_identity = (int (*)())UnityEngine::Quaternion.get_identityOffset;

    UnityEngine::Quaternion.IsEqualUsingDotOffset = getRealOffset(0x1362F88);
    UnityEngine::Quaternion.IsEqualUsingDot = (bool(*)(float))UnityEngine::Quaternion.IsEqualUsingDotOffset;

    UnityEngine::Quaternion.Internal_MakePositiveOffset = getRealOffset(0x1363214);
    UnityEngine::Quaternion.Internal_MakePositive = (Vector3 (*)(Vector3))UnityEngine::Quaternion.Internal_MakePositiveOffset;

    UnityEngine::Quaternion.get_eulerAnglesOffset = getRealOffset(0x419C9C);
    UnityEngine::Quaternion.get_eulerAngles = (Vector3 (*)(void*))UnityEngine::Quaternion.get_eulerAnglesOffset;

    UnityEngine::Quaternion.EulerOffset = getRealOffset(0x13633F4);
    UnityEngine::Quaternion.Euler = (int (*)(float, float, float))UnityEngine::Quaternion.EulerOffset;

    UnityEngine::Quaternion.Euler1Offset = getRealOffset(0x1363514);
    UnityEngine::Quaternion.Euler1 = (int (*)(Vector3))UnityEngine::Quaternion.Euler1Offset;

    UnityEngine::Quaternion.GetHashCodeOffset = getRealOffset(0x419CB8);
    UnityEngine::Quaternion.GetHashCode = (int(*)(void*))UnityEngine::Quaternion.GetHashCodeOffset;

    UnityEngine::Quaternion.ToStringOffset = getRealOffset(0x419CEC);
    UnityEngine::Quaternion.ToString = (monoString *(*)(void*))UnityEngine::Quaternion.ToStringOffset;

    UnityEngine::Quaternion.ToString1Offset = getRealOffset(0x419CF4);
    UnityEngine::Quaternion.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Quaternion.ToString1Offset;

    UnityEngine::Mathf.LinearToGammaSpaceOffset = getRealOffset(0x1353254);
    UnityEngine::Mathf.LinearToGammaSpace = (float(*)(float))UnityEngine::Mathf.LinearToGammaSpaceOffset;

    UnityEngine::Mathf.PerlinNoiseOffset = getRealOffset(0x13532D0);
    UnityEngine::Mathf.PerlinNoise = (float(*)(float, float))UnityEngine::Mathf.PerlinNoiseOffset;

    UnityEngine::Mathf.SinOffset = getRealOffset(0x1353358);
    UnityEngine::Mathf.Sin = (float(*)(float))UnityEngine::Mathf.SinOffset;

    UnityEngine::Mathf.CosOffset = getRealOffset(0x13533F4);
    UnityEngine::Mathf.Cos = (float(*)(float))UnityEngine::Mathf.CosOffset;

    UnityEngine::Mathf.TanOffset = getRealOffset(0x1353490);
    UnityEngine::Mathf.Tan = (float(*)(float))UnityEngine::Mathf.TanOffset;

    UnityEngine::Mathf.AsinOffset = getRealOffset(0x135352C);
    UnityEngine::Mathf.Asin = (float(*)(float))UnityEngine::Mathf.AsinOffset;

    UnityEngine::Mathf.AcosOffset = getRealOffset(0x13535C8);
    UnityEngine::Mathf.Acos = (float(*)(float))UnityEngine::Mathf.AcosOffset;

    UnityEngine::Mathf.AtanOffset = getRealOffset(0x1353664);
    UnityEngine::Mathf.Atan = (float(*)(float))UnityEngine::Mathf.AtanOffset;

    UnityEngine::Mathf.Atan2Offset = getRealOffset(0x1353700);
    UnityEngine::Mathf.Atan2 = (float(*)(float, float))UnityEngine::Mathf.Atan2Offset;

    UnityEngine::Mathf.SqrtOffset = getRealOffset(0x13537AC);
    UnityEngine::Mathf.Sqrt = (float(*)(float))UnityEngine::Mathf.SqrtOffset;

    UnityEngine::Mathf.AbsOffset = getRealOffset(0x1353850);
    UnityEngine::Mathf.Abs = (float(*)(float))UnityEngine::Mathf.AbsOffset;

    UnityEngine::Mathf.Abs1Offset = getRealOffset(0x13538CC);
    UnityEngine::Mathf.Abs1 = (int(*)(int))UnityEngine::Mathf.Abs1Offset;

    UnityEngine::Mathf.MinOffset = getRealOffset(0x1353950);
    UnityEngine::Mathf.Min = (float(*)(float, float))UnityEngine::Mathf.MinOffset;

    UnityEngine::Mathf.Min1Offset = getRealOffset(0x135396C);
    UnityEngine::Mathf.Min1 = (int(*)(int, int))UnityEngine::Mathf.Min1Offset;

    UnityEngine::Mathf.MaxOffset = getRealOffset(0x1353978);
    UnityEngine::Mathf.Max = (float(*)(float, float))UnityEngine::Mathf.MaxOffset;

    UnityEngine::Mathf.Max1Offset = getRealOffset(0x1353994);
    UnityEngine::Mathf.Max1 = (int(*)(int, int))UnityEngine::Mathf.Max1Offset;

    UnityEngine::Mathf.PowOffset = getRealOffset(0x13539A0);
    UnityEngine::Mathf.Pow = (float(*)(float, float))UnityEngine::Mathf.PowOffset;

    UnityEngine::Mathf.ExpOffset = getRealOffset(0x1353A4C);
    UnityEngine::Mathf.Exp = (float(*)(float))UnityEngine::Mathf.ExpOffset;

    UnityEngine::Mathf.LogOffset = getRealOffset(0x1353AE8);
    UnityEngine::Mathf.Log = (float(*)(float, float))UnityEngine::Mathf.LogOffset;

    UnityEngine::Mathf.Log1Offset = getRealOffset(0x1353BA4);
    UnityEngine::Mathf.Log1 = (float(*)(float))UnityEngine::Mathf.Log1Offset;

    UnityEngine::Mathf.CeilOffset = getRealOffset(0x1353C40);
    UnityEngine::Mathf.Ceil = (float(*)(float))UnityEngine::Mathf.CeilOffset;

    UnityEngine::Mathf.FloorOffset = getRealOffset(0x1353CC0);
    UnityEngine::Mathf.Floor = (float(*)(float))UnityEngine::Mathf.FloorOffset;

    UnityEngine::Mathf.RoundOffset = getRealOffset(0x1353D40);
    UnityEngine::Mathf.Round = (float(*)(float))UnityEngine::Mathf.RoundOffset;

    UnityEngine::Mathf.CeilToIntOffset = getRealOffset(0x1353E60);
    UnityEngine::Mathf.CeilToInt = (int(*)(float))UnityEngine::Mathf.CeilToIntOffset;

    UnityEngine::Mathf.FloorToIntOffset = getRealOffset(0x1353EEC);
    UnityEngine::Mathf.FloorToInt = (int(*)(float))UnityEngine::Mathf.FloorToIntOffset;

    UnityEngine::Mathf.RoundToIntOffset = getRealOffset(0x1353F78);
    UnityEngine::Mathf.RoundToInt = (int(*)(float))UnityEngine::Mathf.RoundToIntOffset;

    UnityEngine::Mathf.SignOffset = getRealOffset(0x1354098);
    UnityEngine::Mathf.Sign = (float(*)(float))UnityEngine::Mathf.SignOffset;

    UnityEngine::Mathf.ClampOffset = getRealOffset(0x13540B8);
    UnityEngine::Mathf.Clamp = (float(*)(float, float, float))UnityEngine::Mathf.ClampOffset;

    UnityEngine::Mathf.Clamp1Offset = getRealOffset(0x13540E8);
    UnityEngine::Mathf.Clamp1 = (int(*)(int, int, int))UnityEngine::Mathf.Clamp1Offset;

    UnityEngine::Mathf.Clamp01Offset = getRealOffset(0x1354100);
    UnityEngine::Mathf.Clamp01 = (float(*)(float))UnityEngine::Mathf.Clamp01Offset;

    UnityEngine::Mathf.LerpOffset = getRealOffset(0x1354124);
    UnityEngine::Mathf.Lerp = (float(*)(float, float, float))UnityEngine::Mathf.LerpOffset;

    UnityEngine::Mathf.LerpUnclampedOffset = getRealOffset(0x13541E4);
    UnityEngine::Mathf.LerpUnclamped = (float(*)(float, float, float))UnityEngine::Mathf.LerpUnclampedOffset;

    UnityEngine::Mathf.LerpAngleOffset = getRealOffset(0x1354204);
    UnityEngine::Mathf.LerpAngle = (float(*)(float, float, float))UnityEngine::Mathf.LerpAngleOffset;

    UnityEngine::Mathf.MoveTowardsOffset = getRealOffset(0x13543EC);
    UnityEngine::Mathf.MoveTowards = (float(*)(float, float, float))UnityEngine::Mathf.MoveTowardsOffset;

    UnityEngine::Mathf.SmoothStepOffset = getRealOffset(0x13544E0);
    UnityEngine::Mathf.SmoothStep = (float(*)(float, float, float))UnityEngine::Mathf.SmoothStepOffset;

    UnityEngine::Mathf.ApproximatelyOffset = getRealOffset(0x13545C4);
    UnityEngine::Mathf.Approximately = (bool(*)(float, float))UnityEngine::Mathf.ApproximatelyOffset;

    UnityEngine::Mathf.RepeatOffset = getRealOffset(0x1354324);
    UnityEngine::Mathf.Repeat = (float(*)(float, float))UnityEngine::Mathf.RepeatOffset;

    UnityEngine::Mathf.PingPongOffset = getRealOffset(0x1354B60);
    UnityEngine::Mathf.PingPong = (float(*)(float, float))UnityEngine::Mathf.PingPongOffset;

    UnityEngine::Mathf.InverseLerpOffset = getRealOffset(0x1354C0C);
    UnityEngine::Mathf.InverseLerp = (float(*)(float, float, float))UnityEngine::Mathf.InverseLerpOffset;

    UnityEngine::Mathf.DeltaAngleOffset = getRealOffset(0x1354A98);
    UnityEngine::Mathf.DeltaAngle = (float(*)(float, float))UnityEngine::Mathf.DeltaAngleOffset;

    UnityEngine::UVector2.get_ItemOffset = getRealOffset(0x42D204);
    UnityEngine::UVector2.get_Item = (float(*)(void*, int))UnityEngine::UVector2.get_ItemOffset;

    UnityEngine::UVector2.set_ItemOffset = getRealOffset(0x42D20C);
    UnityEngine::UVector2.set_Item = (void(*)(void*, int, float))UnityEngine::UVector2.set_ItemOffset;

    UnityEngine::UVector2.SetOffset = getRealOffset(0x42D214);
    UnityEngine::UVector2.Set = (void(*)(void*, float, float))UnityEngine::UVector2.SetOffset;

    UnityEngine::UVector2.LerpOffset = getRealOffset(0x1AE1EC4);
    UnityEngine::UVector2.Lerp = (Vector2 (*)(Vector2, Vector2, float))UnityEngine::UVector2.LerpOffset;

    UnityEngine::UVector2.ScaleOffset = getRealOffset(0x1AE1F98);
    UnityEngine::UVector2.Scale = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.ScaleOffset;

    UnityEngine::UVector2.NormalizeOffset = getRealOffset(0x42D220);
    UnityEngine::UVector2.Normalize = (void(*)(void*))UnityEngine::UVector2.NormalizeOffset;

    UnityEngine::UVector2.get_normalizedOffset = getRealOffset(0x42D228);
    UnityEngine::UVector2.get_normalized = (Vector2 (*)(void*))UnityEngine::UVector2.get_normalizedOffset;

    UnityEngine::UVector2.ToStringOffset = getRealOffset(0x42D25C);
    UnityEngine::UVector2.ToString = (monoString *(*)(void*))UnityEngine::UVector2.ToStringOffset;

    UnityEngine::UVector2.ToString1Offset = getRealOffset(0x42D264);
    UnityEngine::UVector2.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::UVector2.ToString1Offset;

    UnityEngine::UVector2.GetHashCodeOffset = getRealOffset(0x42D26C);
    UnityEngine::UVector2.GetHashCode = (int(*)(void*))UnityEngine::UVector2.GetHashCodeOffset;

    UnityEngine::UVector2.Equals1Offset = getRealOffset(0x42D2A4);
    UnityEngine::UVector2.Equals1 = (bool(*)(void*, Vector2))UnityEngine::UVector2.Equals1Offset;

    UnityEngine::UVector2.DotOffset = getRealOffset(0x1AE26E8);
    UnityEngine::UVector2.Dot = (float(*)(Vector2, Vector2))UnityEngine::UVector2.DotOffset;

    UnityEngine::UVector2.get_magnitudeOffset = getRealOffset(0x42D2D8);
    UnityEngine::UVector2.get_magnitude = (float(*)(void*))UnityEngine::UVector2.get_magnitudeOffset;

    UnityEngine::UVector2.get_sqrMagnitudeOffset = getRealOffset(0x42D2E0);
    UnityEngine::UVector2.get_sqrMagnitude = (float(*)(void*))UnityEngine::UVector2.get_sqrMagnitudeOffset;

    UnityEngine::UVector2.AngleOffset = getRealOffset(0x1AE2728);
    UnityEngine::UVector2.Angle = (float(*)(Vector2, Vector2))UnityEngine::UVector2.AngleOffset;

    UnityEngine::UVector2.DistanceOffset = getRealOffset(0x1AE28F4);
    UnityEngine::UVector2.Distance = (float(*)(Vector2, Vector2))UnityEngine::UVector2.DistanceOffset;

    UnityEngine::UVector2.ClampMagnitudeOffset = getRealOffset(0x1AE29C8);
    UnityEngine::UVector2.ClampMagnitude = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.ClampMagnitudeOffset;

    UnityEngine::UVector2.op_AdditionOffset = getRealOffset(0x1AE2AB4);
    UnityEngine::UVector2.op_Addition = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_AdditionOffset;

    UnityEngine::UVector2.op_SubtractionOffset = getRealOffset(0x1AE2AD8);
    UnityEngine::UVector2.op_Subtraction = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_SubtractionOffset;

    UnityEngine::UVector2.op_MultiplyOffset = getRealOffset(0x1AE2AFC);
    UnityEngine::UVector2.op_Multiply = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_MultiplyOffset;

    UnityEngine::UVector2.op_DivisionOffset = getRealOffset(0x1AE2B20);
    UnityEngine::UVector2.op_Division = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_DivisionOffset;

    UnityEngine::UVector2.op_Multiply1Offset = getRealOffset(0x1AE2B44);
    UnityEngine::UVector2.op_Multiply1 = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.op_Multiply1Offset;

    UnityEngine::UVector2.op_Multiply2Offset = getRealOffset(0x1AE2B64);
    UnityEngine::UVector2.op_Multiply2 = (Vector2 (*)(float, Vector2))UnityEngine::UVector2.op_Multiply2Offset;

    UnityEngine::UVector2.op_Division1Offset = getRealOffset(0x1AE2170);
    UnityEngine::UVector2.op_Division1 = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.op_Division1Offset;

    UnityEngine::UVector2.op_EqualityOffset = getRealOffset(0x1AE2B84);
    UnityEngine::UVector2.op_Equality = (bool(*)(Vector2, Vector2))UnityEngine::UVector2.op_EqualityOffset;

    UnityEngine::UVector2.op_InequalityOffset = getRealOffset(0x1AE2BC4);
    UnityEngine::UVector2.op_Inequality = (bool(*)(Vector2, Vector2))UnityEngine::UVector2.op_InequalityOffset;

    UnityEngine::UVector2.op_ImplicitOffset = getRealOffset(0x1AE2C84);
    UnityEngine::UVector2.op_Implicit = (Vector2 (*)(Vector3))UnityEngine::UVector2.op_ImplicitOffset;

    UnityEngine::UVector2.op_Implicit1Offset = getRealOffset(0x1AE2C8C);
    UnityEngine::UVector2.op_Implicit1 = (Vector3 (*)(Vector2))UnityEngine::UVector2.op_Implicit1Offset;

    UnityEngine::UVector2.get_zeroOffset = getRealOffset(0x1AE2190);
    UnityEngine::UVector2.get_zero = (Vector2 (*)())UnityEngine::UVector2.get_zeroOffset;

    UnityEngine::UVector2.get_oneOffset = getRealOffset(0x1AE2CA0);
    UnityEngine::UVector2.get_one = (Vector2 (*)())UnityEngine::UVector2.get_oneOffset;

    UnityEngine::UVector2.get_upOffset = getRealOffset(0x1AE2D3C);
    UnityEngine::UVector2.get_up = (Vector2 (*)())UnityEngine::UVector2.get_upOffset;

    UnityEngine::UVector2.get_rightOffset = getRealOffset(0x1AE2DD8);
    UnityEngine::UVector2.get_right = (Vector2 (*)())UnityEngine::UVector2.get_rightOffset;

    UnityEngine::Vector2Int.get_xOffset = getRealOffset(0x42D308);
    UnityEngine::Vector2Int.get_x = (int(*)(void*))UnityEngine::Vector2Int.get_xOffset;

    UnityEngine::Vector2Int.set_xOffset = getRealOffset(0x42D310);
    UnityEngine::Vector2Int.set_x = (void(*)(void*, int))UnityEngine::Vector2Int.set_xOffset;

    UnityEngine::Vector2Int.get_yOffset = getRealOffset(0x42D318);
    UnityEngine::Vector2Int.get_y = (int(*)(void*))UnityEngine::Vector2Int.get_yOffset;

    UnityEngine::Vector2Int.set_yOffset = getRealOffset(0x42D320);
    UnityEngine::Vector2Int.set_y = (void(*)(void*, int))UnityEngine::Vector2Int.set_yOffset;

    UnityEngine::Vector2Int.GetHashCodeOffset = getRealOffset(0x42D338);
    UnityEngine::Vector2Int.GetHashCode = (int(*)(void*))UnityEngine::Vector2Int.GetHashCodeOffset;

    UnityEngine::Vector2Int.ToStringOffset = getRealOffset(0x42D340);
    UnityEngine::Vector2Int.ToString = (monoString *(*)(void*))UnityEngine::Vector2Int.ToStringOffset;

    UnityEngine::Vector2Int.get_zeroOffset = getRealOffset(0x1AE32F4);
    UnityEngine::Vector2Int.get_zero = (int (*)())UnityEngine::Vector2Int.get_zeroOffset;

    UnityEngine::Vector3Int.get_xOffset = getRealOffset(0x42D478);
    UnityEngine::Vector3Int.get_x = (int(*)(void*))UnityEngine::Vector3Int.get_xOffset;

    UnityEngine::Vector3Int.set_xOffset = getRealOffset(0x42D480);
    UnityEngine::Vector3Int.set_x = (void(*)(void*, int))UnityEngine::Vector3Int.set_xOffset;

    UnityEngine::Vector3Int.get_yOffset = getRealOffset(0x42D488);
    UnityEngine::Vector3Int.get_y = (int(*)(void*))UnityEngine::Vector3Int.get_yOffset;

    UnityEngine::Vector3Int.set_yOffset = getRealOffset(0x42D490);
    UnityEngine::Vector3Int.set_y = (void(*)(void*, int))UnityEngine::Vector3Int.set_yOffset;

    UnityEngine::Vector3Int.get_zOffset = getRealOffset(0x42D498);
    UnityEngine::Vector3Int.get_z = (int(*)(void*))UnityEngine::Vector3Int.get_zOffset;

    UnityEngine::Vector3Int.set_zOffset = getRealOffset(0x42D4A0);
    UnityEngine::Vector3Int.set_z = (void(*)(void*, int))UnityEngine::Vector3Int.set_zOffset;

    UnityEngine::Vector3Int.GetHashCodeOffset = getRealOffset(0x42D4CC);
    UnityEngine::Vector3Int.GetHashCode = (int(*)(void*))UnityEngine::Vector3Int.GetHashCodeOffset;

    UnityEngine::Vector3Int.ToStringOffset = getRealOffset(0x42D4D4);
    UnityEngine::Vector3Int.ToString = (monoString *(*)(void*))UnityEngine::Vector3Int.ToStringOffset;

    UnityEngine::Vector3Int.ToString1Offset = getRealOffset(0x42D4DC);
    UnityEngine::Vector3Int.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Vector3Int.ToString1Offset;

    UnityEngine::Vector3Int.get_zeroOffset = getRealOffset(0x1AE5B4C);
    UnityEngine::Vector3Int.get_zero = (int (*)())UnityEngine::Vector3Int.get_zeroOffset;

    UnityEngine::Vector4.ctor1Offset = getRealOffset(0x42D4F8);
    UnityEngine::Vector4.ctor1 = (void(*)(void*, float, float, float))UnityEngine::Vector4.ctor1Offset;

    UnityEngine::Vector4.get_ItemOffset = getRealOffset(0x42D508);
    UnityEngine::Vector4.get_Item = (float(*)(void*, int))UnityEngine::Vector4.get_ItemOffset;

    UnityEngine::Vector4.set_ItemOffset = getRealOffset(0x42D510);
    UnityEngine::Vector4.set_Item = (void(*)(void*, int, float))UnityEngine::Vector4.set_ItemOffset;

    UnityEngine::Vector4.GetHashCodeOffset = getRealOffset(0x42D518);
    UnityEngine::Vector4.GetHashCode = (int(*)(void*))UnityEngine::Vector4.GetHashCodeOffset;

    UnityEngine::Vector4.get_magnitudeOffset = getRealOffset(0x42D58C);
    UnityEngine::Vector4.get_magnitude = (float(*)(void*))UnityEngine::Vector4.get_magnitudeOffset;

    UnityEngine::Vector4.get_sqrMagnitudeOffset = getRealOffset(0x42D594);
    UnityEngine::Vector4.get_sqrMagnitude = (float(*)(void*))UnityEngine::Vector4.get_sqrMagnitudeOffset;

    UnityEngine::Vector4.get_zeroOffset = getRealOffset(0x1AE6340);
    UnityEngine::Vector4.get_zero = (int (*)())UnityEngine::Vector4.get_zeroOffset;

    UnityEngine::Vector4.get_oneOffset = getRealOffset(0x1AE63D4);
    UnityEngine::Vector4.get_one = (int (*)())UnityEngine::Vector4.get_oneOffset;

    UnityEngine::Vector4.op_ImplicitOffset = getRealOffset(0x1AE66B8);
    UnityEngine::Vector4.op_Implicit = (int (*)(Vector3))UnityEngine::Vector4.op_ImplicitOffset;

    UnityEngine::Vector4.op_Implicit2Offset = getRealOffset(0x1AE66CC);
    UnityEngine::Vector4.op_Implicit2 = (int (*)(Vector2))UnityEngine::Vector4.op_Implicit2Offset;

    UnityEngine::Vector4.ToStringOffset = getRealOffset(0x42D59C);
    UnityEngine::Vector4.ToString = (monoString *(*)(void*))UnityEngine::Vector4.ToStringOffset;

    UnityEngine::Ping.FinalizeOffset = getRealOffset(0x135DC18);
    UnityEngine::Ping.Finalize = (void(*)(void*))UnityEngine::Ping.FinalizeOffset;

    UnityEngine::Ping.DestroyPingOffset = getRealOffset(0x135DC7C);
    UnityEngine::Ping.DestroyPing = (void(*)(void*))UnityEngine::Ping.DestroyPingOffset;

    UnityEngine::Ping.Internal_CreateOffset = getRealOffset(0x135DBCC);
    UnityEngine::Ping.get_isDoneOffset = getRealOffset(0x135DD74);
    UnityEngine::Ping.get_isDone = (bool(*)(void*))UnityEngine::Ping.get_isDoneOffset;

    UnityEngine::Ping.Internal_IsDoneOffset = getRealOffset(0x135DE18);
    UnityEngine::Ping.Internal_IsDone = (bool(*)(void*))UnityEngine::Ping.Internal_IsDoneOffset;

    UnityEngine::Ping.get_timeOffset = getRealOffset(0x135DE64);
    UnityEngine::Ping.get_time = (int(*)(void*))UnityEngine::Ping.get_timeOffset;

    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePollOffset = getRealOffset(0x135FCC0);
    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePoll = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePollOffset;

    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitializeOffset = getRealOffset(0x135FF58);
    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitialize = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitializeOffset;

    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset = getRealOffset(0x135FFE0);
    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnected = (bool(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset;

    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset = getRealOffset(0x1360068);
    UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAll = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset;

    UnityEngine::PlayerConnectionInternal.IsConnectedOffset = getRealOffset(0x1360024);
    UnityEngine::PlayerConnectionInternal.IsConnected = (bool(*)())UnityEngine::PlayerConnectionInternal.IsConnectedOffset;

    UnityEngine::PlayerConnectionInternal.InitializeOffset = getRealOffset(0x135FF9C);
    UnityEngine::PlayerConnectionInternal.Initialize = (void(*)())UnityEngine::PlayerConnectionInternal.InitializeOffset;

    UnityEngine::PlayerConnectionInternal.RegisterInternalOffset = getRealOffset(0x135FE04);
    UnityEngine::PlayerConnectionInternal.RegisterInternal = (void(*)(monoString*))UnityEngine::PlayerConnectionInternal.RegisterInternalOffset;

    UnityEngine::PlayerConnectionInternal.UnregisterInternalOffset = getRealOffset(0x135FF0C);
    UnityEngine::PlayerConnectionInternal.UnregisterInternal = (void(*)(monoString*))UnityEngine::PlayerConnectionInternal.UnregisterInternalOffset;

    UnityEngine::PlayerConnectionInternal.PollInternalOffset = getRealOffset(0x135FD04);
    UnityEngine::PlayerConnectionInternal.PollInternal = (void(*)())UnityEngine::PlayerConnectionInternal.PollInternalOffset;

    UnityEngine::PlayerConnectionInternal.DisconnectAllOffset = getRealOffset(0x13600AC);
    UnityEngine::PlayerConnectionInternal.DisconnectAll = (void(*)())UnityEngine::PlayerConnectionInternal.DisconnectAllOffset;

    UnityEngine::SpaceAttribute.ctor1Offset = getRealOffset(0x14668A8);
    UnityEngine::SpaceAttribute.ctor1 = (void(*)(void*, float))UnityEngine::SpaceAttribute.ctor1Offset;

    UnityEngine::Random.RangeOffset = getRealOffset(0x1455D90);
    UnityEngine::Random.Range = (float(*)(float, float))UnityEngine::Random.RangeOffset;

    UnityEngine::Random.Range1Offset = getRealOffset(0x1455E14);
    UnityEngine::Random.Range1 = (int(*)(int, int))UnityEngine::Random.Range1Offset;

    UnityEngine::Random.RandomRangeIntOffset = getRealOffset(0x1455E68);
    UnityEngine::Random.RandomRangeInt = (int(*)(int, int))UnityEngine::Random.RandomRangeIntOffset;

    UnityEngine::Random.get_valueOffset = getRealOffset(0x1455EBC);
    UnityEngine::Random.get_value = (float(*)())UnityEngine::Random.get_valueOffset;

    UnityEngine::Random.get_insideUnitSphereOffset = getRealOffset(0x1455F00);
    UnityEngine::Random.get_insideUnitSphere = (Vector3 (*)())UnityEngine::Random.get_insideUnitSphereOffset;

    UnityEngine::Random.get_insideUnitCircleOffset = getRealOffset(0x145600C);
    UnityEngine::Random.get_insideUnitCircle = (Vector2 (*)())UnityEngine::Random.get_insideUnitCircleOffset;

    UnityEngine::Random.get_onUnitSphereOffset = getRealOffset(0x1456074);
    UnityEngine::Random.get_onUnitSphere = (Vector3 (*)())UnityEngine::Random.get_onUnitSphereOffset;

    UnityEngine::Random.get_rotationOffset = getRealOffset(0x1456134);
    UnityEngine::Random.get_rotation = (int (*)())UnityEngine::Random.get_rotationOffset;

    UnityEngine::Random.ColorHSVOffset = getRealOffset(0x14561E8);
    UnityEngine::Random.ColorHSV = (Color (*)(float, float, float, float, float, float, float, float))UnityEngine::Random.ColorHSVOffset;

    UnityEngine::Random.get_insideUnitSphere_InjectedOffset = getRealOffset(0x1455F74);
    UnityEngine::Random.get_insideUnitSphere_Injected = (void(*)(Vector3 *))UnityEngine::Random.get_insideUnitSphere_InjectedOffset;

    UnityEngine::Random.get_onUnitSphere_InjectedOffset = getRealOffset(0x14560E8);
    UnityEngine::Random.get_onUnitSphere_Injected = (void(*)(Vector3 *))UnityEngine::Random.get_onUnitSphere_InjectedOffset;

    UnityEngine::ResourceRequest.get_assetOffset = getRealOffset(0x14613A0);
    UnityEngine::ResourceRequest.get_asset = (void *(*)(void*))UnityEngine::ResourceRequest.get_assetOffset;

    UnityEngine::Resources.FindObjectsOfTypeAllOffset = getRealOffset(0x1461448);
    UnityEngine::Resources.LoadOffset = getRealOffset(0x14614C8);
    UnityEngine::Resources.Load = (void *(*)(monoString*))UnityEngine::Resources.LoadOffset;

    UnityEngine::Resources.Load2Offset = getRealOffset(0x14613F4);
    UnityEngine::Resources.Load2 = (void *(*)(monoString*, void *))UnityEngine::Resources.Load2Offset;

    UnityEngine::Resources.LoadAsyncOffset = getRealOffset(0x14615A0);
    UnityEngine::Resources.LoadAsync = (void *(*)(monoString*))UnityEngine::Resources.LoadAsyncOffset;

    UnityEngine::Resources.LoadAsync1Offset = getRealOffset(0x1461640);
    UnityEngine::Resources.LoadAsync1 = (void *(*)(monoString*, void *))UnityEngine::Resources.LoadAsync1Offset;

    UnityEngine::Resources.LoadAsyncInternalOffset = getRealOffset(0x14616C8);
    UnityEngine::Resources.LoadAsyncInternal = (void *(*)(monoString*, void *))UnityEngine::Resources.LoadAsyncInternalOffset;

    UnityEngine::Resources.GetBuiltinResourceOffset = getRealOffset(0x146171C);
    UnityEngine::Resources.GetBuiltinResource = (void *(*)(void *, monoString*))UnityEngine::Resources.GetBuiltinResourceOffset;

    UnityEngine::Resources.UnloadAssetOffset = getRealOffset(0x1461770);
    UnityEngine::Resources.UnloadAsset = (void(*)(void *))UnityEngine::Resources.UnloadAssetOffset;

    UnityEngine::Resources.UnloadUnusedAssetsOffset = getRealOffset(0x14617EC);
    UnityEngine::Resources.UnloadUnusedAssets = (void *(*)())UnityEngine::Resources.UnloadUnusedAssetsOffset;

    UnityEngine::AsyncOperation.get_isDoneOffset = getRealOffset(0x164F788);
    UnityEngine::AsyncOperation.get_isDone = (bool(*)(void*))UnityEngine::AsyncOperation.get_isDoneOffset;

    UnityEngine::AsyncOperation.get_progressOffset = getRealOffset(0x164F7F8);
    UnityEngine::AsyncOperation.get_progress = (float(*)(void*))UnityEngine::AsyncOperation.get_progressOffset;

    UnityEngine::AsyncOperation.FinalizeOffset = getRealOffset(0x164F868);
    UnityEngine::AsyncOperation.Finalize = (void(*)(void*))UnityEngine::AsyncOperation.FinalizeOffset;

    UnityEngine::AsyncOperation.InvokeCompletionEventOffset = getRealOffset(0x164F908);
    UnityEngine::AsyncOperation.InvokeCompletionEvent = (void(*)(void*))UnityEngine::AsyncOperation.InvokeCompletionEventOffset;

    UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusionOffset = getRealOffset(0x164F980);
    UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusion = (void *(*)(void *))UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusionOffset;

    UnityEngine::AttributeHelperEngine.GetRequiredComponentsOffset = getRealOffset(0x164FAB4);
    UnityEngine::AttributeHelperEngine.GetExecuteModeOffset = getRealOffset(0x164FF90);
    UnityEngine::AttributeHelperEngine.GetExecuteMode = (int(*)(void *))UnityEngine::AttributeHelperEngine.GetExecuteModeOffset;

    UnityEngine::AttributeHelperEngine.CheckIsEditorScriptOffset = getRealOffset(0x16500A0);
    UnityEngine::AttributeHelperEngine.CheckIsEditorScript = (int(*)(void *))UnityEngine::AttributeHelperEngine.CheckIsEditorScriptOffset;

    UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderForOffset = getRealOffset(0x16501B8);
    UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderFor = (int(*)(void *))UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderForOffset;

    UnityEngine::RequireComponent.ctor1Offset = getRealOffset(0x1461130);
    UnityEngine::RequireComponent.ctor1 = (void(*)(void*, void *, void *))UnityEngine::RequireComponent.ctor1Offset;

    UnityEngine::RequireComponent.ctor2Offset = getRealOffset(0x1461158);
    UnityEngine::RequireComponent.ctor2 = (void(*)(void*, void *, void *, void *))UnityEngine::RequireComponent.ctor2Offset;

    UnityEngine::AddComponentMenu.ctor1Offset = getRealOffset(0x16406D4);
    UnityEngine::AddComponentMenu.ctor1 = (void(*)(void*, monoString*, int))UnityEngine::AddComponentMenu.ctor1Offset;

    UnityEngine::CreateAssetMenuAttribute.set_menuNameOffset = getRealOffset(0x1656EC4);
    UnityEngine::CreateAssetMenuAttribute.set_menuName = (void(*)(void*, monoString*))UnityEngine::CreateAssetMenuAttribute.set_menuNameOffset;

    UnityEngine::CreateAssetMenuAttribute.set_fileNameOffset = getRealOffset(0x1656ECC);
    UnityEngine::CreateAssetMenuAttribute.set_fileName = (void(*)(void*, monoString*))UnityEngine::CreateAssetMenuAttribute.set_fileNameOffset;

    UnityEngine::CreateAssetMenuAttribute.set_orderOffset = getRealOffset(0x1656ED4);
    UnityEngine::CreateAssetMenuAttribute.set_order = (void(*)(void*, int))UnityEngine::CreateAssetMenuAttribute.set_orderOffset;

    UnityEngine::ContextMenu.ctor1Offset = getRealOffset(0x1656D3C);
    UnityEngine::ContextMenu.ctor1 = (void(*)(void*, monoString*, bool))UnityEngine::ContextMenu.ctor1Offset;

    UnityEngine::ContextMenu.ctor2Offset = getRealOffset(0x1656D70);
    UnityEngine::ContextMenu.ctor2 = (void(*)(void*, monoString*, bool, int))UnityEngine::ContextMenu.ctor2Offset;

    UnityEngine::Behaviour.get_enabledOffset = getRealOffset(0x1650678);
    UnityEngine::Behaviour.get_enabled = (bool(*)(void*))UnityEngine::Behaviour.get_enabledOffset;

    UnityEngine::Behaviour.set_enabledOffset = getRealOffset(0x16506E4);
    UnityEngine::Behaviour.set_enabled = (void(*)(void*, bool))UnityEngine::Behaviour.set_enabledOffset;

    UnityEngine::Behaviour.get_isActiveAndEnabledOffset = getRealOffset(0x1650764);
    UnityEngine::Behaviour.get_isActiveAndEnabled = (bool(*)(void*))UnityEngine::Behaviour.get_isActiveAndEnabledOffset;

    UnityEngine::Component.get_transformOffset = getRealOffset(0x16566BC);
    UnityEngine::Component.get_transform = (void *(*)(void*))UnityEngine::Component.get_transformOffset;

    UnityEngine::Component.get_gameObjectOffset = getRealOffset(0x1656728);
    UnityEngine::Component.get_gameObject = (void *(*)(void*))UnityEngine::Component.get_gameObjectOffset;

    UnityEngine::Component.GetComponentOffset = getRealOffset(0x1656774);
    UnityEngine::Component.GetComponent = (void *(*)(void*, void *))UnityEngine::Component.GetComponentOffset;

    UnityEngine::Component.GetComponent2Offset = getRealOffset(0x1656844);
    UnityEngine::Component.GetComponent2 = (void *(*)(void*, monoString*))UnityEngine::Component.GetComponent2Offset;

    UnityEngine::Component.GetComponentInChildrenOffset = getRealOffset(0x16568C4);
    UnityEngine::Component.GetComponentInChildren = (void *(*)(void*, void *, bool))UnityEngine::Component.GetComponentInChildrenOffset;

    UnityEngine::Component.GetComponentInParentOffset = getRealOffset(0x1656940);
    UnityEngine::Component.GetComponentInParent = (void *(*)(void*, void *))UnityEngine::Component.GetComponentInParentOffset;

    UnityEngine::Component.GetComponentsOffset = getRealOffset(0x16569B4);
    UnityEngine::Component.get_tagOffset = getRealOffset(0x1656AE0);
    UnityEngine::Component.get_tag = (monoString *(*)(void*))UnityEngine::Component.get_tagOffset;

    UnityEngine::Component.CompareTagOffset = getRealOffset(0x1656B4C);
    UnityEngine::Component.CompareTag = (bool(*)(void*, monoString*))UnityEngine::Component.CompareTagOffset;

    UnityEngine::Coroutine.FinalizeOffset = getRealOffset(0x1656DD0);
    UnityEngine::Coroutine.Finalize = (void(*)(void*))UnityEngine::Coroutine.FinalizeOffset;

    UnityEngine::CustomYieldInstruction.get_CurrentOffset = getRealOffset(0x1658340);
    UnityEngine::CustomYieldInstruction.MoveNextOffset = getRealOffset(0x1658348);
    UnityEngine::CustomYieldInstruction.MoveNext = (bool(*)(void*))UnityEngine::CustomYieldInstruction.MoveNextOffset;

    UnityEngine::CustomYieldInstruction.ResetOffset = getRealOffset(0x1658358);
    UnityEngine::CustomYieldInstruction.Reset = (void(*)(void*))UnityEngine::CustomYieldInstruction.ResetOffset;

    UnityEngine::GameObject.ctor1Offset = getRealOffset(0x1344BB0);
    UnityEngine::GameObject.ctor1 = (void(*)(void*))UnityEngine::GameObject.ctor1Offset;

    UnityEngine::GameObject.GetComponent1Offset = getRealOffset(0x1344E74);
    UnityEngine::GameObject.GetComponent1 = (void *(*)(void*, void *))UnityEngine::GameObject.GetComponent1Offset;

    UnityEngine::GameObject.GetComponentByNameOffset = getRealOffset(0x1344F24);
    UnityEngine::GameObject.GetComponentByName = (void *(*)(void*, monoString*))UnityEngine::GameObject.GetComponentByNameOffset;

    UnityEngine::GameObject.GetComponent11Offset = getRealOffset(0x1344F78);
    UnityEngine::GameObject.GetComponent11 = (void *(*)(void*, monoString*))UnityEngine::GameObject.GetComponent11Offset;

    UnityEngine::GameObject.GetComponentInChildrenOffset = getRealOffset(0x1344FCC);
    UnityEngine::GameObject.GetComponentInChildren = (void *(*)(void*, void *, bool))UnityEngine::GameObject.GetComponentInChildrenOffset;

    UnityEngine::GameObject.GetComponentInParentOffset = getRealOffset(0x1345028);
    UnityEngine::GameObject.GetComponentInParent = (void *(*)(void*, void *))UnityEngine::GameObject.GetComponentInParentOffset;

    UnityEngine::GameObject.GetComponentsOffset = getRealOffset(0x1345138);
    UnityEngine::GameObject.Internal_AddComponentWithTypeOffset = getRealOffset(0x13452F4);
    UnityEngine::GameObject.Internal_AddComponentWithType = (void *(*)(void*, void *))UnityEngine::GameObject.Internal_AddComponentWithTypeOffset;

    UnityEngine::GameObject.AddComponentOffset = getRealOffset(0x1344DD4);
    UnityEngine::GameObject.AddComponent = (void *(*)(void*, void *))UnityEngine::GameObject.AddComponentOffset;

    UnityEngine::GameObject.get_transformOffset = getRealOffset(0x1345348);
    UnityEngine::GameObject.get_transform = (void *(*)(void*))UnityEngine::GameObject.get_transformOffset;

    UnityEngine::GameObject.get_layerOffset = getRealOffset(0x1345394);
    UnityEngine::GameObject.get_layer = (int(*)(void*))UnityEngine::GameObject.get_layerOffset;

    UnityEngine::GameObject.set_layerOffset = getRealOffset(0x13453FC);
    UnityEngine::GameObject.set_layer = (void(*)(void*, int))UnityEngine::GameObject.set_layerOffset;

    UnityEngine::GameObject.SetActiveOffset = getRealOffset(0x1345478);
    UnityEngine::GameObject.SetActive = (void(*)(void*, bool))UnityEngine::GameObject.SetActiveOffset;

    UnityEngine::GameObject.get_activeSelfOffset = getRealOffset(0x13454F8);
    UnityEngine::GameObject.get_activeSelf = (bool(*)(void*))UnityEngine::GameObject.get_activeSelfOffset;

    UnityEngine::GameObject.get_activeInHierarchyOffset = getRealOffset(0x1345568);
    UnityEngine::GameObject.get_activeInHierarchy = (bool(*)(void*))UnityEngine::GameObject.get_activeInHierarchyOffset;

    UnityEngine::GameObject.get_isStaticOffset = getRealOffset(0x13455DC);
    UnityEngine::GameObject.get_isStatic = (bool(*)(void*))UnityEngine::GameObject.get_isStaticOffset;

    UnityEngine::GameObject.set_isStaticOffset = getRealOffset(0x1345648);
    UnityEngine::GameObject.set_isStatic = (void(*)(void*, bool))UnityEngine::GameObject.set_isStaticOffset;

    UnityEngine::GameObject.get_isStaticBatchableOffset = getRealOffset(0x13456CC);
    UnityEngine::GameObject.get_isStaticBatchable = (bool(*)(void*))UnityEngine::GameObject.get_isStaticBatchableOffset;

    UnityEngine::GameObject.get_tagOffset = getRealOffset(0x1345718);
    UnityEngine::GameObject.get_tag = (monoString *(*)(void*))UnityEngine::GameObject.get_tagOffset;

    UnityEngine::GameObject.set_tagOffset = getRealOffset(0x1345780);
    UnityEngine::GameObject.set_tag = (void(*)(void*, monoString*))UnityEngine::GameObject.set_tagOffset;

    UnityEngine::GameObject.CompareTagOffset = getRealOffset(0x13457FC);
    UnityEngine::GameObject.CompareTag = (bool(*)(void*, monoString*))UnityEngine::GameObject.CompareTagOffset;

    UnityEngine::GameObject.FindGameObjectWithTagOffset = getRealOffset(0x134587C);
    UnityEngine::GameObject.FindGameObjectWithTag = (void *(*)(monoString*))UnityEngine::GameObject.FindGameObjectWithTagOffset;

    UnityEngine::GameObject.FindGameObjectsWithTagOffset = getRealOffset(0x1345900);
    UnityEngine::GameObject.SendMessage2Offset = getRealOffset(0x1345984);
    UnityEngine::GameObject.SendMessage2 = (void(*)(void*, monoString*))UnityEngine::GameObject.SendMessage2Offset;

    UnityEngine::GameObject.Internal_CreateGameObjectOffset = getRealOffset(0x1344B5C);
    UnityEngine::GameObject.Internal_CreateGameObject = (void(*)(void *, monoString*))UnityEngine::GameObject.Internal_CreateGameObjectOffset;

    UnityEngine::GameObject.FindOffset = getRealOffset(0x13459E0);
    UnityEngine::GameObject.Find = (void *(*)(monoString*))UnityEngine::GameObject.FindOffset;

    UnityEngine::GameObject.get_sceneOffset = getRealOffset(0x1345A50);
    UnityEngine::GameObject.get_scene = (int (*)(void*))UnityEngine::GameObject.get_sceneOffset;

    UnityEngine::GameObject.get_gameObjectOffset = getRealOffset(0x1345B08);
    UnityEngine::GameObject.get_gameObject = (void *(*)(void*))UnityEngine::GameObject.get_gameObjectOffset;

    UnityEngine::LayerMask.op_Implicit1Offset = getRealOffset(0x134E1E0);
    UnityEngine::LayerMask.op_Implicit1 = (int (*)(int))UnityEngine::LayerMask.op_Implicit1Offset;

    UnityEngine::LayerMask.get_valueOffset = getRealOffset(0x419584);
    UnityEngine::LayerMask.get_value = (int(*)(void*))UnityEngine::LayerMask.get_valueOffset;

    UnityEngine::LayerMask.NameToLayerOffset = getRealOffset(0x134E1EC);
    UnityEngine::LayerMask.NameToLayer = (int(*)(monoString*))UnityEngine::LayerMask.NameToLayerOffset;

    UnityEngine::ManagedStreamHelpers.ValidateLoadFromStreamOffset = getRealOffset(0x13501C0);
    UnityEngine::ManagedStreamHelpers.ValidateLoadFromStream = (void(*)(void *))UnityEngine::ManagedStreamHelpers.ValidateLoadFromStreamOffset;

    UnityEngine::MonoBehaviour.IsInvokingOffset = getRealOffset(0x13594D0);
    UnityEngine::MonoBehaviour.IsInvoking = (bool(*)(void*))UnityEngine::MonoBehaviour.IsInvokingOffset;

    UnityEngine::MonoBehaviour.CancelInvokeOffset = getRealOffset(0x1359568);
    UnityEngine::MonoBehaviour.CancelInvoke = (void(*)(void*))UnityEngine::MonoBehaviour.CancelInvokeOffset;

    UnityEngine::MonoBehaviour.InvokeOffset = getRealOffset(0x1359600);
    UnityEngine::MonoBehaviour.Invoke = (void(*)(void*, monoString*, float))UnityEngine::MonoBehaviour.InvokeOffset;

    UnityEngine::MonoBehaviour.InvokeRepeatingOffset = getRealOffset(0x13596C4);
    UnityEngine::MonoBehaviour.InvokeRepeating = (void(*)(void*, monoString*, float, float))UnityEngine::MonoBehaviour.InvokeRepeatingOffset;

    UnityEngine::MonoBehaviour.CancelInvoke1Offset = getRealOffset(0x13597E8);
    UnityEngine::MonoBehaviour.CancelInvoke1 = (void(*)(void*, monoString*))UnityEngine::MonoBehaviour.CancelInvoke1Offset;

    UnityEngine::MonoBehaviour.IsInvoking1Offset = getRealOffset(0x1359890);
    UnityEngine::MonoBehaviour.IsInvoking1 = (bool(*)(void*, monoString*))UnityEngine::MonoBehaviour.IsInvoking1Offset;

    UnityEngine::MonoBehaviour.StartCoroutineOffset = getRealOffset(0x1359938);
    UnityEngine::MonoBehaviour.StartCoroutine = (void *(*)(void*, monoString*))UnityEngine::MonoBehaviour.StartCoroutineOffset;

    UnityEngine::MonoBehaviour.StartCoroutine2Offset = getRealOffset(0x1359B74);
    UnityEngine::MonoBehaviour.StartCoroutine2 = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutine2Offset;

    UnityEngine::MonoBehaviour.StartCoroutine_AutoOffset = getRealOffset(0x1359D40);
    UnityEngine::MonoBehaviour.StartCoroutine_Auto = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutine_AutoOffset;

    UnityEngine::MonoBehaviour.StopCoroutineOffset = getRealOffset(0x1359D44);
    UnityEngine::MonoBehaviour.StopCoroutine = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineOffset;

    UnityEngine::MonoBehaviour.StopCoroutine1Offset = getRealOffset(0x1359F10);
    UnityEngine::MonoBehaviour.StopCoroutine1 = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutine1Offset;

    UnityEngine::MonoBehaviour.StopCoroutine2Offset = getRealOffset(0x135A0DC);
    UnityEngine::MonoBehaviour.StopCoroutine2 = (void(*)(void*, monoString*))UnityEngine::MonoBehaviour.StopCoroutine2Offset;

    UnityEngine::MonoBehaviour.StopAllCoroutinesOffset = getRealOffset(0x135A160);
    UnityEngine::MonoBehaviour.StopAllCoroutines = (void(*)(void*))UnityEngine::MonoBehaviour.StopAllCoroutinesOffset;

    UnityEngine::MonoBehaviour.get_useGUILayoutOffset = getRealOffset(0x135A1D4);
    UnityEngine::MonoBehaviour.get_useGUILayout = (bool(*)(void*))UnityEngine::MonoBehaviour.get_useGUILayoutOffset;

    UnityEngine::MonoBehaviour.set_useGUILayoutOffset = getRealOffset(0x135A248);
    UnityEngine::MonoBehaviour.set_useGUILayout = (void(*)(void*, bool))UnityEngine::MonoBehaviour.set_useGUILayoutOffset;

    UnityEngine::MonoBehaviour.Internal_CancelInvokeAllOffset = getRealOffset(0x13595B4);
    UnityEngine::MonoBehaviour.Internal_CancelInvokeAll = (void(*)(void *))UnityEngine::MonoBehaviour.Internal_CancelInvokeAllOffset;

    UnityEngine::MonoBehaviour.Internal_IsInvokingAllOffset = getRealOffset(0x135951C);
    UnityEngine::MonoBehaviour.Internal_IsInvokingAll = (bool(*)(void *))UnityEngine::MonoBehaviour.Internal_IsInvokingAllOffset;

    UnityEngine::MonoBehaviour.InvokeDelayedOffset = getRealOffset(0x1359660);
    UnityEngine::MonoBehaviour.InvokeDelayed = (void(*)(void *, monoString*, float, float))UnityEngine::MonoBehaviour.InvokeDelayedOffset;

    UnityEngine::MonoBehaviour.CancelInvoke11Offset = getRealOffset(0x135983C);
    UnityEngine::MonoBehaviour.CancelInvoke11 = (void(*)(void *, monoString*))UnityEngine::MonoBehaviour.CancelInvoke11Offset;

    UnityEngine::MonoBehaviour.IsInvoking11Offset = getRealOffset(0x13598E4);
    UnityEngine::MonoBehaviour.IsInvoking11 = (bool(*)(void *, monoString*))UnityEngine::MonoBehaviour.IsInvoking11Offset;

    UnityEngine::MonoBehaviour.IsObjectMonoBehaviourOffset = getRealOffset(0x1359ACC);
    UnityEngine::MonoBehaviour.IsObjectMonoBehaviour = (bool(*)(void *))UnityEngine::MonoBehaviour.IsObjectMonoBehaviourOffset;

    UnityEngine::MonoBehaviour.StartCoroutineManaged2Offset = getRealOffset(0x1359CEC);
    UnityEngine::MonoBehaviour.StartCoroutineManaged2 = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutineManaged2Offset;

    UnityEngine::MonoBehaviour.StopCoroutineManagedOffset = getRealOffset(0x135A088);
    UnityEngine::MonoBehaviour.StopCoroutineManaged = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineManagedOffset;

    UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManagedOffset = getRealOffset(0x1359EBC);
    UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManaged = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManagedOffset;

    UnityEngine::MonoBehaviour.GetScriptClassNameOffset = getRealOffset(0x135A354);
    UnityEngine::MonoBehaviour.GetScriptClassName = (monoString *(*)(void*))UnityEngine::MonoBehaviour.GetScriptClassNameOffset;

    UnityEngine::NoAllocHelpers.SafeLengthOffset = getRealOffset(0x1358A98);
    UnityEngine::NoAllocHelpers.SafeLength = (int(*)(void *))UnityEngine::NoAllocHelpers.SafeLengthOffset;

    UnityEngine::RangeInt.get_endOffset = getRealOffset(0x41FD54);
    UnityEngine::RangeInt.get_end = (int(*)(void*))UnityEngine::RangeInt.get_endOffset;

    UnityEngine::ScriptableObject.CreateInstanceOffset = getRealOffset(0x14634BC);
    UnityEngine::ScriptableObject.CreateInstance = (void *(*)(void *))UnityEngine::ScriptableObject.CreateInstanceOffset;

    UnityEngine::ScriptableObject.CreateScriptableObjectOffset = getRealOffset(0x1463470);
    UnityEngine::ScriptableObject.CreateScriptableObject = (void(*)(void *))UnityEngine::ScriptableObject.CreateScriptableObjectOffset;

    UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromTypeOffset = getRealOffset(0x146350C);
    UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromType = (void *(*)(void *, bool))UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromTypeOffset;

    UnityEngine::StackTraceUtility.SetProjectFolderOffset = getRealOffset(0x14681C0);
    UnityEngine::StackTraceUtility.SetProjectFolder = (void(*)(monoString*))UnityEngine::StackTraceUtility.SetProjectFolderOffset;

    UnityEngine::StackTraceUtility.ExtractStackTraceOffset = getRealOffset(0x1468310);
    UnityEngine::StackTraceUtility.ExtractStackTrace = (monoString *(*)())UnityEngine::StackTraceUtility.ExtractStackTraceOffset;

    UnityEngine::StackTraceUtility.PostprocessStacktraceOffset = getRealOffset(0x1469454);
    UnityEngine::StackTraceUtility.PostprocessStacktrace = (monoString *(*)(monoString*, bool))UnityEngine::StackTraceUtility.PostprocessStacktraceOffset;

    UnityEngine::StackTraceUtility.ExtractFormattedStackTraceOffset = getRealOffset(0x14683DC);
    UnityEngine::StackTraceUtility.ExtractFormattedStackTrace = (monoString *(*)(void *))UnityEngine::StackTraceUtility.ExtractFormattedStackTraceOffset;

    UnityEngine::UnityException.ctor1Offset = getRealOffset(0x146BCF8);
    UnityEngine::UnityException.ctor1 = (void(*)(void*, monoString*))UnityEngine::UnityException.ctor1Offset;

    UnityEngine::TrackedReference.op_EqualityOffset = getRealOffset(0x146EFE8);
    UnityEngine::TrackedReference.op_Equality = (bool(*)(void *, void *))UnityEngine::TrackedReference.op_EqualityOffset;

    UnityEngine::TrackedReference.GetHashCodeOffset = getRealOffset(0x146F114);
    UnityEngine::TrackedReference.GetHashCode = (int(*)(void*))UnityEngine::TrackedReference.GetHashCodeOffset;

    UnityEngine::UnhandledExceptionHandler.RegisterUECatcherOffset = getRealOffset(0x147270C);
    UnityEngine::UnhandledExceptionHandler.RegisterUECatcher = (void(*)())UnityEngine::UnhandledExceptionHandler.RegisterUECatcherOffset;

    UnityEngine::Object.GetInstanceIDOffset = getRealOffset(0x134D584);
    UnityEngine::Object.GetInstanceID = (int(*)(void*))UnityEngine::Object.GetInstanceIDOffset;

    UnityEngine::Object.GetHashCodeOffset = getRealOffset(0x135C9CC);
    UnityEngine::Object.GetHashCode = (int(*)(void*))UnityEngine::Object.GetHashCodeOffset;

    UnityEngine::Object.op_ImplicitOffset = getRealOffset(0x1347E80);
    UnityEngine::Object.op_Implicit = (bool(*)(void *))UnityEngine::Object.op_ImplicitOffset;

    UnityEngine::Object.CompareBaseObjectsOffset = getRealOffset(0x135CB0C);
    UnityEngine::Object.CompareBaseObjects = (bool(*)(void *, void *))UnityEngine::Object.CompareBaseObjectsOffset;

    UnityEngine::Object.IsNativeObjectAliveOffset = getRealOffset(0x135CBF4);
    UnityEngine::Object.IsNativeObjectAlive = (bool(*)(void *))UnityEngine::Object.IsNativeObjectAliveOffset;

    UnityEngine::Object.GetCachedPtrOffset = getRealOffset(0x135CC60);
    UnityEngine::Object.get_nameOffset = getRealOffset(0x134D780);
    UnityEngine::Object.get_name = (monoString *(*)(void*))UnityEngine::Object.get_nameOffset;

    UnityEngine::Object.set_nameOffset = getRealOffset(0x135CCB4);
    UnityEngine::Object.set_name = (void(*)(void*, monoString*))UnityEngine::Object.set_nameOffset;

    UnityEngine::Object.Instantiate1Offset = getRealOffset(0x135D144);
    UnityEngine::Object.Instantiate1 = (void *(*)(void *))UnityEngine::Object.Instantiate1Offset;

    UnityEngine::Object.Instantiate2Offset = getRealOffset(0x135D2C8);
    UnityEngine::Object.Instantiate2 = (void *(*)(void *, void *, bool))UnityEngine::Object.Instantiate2Offset;

    UnityEngine::Object.DestroyOffset = getRealOffset(0x135D4D8);
    UnityEngine::Object.Destroy = (void(*)(void *, float))UnityEngine::Object.DestroyOffset;

    UnityEngine::Object.Destroy1Offset = getRealOffset(0x135D52C);
    UnityEngine::Object.Destroy1 = (void(*)(void *))UnityEngine::Object.Destroy1Offset;

    UnityEngine::Object.DestroyImmediateOffset = getRealOffset(0x135D5E4);
    UnityEngine::Object.DestroyImmediate = (void(*)(void *, bool))UnityEngine::Object.DestroyImmediateOffset;

    UnityEngine::Object.DestroyImmediate1Offset = getRealOffset(0x135D638);
    UnityEngine::Object.DestroyImmediate1 = (void(*)(void *))UnityEngine::Object.DestroyImmediate1Offset;

    UnityEngine::Object.FindObjectsOfTypeOffset = getRealOffset(0x134B168);
    UnityEngine::Object.DontDestroyOnLoadOffset = getRealOffset(0x135D6F0);
    UnityEngine::Object.DontDestroyOnLoad = (void(*)(void *))UnityEngine::Object.DontDestroyOnLoadOffset;

    UnityEngine::Object.get_hideFlagsOffset = getRealOffset(0x135D770);
    UnityEngine::Object.get_hideFlags = (int (*)(void*))UnityEngine::Object.get_hideFlagsOffset;

    UnityEngine::Object.FindSceneObjectsOfTypeOffset = getRealOffset(0x135D7D8);
    UnityEngine::Object.FindObjectOfType1Offset = getRealOffset(0x135D854);
    UnityEngine::Object.FindObjectOfType1 = (void *(*)(void *))UnityEngine::Object.FindObjectOfType1Offset;

    UnityEngine::Object.ToStringOffset = getRealOffset(0x135D92C);
    UnityEngine::Object.ToString = (monoString *(*)(void*))UnityEngine::Object.ToStringOffset;

    UnityEngine::Object.op_EqualityOffset = getRealOffset(0x13487DC);
    UnityEngine::Object.op_Equality = (bool(*)(void *, void *))UnityEngine::Object.op_EqualityOffset;

    UnityEngine::Object.op_InequalityOffset = getRealOffset(0x1344588);
    UnityEngine::Object.op_Inequality = (bool(*)(void *, void *))UnityEngine::Object.op_InequalityOffset;

    UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObjectOffset = getRealOffset(0x135C988);
    UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObject = (int(*)())UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObjectOffset;

    UnityEngine::Object.Internal_CloneSingleOffset = getRealOffset(0x135D27C);
    UnityEngine::Object.Internal_CloneSingle = (void *(*)(void *))UnityEngine::Object.Internal_CloneSingleOffset;

    UnityEngine::Object.Internal_CloneSingleWithParentOffset = getRealOffset(0x135D47C);
    UnityEngine::Object.Internal_CloneSingleWithParent = (void *(*)(void *, void *, bool))UnityEngine::Object.Internal_CloneSingleWithParentOffset;

    UnityEngine::Object.ToString1Offset = getRealOffset(0x135D9E0);
    UnityEngine::Object.ToString1 = (monoString *(*)(void *))UnityEngine::Object.ToString1Offset;

    UnityEngine::Object.GetNameOffset = getRealOffset(0x135CC68);
    UnityEngine::Object.GetName = (monoString *(*)(void *))UnityEngine::Object.GetNameOffset;

    UnityEngine::Object.SetNameOffset = getRealOffset(0x135CD70);
    UnityEngine::Object.SetName = (void(*)(void *, monoString*))UnityEngine::Object.SetNameOffset;

    UnityEngine::Object.FindObjectFromInstanceIDOffset = getRealOffset(0x135DA88);
    UnityEngine::Object.FindObjectFromInstanceID = (void *(*)(int))UnityEngine::Object.FindObjectFromInstanceIDOffset;

    UnityEngine::UnitySynchronizationContext.CreateCopyOffset = getRealOffset(0x1473388);
    UnityEngine::UnitySynchronizationContext.CreateCopy = (void *(*)(void*))UnityEngine::UnitySynchronizationContext.CreateCopyOffset;

    UnityEngine::UnitySynchronizationContext.ExecOffset = getRealOffset(0x1473404);
    UnityEngine::UnitySynchronizationContext.Exec = (void(*)(void*))UnityEngine::UnitySynchronizationContext.ExecOffset;

    UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContextOffset = getRealOffset(0x1473680);
    UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext = (void(*)())UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContextOffset;

    UnityEngine::UnitySynchronizationContext.ExecuteTasksOffset = getRealOffset(0x1473730);
    UnityEngine::UnitySynchronizationContext.ExecuteTasks = (void(*)())UnityEngine::UnitySynchronizationContext.ExecuteTasksOffset;

    UnityEngine::WaitForSecondsRealtime.get_waitTimeOffset = getRealOffset(0x1AE6A68);
    UnityEngine::WaitForSecondsRealtime.get_waitTime = (float(*)(void*))UnityEngine::WaitForSecondsRealtime.get_waitTimeOffset;

    UnityEngine::WaitForSecondsRealtime.set_waitTimeOffset = getRealOffset(0x1AE6A60);
    UnityEngine::WaitForSecondsRealtime.set_waitTime = (void(*)(void*, float))UnityEngine::WaitForSecondsRealtime.set_waitTimeOffset;

    UnityEngine::WaitForSecondsRealtime.get_keepWaitingOffset = getRealOffset(0x1AE6A70);
    UnityEngine::WaitForSecondsRealtime.get_keepWaiting = (bool(*)(void*))UnityEngine::WaitForSecondsRealtime.get_keepWaitingOffset;

    UnityEngine::WaitUntil.get_keepWaitingOffset = getRealOffset(0x1AE6B00);
    UnityEngine::WaitUntil.get_keepWaiting = (bool(*)(void*))UnityEngine::WaitUntil.get_keepWaitingOffset;

    UnityEngine::InternalStaticBatchingUtility.CombineRootOffset = getRealOffset(0x134AD90);
    UnityEngine::InternalStaticBatchingUtility.CombineRoot = (void(*)(void *))UnityEngine::InternalStaticBatchingUtility.CombineRootOffset;

    UnityEngine::InternalStaticBatchingUtility.CombineOffset = getRealOffset(0x134AD9C);
    UnityEngine::InternalStaticBatchingUtility.Combine = (void(*)(void *, bool, bool))UnityEngine::InternalStaticBatchingUtility.CombineOffset;

    UnityEngine::InternalStaticBatchingUtility.CombineGameObjectsm__0Offset = getRealOffset(0x134D8DC);
    UnityEngine::InternalStaticBatchingUtility.CombineGameObjectsm__0 = (bool(*)(void *))UnityEngine::InternalStaticBatchingUtility.CombineGameObjectsm__0Offset;

    UnityEngine::SystemInfo.get_operatingSystemOffset = getRealOffset(0x146A02C);
    UnityEngine::SystemInfo.get_operatingSystem = (monoString *(*)())UnityEngine::SystemInfo.get_operatingSystemOffset;

    UnityEngine::SystemInfo.get_operatingSystemFamilyOffset = getRealOffset(0x146A0B4);
    UnityEngine::SystemInfo.get_operatingSystemFamily = (int (*)())UnityEngine::SystemInfo.get_operatingSystemFamilyOffset;

    UnityEngine::SystemInfo.get_processorTypeOffset = getRealOffset(0x146A13C);
    UnityEngine::SystemInfo.get_processorType = (monoString *(*)())UnityEngine::SystemInfo.get_processorTypeOffset;

    UnityEngine::SystemInfo.get_processorCountOffset = getRealOffset(0x146A1C4);
    UnityEngine::SystemInfo.get_processorCount = (int(*)())UnityEngine::SystemInfo.get_processorCountOffset;

    UnityEngine::SystemInfo.get_systemMemorySizeOffset = getRealOffset(0x146A24C);
    UnityEngine::SystemInfo.get_systemMemorySize = (int(*)())UnityEngine::SystemInfo.get_systemMemorySizeOffset;

    UnityEngine::SystemInfo.get_deviceUniqueIdentifierOffset = getRealOffset(0x146A2D4);
    UnityEngine::SystemInfo.get_deviceUniqueIdentifier = (monoString *(*)())UnityEngine::SystemInfo.get_deviceUniqueIdentifierOffset;

    UnityEngine::SystemInfo.get_deviceNameOffset = getRealOffset(0x146A35C);
    UnityEngine::SystemInfo.get_deviceName = (monoString *(*)())UnityEngine::SystemInfo.get_deviceNameOffset;

    UnityEngine::SystemInfo.get_deviceModelOffset = getRealOffset(0x146A3E4);
    UnityEngine::SystemInfo.get_deviceModel = (monoString *(*)())UnityEngine::SystemInfo.get_deviceModelOffset;

    UnityEngine::SystemInfo.get_supportsAccelerometerOffset = getRealOffset(0x146A46C);
    UnityEngine::SystemInfo.get_supportsAccelerometer = (bool(*)())UnityEngine::SystemInfo.get_supportsAccelerometerOffset;

    UnityEngine::SystemInfo.get_supportsGyroscopeOffset = getRealOffset(0x146A4F4);
    UnityEngine::SystemInfo.get_supportsGyroscope = (bool(*)())UnityEngine::SystemInfo.get_supportsGyroscopeOffset;

    UnityEngine::SystemInfo.get_supportsLocationServiceOffset = getRealOffset(0x146A57C);
    UnityEngine::SystemInfo.get_supportsLocationService = (bool(*)())UnityEngine::SystemInfo.get_supportsLocationServiceOffset;

    UnityEngine::SystemInfo.get_deviceTypeOffset = getRealOffset(0x146A604);
    UnityEngine::SystemInfo.get_deviceType = (int (*)())UnityEngine::SystemInfo.get_deviceTypeOffset;

    UnityEngine::SystemInfo.get_graphicsMemorySizeOffset = getRealOffset(0x146A68C);
    UnityEngine::SystemInfo.get_graphicsMemorySize = (int(*)())UnityEngine::SystemInfo.get_graphicsMemorySizeOffset;

    UnityEngine::SystemInfo.get_graphicsDeviceNameOffset = getRealOffset(0x146A714);
    UnityEngine::SystemInfo.get_graphicsDeviceName = (monoString *(*)())UnityEngine::SystemInfo.get_graphicsDeviceNameOffset;

    UnityEngine::SystemInfo.get_graphicsDeviceTypeOffset = getRealOffset(0x146A79C);
    UnityEngine::SystemInfo.get_graphicsDeviceType = (int (*)())UnityEngine::SystemInfo.get_graphicsDeviceTypeOffset;

    UnityEngine::SystemInfo.get_graphicsDeviceVersionOffset = getRealOffset(0x146A824);
    UnityEngine::SystemInfo.get_graphicsDeviceVersion = (monoString *(*)())UnityEngine::SystemInfo.get_graphicsDeviceVersionOffset;

    UnityEngine::SystemInfo.get_graphicsShaderLevelOffset = getRealOffset(0x146A8AC);
    UnityEngine::SystemInfo.get_graphicsShaderLevel = (int(*)())UnityEngine::SystemInfo.get_graphicsShaderLevelOffset;

    UnityEngine::SystemInfo.get_graphicsMultiThreadedOffset = getRealOffset(0x146A934);
    UnityEngine::SystemInfo.get_graphicsMultiThreaded = (bool(*)())UnityEngine::SystemInfo.get_graphicsMultiThreadedOffset;

    UnityEngine::SystemInfo.get_supportsShadowsOffset = getRealOffset(0x146A9BC);
    UnityEngine::SystemInfo.get_supportsShadows = (bool(*)())UnityEngine::SystemInfo.get_supportsShadowsOffset;

    UnityEngine::SystemInfo.get_supportsRenderTexturesOffset = getRealOffset(0x146AA44);
    UnityEngine::SystemInfo.get_supportsRenderTextures = (bool(*)())UnityEngine::SystemInfo.get_supportsRenderTexturesOffset;

    UnityEngine::SystemInfo.get_supportsMotionVectorsOffset = getRealOffset(0x146AA4C);
    UnityEngine::SystemInfo.get_supportsMotionVectors = (bool(*)())UnityEngine::SystemInfo.get_supportsMotionVectorsOffset;

    UnityEngine::SystemInfo.get_supportsImageEffectsOffset = getRealOffset(0x146AAD4);
    UnityEngine::SystemInfo.get_supportsImageEffects = (bool(*)())UnityEngine::SystemInfo.get_supportsImageEffectsOffset;

    UnityEngine::SystemInfo.get_supports3DTexturesOffset = getRealOffset(0x146AADC);
    UnityEngine::SystemInfo.get_supports3DTextures = (bool(*)())UnityEngine::SystemInfo.get_supports3DTexturesOffset;

    UnityEngine::SystemInfo.get_supports2DArrayTexturesOffset = getRealOffset(0x146AB64);
    UnityEngine::SystemInfo.get_supports2DArrayTextures = (bool(*)())UnityEngine::SystemInfo.get_supports2DArrayTexturesOffset;

    UnityEngine::SystemInfo.get_supports3DRenderTexturesOffset = getRealOffset(0x146ABEC);
    UnityEngine::SystemInfo.get_supports3DRenderTextures = (bool(*)())UnityEngine::SystemInfo.get_supports3DRenderTexturesOffset;

    UnityEngine::SystemInfo.get_supportsCubemapArrayTexturesOffset = getRealOffset(0x146AC74);
    UnityEngine::SystemInfo.get_supportsCubemapArrayTextures = (bool(*)())UnityEngine::SystemInfo.get_supportsCubemapArrayTexturesOffset;

    UnityEngine::SystemInfo.get_supportsComputeShadersOffset = getRealOffset(0x146ACFC);
    UnityEngine::SystemInfo.get_supportsComputeShaders = (bool(*)())UnityEngine::SystemInfo.get_supportsComputeShadersOffset;

    UnityEngine::SystemInfo.get_supportsInstancingOffset = getRealOffset(0x146AD84);
    UnityEngine::SystemInfo.get_supportsInstancing = (bool(*)())UnityEngine::SystemInfo.get_supportsInstancingOffset;

    UnityEngine::SystemInfo.IsValidEnumValueOffset = getRealOffset(0x146AE0C);
    UnityEngine::SystemInfo.IsValidEnumValue = (bool(*)(void *))UnityEngine::SystemInfo.IsValidEnumValueOffset;

    UnityEngine::SystemInfo.get_maxTextureSizeOffset = getRealOffset(0x146B16C);
    UnityEngine::SystemInfo.get_maxTextureSize = (int(*)())UnityEngine::SystemInfo.get_maxTextureSizeOffset;

    UnityEngine::SystemInfo.get_maxCubemapSizeOffset = getRealOffset(0x146B1F4);
    UnityEngine::SystemInfo.get_maxCubemapSize = (int(*)())UnityEngine::SystemInfo.get_maxCubemapSizeOffset;

    UnityEngine::SystemInfo.GetOperatingSystemOffset = getRealOffset(0x146A070);
    UnityEngine::SystemInfo.GetOperatingSystem = (monoString *(*)())UnityEngine::SystemInfo.GetOperatingSystemOffset;

    UnityEngine::SystemInfo.GetOperatingSystemFamilyOffset = getRealOffset(0x146A0F8);
    UnityEngine::SystemInfo.GetOperatingSystemFamily = (int (*)())UnityEngine::SystemInfo.GetOperatingSystemFamilyOffset;

    UnityEngine::SystemInfo.GetProcessorTypeOffset = getRealOffset(0x146A180);
    UnityEngine::SystemInfo.GetProcessorType = (monoString *(*)())UnityEngine::SystemInfo.GetProcessorTypeOffset;

    UnityEngine::SystemInfo.GetProcessorCountOffset = getRealOffset(0x146A208);
    UnityEngine::SystemInfo.GetProcessorCount = (int(*)())UnityEngine::SystemInfo.GetProcessorCountOffset;

    UnityEngine::SystemInfo.GetPhysicalMemoryMBOffset = getRealOffset(0x146A290);
    UnityEngine::SystemInfo.GetPhysicalMemoryMB = (int(*)())UnityEngine::SystemInfo.GetPhysicalMemoryMBOffset;

    UnityEngine::SystemInfo.GetDeviceUniqueIdentifierOffset = getRealOffset(0x146A318);
    UnityEngine::SystemInfo.GetDeviceUniqueIdentifier = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceUniqueIdentifierOffset;

    UnityEngine::SystemInfo.GetDeviceNameOffset = getRealOffset(0x146A3A0);
    UnityEngine::SystemInfo.GetDeviceName = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceNameOffset;

    UnityEngine::SystemInfo.GetDeviceModelOffset = getRealOffset(0x146A428);
    UnityEngine::SystemInfo.GetDeviceModel = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceModelOffset;

    UnityEngine::SystemInfo.SupportsAccelerometerOffset = getRealOffset(0x146A4B0);
    UnityEngine::SystemInfo.SupportsAccelerometer = (bool(*)())UnityEngine::SystemInfo.SupportsAccelerometerOffset;

    UnityEngine::SystemInfo.IsGyroAvailableOffset = getRealOffset(0x146A538);
    UnityEngine::SystemInfo.IsGyroAvailable = (bool(*)())UnityEngine::SystemInfo.IsGyroAvailableOffset;

    UnityEngine::SystemInfo.SupportsLocationServiceOffset = getRealOffset(0x146A5C0);
    UnityEngine::SystemInfo.SupportsLocationService = (bool(*)())UnityEngine::SystemInfo.SupportsLocationServiceOffset;

    UnityEngine::SystemInfo.GetDeviceTypeOffset = getRealOffset(0x146A648);
    UnityEngine::SystemInfo.GetDeviceType = (int (*)())UnityEngine::SystemInfo.GetDeviceTypeOffset;

    UnityEngine::SystemInfo.GetGraphicsMemorySizeOffset = getRealOffset(0x146A6D0);
    UnityEngine::SystemInfo.GetGraphicsMemorySize = (int(*)())UnityEngine::SystemInfo.GetGraphicsMemorySizeOffset;

    UnityEngine::SystemInfo.GetGraphicsDeviceNameOffset = getRealOffset(0x146A758);
    UnityEngine::SystemInfo.GetGraphicsDeviceName = (monoString *(*)())UnityEngine::SystemInfo.GetGraphicsDeviceNameOffset;

    UnityEngine::SystemInfo.GetGraphicsDeviceTypeOffset = getRealOffset(0x146A7E0);
    UnityEngine::SystemInfo.GetGraphicsDeviceType = (int (*)())UnityEngine::SystemInfo.GetGraphicsDeviceTypeOffset;

    UnityEngine::SystemInfo.GetGraphicsDeviceVersionOffset = getRealOffset(0x146A868);
    UnityEngine::SystemInfo.GetGraphicsDeviceVersion = (monoString *(*)())UnityEngine::SystemInfo.GetGraphicsDeviceVersionOffset;

    UnityEngine::SystemInfo.GetGraphicsShaderLevelOffset = getRealOffset(0x146A8F0);
    UnityEngine::SystemInfo.GetGraphicsShaderLevel = (int(*)())UnityEngine::SystemInfo.GetGraphicsShaderLevelOffset;

    UnityEngine::SystemInfo.GetGraphicsMultiThreadedOffset = getRealOffset(0x146A978);
    UnityEngine::SystemInfo.GetGraphicsMultiThreaded = (bool(*)())UnityEngine::SystemInfo.GetGraphicsMultiThreadedOffset;

    UnityEngine::SystemInfo.SupportsShadowsOffset = getRealOffset(0x146AA00);
    UnityEngine::SystemInfo.SupportsShadows = (bool(*)())UnityEngine::SystemInfo.SupportsShadowsOffset;

    UnityEngine::SystemInfo.SupportsMotionVectorsOffset = getRealOffset(0x146AA90);
    UnityEngine::SystemInfo.SupportsMotionVectors = (bool(*)())UnityEngine::SystemInfo.SupportsMotionVectorsOffset;

    UnityEngine::SystemInfo.Supports3DTexturesOffset = getRealOffset(0x146AB20);
    UnityEngine::SystemInfo.Supports3DTextures = (bool(*)())UnityEngine::SystemInfo.Supports3DTexturesOffset;

    UnityEngine::SystemInfo.Supports2DArrayTexturesOffset = getRealOffset(0x146ABA8);
    UnityEngine::SystemInfo.Supports2DArrayTextures = (bool(*)())UnityEngine::SystemInfo.Supports2DArrayTexturesOffset;

    UnityEngine::SystemInfo.Supports3DRenderTexturesOffset = getRealOffset(0x146AC30);
    UnityEngine::SystemInfo.Supports3DRenderTextures = (bool(*)())UnityEngine::SystemInfo.Supports3DRenderTexturesOffset;

    UnityEngine::SystemInfo.SupportsCubemapArrayTexturesOffset = getRealOffset(0x146ACB8);
    UnityEngine::SystemInfo.SupportsCubemapArrayTextures = (bool(*)())UnityEngine::SystemInfo.SupportsCubemapArrayTexturesOffset;

    UnityEngine::SystemInfo.SupportsComputeShadersOffset = getRealOffset(0x146AD40);
    UnityEngine::SystemInfo.SupportsComputeShaders = (bool(*)())UnityEngine::SystemInfo.SupportsComputeShadersOffset;

    UnityEngine::SystemInfo.SupportsInstancingOffset = getRealOffset(0x146ADC8);
    UnityEngine::SystemInfo.SupportsInstancing = (bool(*)())UnityEngine::SystemInfo.SupportsInstancingOffset;

    UnityEngine::SystemInfo.GetMaxTextureSizeOffset = getRealOffset(0x146B1B0);
    UnityEngine::SystemInfo.GetMaxTextureSize = (int(*)())UnityEngine::SystemInfo.GetMaxTextureSizeOffset;

    UnityEngine::SystemInfo.GetMaxCubemapSizeOffset = getRealOffset(0x146B238);
    UnityEngine::SystemInfo.GetMaxCubemapSize = (int(*)())UnityEngine::SystemInfo.GetMaxCubemapSizeOffset;

    UnityEngine::SystemClock.get_nowOffset = getRealOffset(0x1469EF4);
    UnityEngine::SystemClock.get_now = (int (*)())UnityEngine::SystemClock.get_nowOffset;

    UnityEngine::TouchScreenKeyboard.DestroyOffset = getRealOffset(0x146E6CC);
    UnityEngine::TouchScreenKeyboard.Destroy = (void(*)(void*))UnityEngine::TouchScreenKeyboard.DestroyOffset;

    UnityEngine::TouchScreenKeyboard.FinalizeOffset = getRealOffset(0x146E7B0);
    UnityEngine::TouchScreenKeyboard.Finalize = (void(*)(void*))UnityEngine::TouchScreenKeyboard.FinalizeOffset;

    UnityEngine::TouchScreenKeyboard.get_isSupportedOffset = getRealOffset(0x146E814);
    UnityEngine::TouchScreenKeyboard.get_isSupported = (bool(*)())UnityEngine::TouchScreenKeyboard.get_isSupportedOffset;

    UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowedOffset = getRealOffset(0x146E868);
    UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowed = (bool(*)())UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowedOffset;

    UnityEngine::TouchScreenKeyboard.get_textOffset = getRealOffset(0x146E9BC);
    UnityEngine::TouchScreenKeyboard.get_text = (monoString *(*)(void*))UnityEngine::TouchScreenKeyboard.get_textOffset;

    UnityEngine::TouchScreenKeyboard.set_textOffset = getRealOffset(0x146EA08);
    UnityEngine::TouchScreenKeyboard.set_text = (void(*)(void*, monoString*))UnityEngine::TouchScreenKeyboard.set_textOffset;

    UnityEngine::TouchScreenKeyboard.set_hideInputOffset = getRealOffset(0x146EA90);
    UnityEngine::TouchScreenKeyboard.set_hideInput = (void(*)(bool))UnityEngine::TouchScreenKeyboard.set_hideInputOffset;

    UnityEngine::TouchScreenKeyboard.get_activeOffset = getRealOffset(0x146EB14);
    UnityEngine::TouchScreenKeyboard.get_active = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_activeOffset;

    UnityEngine::TouchScreenKeyboard.set_activeOffset = getRealOffset(0x146EB88);
    UnityEngine::TouchScreenKeyboard.set_active = (void(*)(void*, bool))UnityEngine::TouchScreenKeyboard.set_activeOffset;

    UnityEngine::TouchScreenKeyboard.get_statusOffset = getRealOffset(0x146EC10);
    UnityEngine::TouchScreenKeyboard.get_status = (int (*)(void*))UnityEngine::TouchScreenKeyboard.get_statusOffset;

    UnityEngine::TouchScreenKeyboard.set_characterLimitOffset = getRealOffset(0x146EC84);
    UnityEngine::TouchScreenKeyboard.set_characterLimit = (void(*)(void*, int))UnityEngine::TouchScreenKeyboard.set_characterLimitOffset;

    UnityEngine::TouchScreenKeyboard.get_canGetSelectionOffset = getRealOffset(0x146ECD8);
    UnityEngine::TouchScreenKeyboard.get_canGetSelection = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_canGetSelectionOffset;

    UnityEngine::TouchScreenKeyboard.get_canSetSelectionOffset = getRealOffset(0x146ECE0);
    UnityEngine::TouchScreenKeyboard.get_canSetSelection = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_canSetSelectionOffset;

    UnityEngine::TouchScreenKeyboard.get_selectionOffset = getRealOffset(0x146ECE8);
    UnityEngine::TouchScreenKeyboard.get_selection = (int (*)(void*))UnityEngine::TouchScreenKeyboard.get_selectionOffset;

    UnityEngine::TouchScreenKeyboard.SetSelectionOffset = getRealOffset(0x146EF20);
    UnityEngine::TouchScreenKeyboard.SetSelection = (void(*)(int, int))UnityEngine::TouchScreenKeyboard.SetSelectionOffset;

    UnityEngine::TouchScreenKeyboard.get_visibleOffset = getRealOffset(0x146EF74);
    UnityEngine::TouchScreenKeyboard.get_visible = (bool(*)())UnityEngine::TouchScreenKeyboard.get_visibleOffset;

    UnityEngine::Pose.ToStringOffset = getRealOffset(0x419C10);
    UnityEngine::Pose.ToString = (monoString *(*)(void*))UnityEngine::Pose.ToStringOffset;

    UnityEngine::Pose.GetHashCodeOffset = getRealOffset(0x419C5C);
    UnityEngine::Pose.GetHashCode = (int(*)(void*))UnityEngine::Pose.GetHashCodeOffset;

    UnityEngine::DrivenRectTransformTracker.ClearOffset = getRealOffset(0x42455C);
    UnityEngine::DrivenRectTransformTracker.Clear = (void(*)(void*))UnityEngine::DrivenRectTransformTracker.ClearOffset;

    UnityEngine::RectTransform.add_reapplyDrivenPropertiesOffset = getRealOffset(0x1458188);
    UnityEngine::RectTransform.add_reapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.add_reapplyDrivenPropertiesOffset;

    UnityEngine::RectTransform.remove_reapplyDrivenPropertiesOffset = getRealOffset(0x1458264);
    UnityEngine::RectTransform.remove_reapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.remove_reapplyDrivenPropertiesOffset;

    UnityEngine::RectTransform.get_rectOffset = getRealOffset(0x1458340);
    UnityEngine::RectTransform.get_rect = (int (*)(void*))UnityEngine::RectTransform.get_rectOffset;

    UnityEngine::RectTransform.get_anchorMinOffset = getRealOffset(0x1458404);
    UnityEngine::RectTransform.get_anchorMin = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchorMinOffset;

    UnityEngine::RectTransform.set_anchorMinOffset = getRealOffset(0x14584C8);
    UnityEngine::RectTransform.set_anchorMin = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchorMinOffset;

    UnityEngine::RectTransform.get_anchorMaxOffset = getRealOffset(0x145857C);
    UnityEngine::RectTransform.get_anchorMax = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchorMaxOffset;

    UnityEngine::RectTransform.set_anchorMaxOffset = getRealOffset(0x1458640);
    UnityEngine::RectTransform.set_anchorMax = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchorMaxOffset;

    UnityEngine::RectTransform.get_anchoredPositionOffset = getRealOffset(0x14586F4);
    UnityEngine::RectTransform.get_anchoredPosition = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchoredPositionOffset;

    UnityEngine::RectTransform.set_anchoredPositionOffset = getRealOffset(0x14587B8);
    UnityEngine::RectTransform.set_anchoredPosition = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchoredPositionOffset;

    UnityEngine::RectTransform.get_sizeDeltaOffset = getRealOffset(0x145886C);
    UnityEngine::RectTransform.get_sizeDelta = (Vector2 (*)(void*))UnityEngine::RectTransform.get_sizeDeltaOffset;

    UnityEngine::RectTransform.set_sizeDeltaOffset = getRealOffset(0x1458930);
    UnityEngine::RectTransform.set_sizeDelta = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_sizeDeltaOffset;

    UnityEngine::RectTransform.get_pivotOffset = getRealOffset(0x14589E4);
    UnityEngine::RectTransform.get_pivot = (Vector2 (*)(void*))UnityEngine::RectTransform.get_pivotOffset;

    UnityEngine::RectTransform.set_pivotOffset = getRealOffset(0x1458AA8);
    UnityEngine::RectTransform.set_pivot = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_pivotOffset;

    UnityEngine::RectTransform.set_anchoredPosition3DOffset = getRealOffset(0x1458B5C);
    UnityEngine::RectTransform.set_anchoredPosition3D = (void(*)(void*, Vector3))UnityEngine::RectTransform.set_anchoredPosition3DOffset;

    UnityEngine::RectTransform.get_offsetMinOffset = getRealOffset(0x1458CDC);
    UnityEngine::RectTransform.get_offsetMin = (Vector2 (*)(void*))UnityEngine::RectTransform.get_offsetMinOffset;

    UnityEngine::RectTransform.set_offsetMinOffset = getRealOffset(0x1458EA0);
    UnityEngine::RectTransform.set_offsetMin = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_offsetMinOffset;

    UnityEngine::RectTransform.get_offsetMaxOffset = getRealOffset(0x1459200);
    UnityEngine::RectTransform.get_offsetMax = (Vector2 (*)(void*))UnityEngine::RectTransform.get_offsetMaxOffset;

    UnityEngine::RectTransform.set_offsetMaxOffset = getRealOffset(0x14593DC);
    UnityEngine::RectTransform.set_offsetMax = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_offsetMaxOffset;

    UnityEngine::RectTransform.SendReapplyDrivenPropertiesOffset = getRealOffset(0x1459FF4);
    UnityEngine::RectTransform.SendReapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.SendReapplyDrivenPropertiesOffset;

    UnityEngine::RectTransform.GetParentSizeOffset = getRealOffset(0x1459E2C);
    UnityEngine::RectTransform.GetParentSize = (Vector2 (*)(void*))UnityEngine::RectTransform.GetParentSizeOffset;

    UnityEngine::Transform.get_positionOffset = getRealOffset(0x174AC4C);
    UnityEngine::Transform.get_position = (Vector3 (*)(void*))UnityEngine::Transform.get_positionOffset;

    UnityEngine::Transform.set_positionOffset = getRealOffset(0x174AD1C);
    UnityEngine::Transform.set_position = (void(*)(void*, Vector3))UnityEngine::Transform.set_positionOffset;

    UnityEngine::Transform.get_localPositionOffset = getRealOffset(0x1458C00);
    UnityEngine::Transform.get_localPosition = (Vector3 (*)(void*))UnityEngine::Transform.get_localPositionOffset;

    UnityEngine::Transform.set_localPositionOffset = getRealOffset(0x1458C7C);
    UnityEngine::Transform.set_localPosition = (void(*)(void*, Vector3))UnityEngine::Transform.set_localPositionOffset;

    UnityEngine::Transform.get_eulerAnglesOffset = getRealOffset(0x146F5B4);
    UnityEngine::Transform.get_eulerAngles = (Vector3 (*)(void*))UnityEngine::Transform.get_eulerAnglesOffset;

    UnityEngine::Transform.set_eulerAnglesOffset = getRealOffset(0x146F6DC);
    UnityEngine::Transform.set_eulerAngles = (void(*)(void*, Vector3))UnityEngine::Transform.set_eulerAnglesOffset;

    UnityEngine::Transform.get_localEulerAnglesOffset = getRealOffset(0x146F804);
    UnityEngine::Transform.get_localEulerAngles = (Vector3 (*)(void*))UnityEngine::Transform.get_localEulerAnglesOffset;

    UnityEngine::Transform.set_localEulerAnglesOffset = getRealOffset(0x146F92C);
    UnityEngine::Transform.set_localEulerAngles = (void(*)(void*, Vector3))UnityEngine::Transform.set_localEulerAnglesOffset;

    UnityEngine::Transform.get_rightOffset = getRealOffset(0x146FA54);
    UnityEngine::Transform.get_right = (Vector3 (*)(void*))UnityEngine::Transform.get_rightOffset;

    UnityEngine::Transform.get_upOffset = getRealOffset(0x146FBC0);
    UnityEngine::Transform.get_up = (Vector3 (*)(void*))UnityEngine::Transform.get_upOffset;

    UnityEngine::Transform.get_forwardOffset = getRealOffset(0x717124);
    UnityEngine::Transform.get_forward = (Vector3 (*)(void*))UnityEngine::Transform.get_forwardOffset;

    UnityEngine::Transform.get_rotationOffset = getRealOffset(0x146F66C);
    UnityEngine::Transform.get_rotation = (int (*)(void*))UnityEngine::Transform.get_rotationOffset;

    UnityEngine::Transform.get_localRotationOffset = getRealOffset(0x146F8BC);
    UnityEngine::Transform.get_localRotation = (int (*)(void*))UnityEngine::Transform.get_localRotationOffset;

    UnityEngine::Transform.get_localScaleOffset = getRealOffset(0x174B8AC);
    UnityEngine::Transform.get_localScale = (Vector3 (*)(void*))UnityEngine::Transform.get_localScaleOffset;

    UnityEngine::Transform.set_localScaleOffset = getRealOffset(0x174B97C);
    UnityEngine::Transform.set_localScale = (void(*)(void*, Vector3))UnityEngine::Transform.set_localScaleOffset;

    UnityEngine::Transform.get_parentOffset = getRealOffset(0x145A468);
    UnityEngine::Transform.get_parent = (void *(*)(void*))UnityEngine::Transform.get_parentOffset;

    UnityEngine::Transform.set_parentOffset = getRealOffset(0x14701B8);
    UnityEngine::Transform.set_parent = (void(*)(void*, void *))UnityEngine::Transform.set_parentOffset;

    UnityEngine::Transform.get_parentInternalOffset = getRealOffset(0x147016C);
    UnityEngine::Transform.get_parentInternal = (void *(*)(void*))UnityEngine::Transform.get_parentInternalOffset;

    UnityEngine::Transform.set_parentInternalOffset = getRealOffset(0x14702B8);
    UnityEngine::Transform.set_parentInternal = (void(*)(void*, void *))UnityEngine::Transform.set_parentInternalOffset;

    UnityEngine::Transform.GetParentOffset = getRealOffset(0x1470310);
    UnityEngine::Transform.GetParent = (void *(*)(void*))UnityEngine::Transform.GetParentOffset;

    UnityEngine::Transform.SetParentOffset = getRealOffset(0x147035C);
    UnityEngine::Transform.SetParent = (void(*)(void*, void *))UnityEngine::Transform.SetParentOffset;

    UnityEngine::Transform.SetParent1Offset = getRealOffset(0x14703B4);
    UnityEngine::Transform.SetParent1 = (void(*)(void*, void *, bool))UnityEngine::Transform.SetParent1Offset;

    UnityEngine::Transform.get_worldToLocalMatrixOffset = getRealOffset(0x1470410);
    UnityEngine::Transform.get_worldToLocalMatrix = (int (*)(void*))UnityEngine::Transform.get_worldToLocalMatrixOffset;

    UnityEngine::Transform.get_localToWorldMatrixOffset = getRealOffset(0x1459BBC);
    UnityEngine::Transform.get_localToWorldMatrix = (int (*)(void*))UnityEngine::Transform.get_localToWorldMatrixOffset;

    UnityEngine::Transform.Translate1Offset = getRealOffset(0x14707CC);
    UnityEngine::Transform.Translate1 = (void(*)(void*, Vector3))UnityEngine::Transform.Translate1Offset;

    UnityEngine::Transform.Translate2Offset = getRealOffset(0x14707EC);
    UnityEngine::Transform.Translate2 = (void(*)(void*, float, float, float))UnityEngine::Transform.Translate2Offset;

    UnityEngine::Transform.Rotate1Offset = getRealOffset(0x1470BEC);
    UnityEngine::Transform.Rotate1 = (void(*)(void*, Vector3))UnityEngine::Transform.Rotate1Offset;

    UnityEngine::Transform.Rotate3Offset = getRealOffset(0x1470C58);
    UnityEngine::Transform.Rotate3 = (void(*)(void*, float, float, float))UnityEngine::Transform.Rotate3Offset;

    UnityEngine::Transform.RotateAroundInternalOffset = getRealOffset(0x1470CA4);
    UnityEngine::Transform.RotateAroundInternal = (void(*)(void*, Vector3, float))UnityEngine::Transform.RotateAroundInternalOffset;

    UnityEngine::Transform.Rotate21Offset = getRealOffset(0x1470E20);
    UnityEngine::Transform.Rotate21 = (void(*)(void*, Vector3, float))UnityEngine::Transform.Rotate21Offset;

    UnityEngine::Transform.RotateAroundOffset = getRealOffset(0x1470E48);
    UnityEngine::Transform.RotateAround = (void(*)(void*, Vector3, Vector3, float))UnityEngine::Transform.RotateAroundOffset;

    UnityEngine::Transform.LookAtOffset = getRealOffset(0x1471068);
    UnityEngine::Transform.LookAt = (void(*)(void*, void *, Vector3))UnityEngine::Transform.LookAtOffset;

    UnityEngine::Transform.LookAt1Offset = getRealOffset(0x14711B0);
    UnityEngine::Transform.LookAt1 = (void(*)(void*, void *))UnityEngine::Transform.LookAt1Offset;

    UnityEngine::Transform.LookAt2Offset = getRealOffset(0x1471184);
    UnityEngine::Transform.LookAt2 = (void(*)(void*, Vector3, Vector3))UnityEngine::Transform.LookAt2Offset;

    UnityEngine::Transform.LookAt3Offset = getRealOffset(0x1471384);
    UnityEngine::Transform.LookAt3 = (void(*)(void*, Vector3))UnityEngine::Transform.LookAt3Offset;

    UnityEngine::Transform.Internal_LookAtOffset = getRealOffset(0x1471308);
    UnityEngine::Transform.Internal_LookAt = (void(*)(void*, Vector3, Vector3))UnityEngine::Transform.Internal_LookAtOffset;

    UnityEngine::Transform.TransformDirectionOffset = getRealOffset(0x147073C);
    UnityEngine::Transform.TransformDirection = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.TransformDirectionOffset;

    UnityEngine::Transform.InverseTransformDirectionOffset = getRealOffset(0x14714F4);
    UnityEngine::Transform.InverseTransformDirection = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.InverseTransformDirectionOffset;

    UnityEngine::Transform.TransformPointOffset = getRealOffset(0x14715E0);
    UnityEngine::Transform.TransformPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.TransformPointOffset;

    UnityEngine::Transform.TransformPoint1Offset = getRealOffset(0x14716CC);
    UnityEngine::Transform.TransformPoint1 = (Vector3 (*)(void*, float, float, float))UnityEngine::Transform.TransformPoint1Offset;

    UnityEngine::Transform.InverseTransformPointOffset = getRealOffset(0x147174C);
    UnityEngine::Transform.InverseTransformPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.InverseTransformPointOffset;

    UnityEngine::Transform.get_rootOffset = getRealOffset(0x1471838);
    UnityEngine::Transform.get_root = (void *(*)(void*))UnityEngine::Transform.get_rootOffset;

    UnityEngine::Transform.GetRootOffset = getRealOffset(0x1471884);
    UnityEngine::Transform.GetRoot = (void *(*)(void*))UnityEngine::Transform.GetRootOffset;

    UnityEngine::Transform.get_childCountOffset = getRealOffset(0x14718D0);
    UnityEngine::Transform.get_childCount = (int(*)(void*))UnityEngine::Transform.get_childCountOffset;

    UnityEngine::Transform.SetAsFirstSiblingOffset = getRealOffset(0x147191C);
    UnityEngine::Transform.SetAsFirstSibling = (void(*)(void*))UnityEngine::Transform.SetAsFirstSiblingOffset;

    UnityEngine::Transform.SetAsLastSiblingOffset = getRealOffset(0x147198C);
    UnityEngine::Transform.SetAsLastSibling = (void(*)(void*))UnityEngine::Transform.SetAsLastSiblingOffset;

    UnityEngine::Transform.SetSiblingIndexOffset = getRealOffset(0x14719FC);
    UnityEngine::Transform.SetSiblingIndex = (void(*)(void*, int))UnityEngine::Transform.SetSiblingIndexOffset;

    UnityEngine::Transform.GetSiblingIndexOffset = getRealOffset(0x1471A80);
    UnityEngine::Transform.GetSiblingIndex = (int(*)(void*))UnityEngine::Transform.GetSiblingIndexOffset;

    UnityEngine::Transform.FindRelativeTransformWithPathOffset = getRealOffset(0x1471AF0);
    UnityEngine::Transform.FindRelativeTransformWithPath = (void *(*)(void *, monoString*, bool))UnityEngine::Transform.FindRelativeTransformWithPathOffset;

    UnityEngine::Transform.FindOffset = getRealOffset(0x1471B4C);
    UnityEngine::Transform.Find = (void *(*)(void*, monoString*))UnityEngine::Transform.FindOffset;

    UnityEngine::Transform.get_lossyScaleOffset = getRealOffset(0x1471C40);
    UnityEngine::Transform.get_lossyScale = (Vector3 (*)(void*))UnityEngine::Transform.get_lossyScaleOffset;

    UnityEngine::Transform.IsChildOfOffset = getRealOffset(0x1471D10);
    UnityEngine::Transform.IsChildOf = (bool(*)(void*, void *))UnityEngine::Transform.IsChildOfOffset;

    UnityEngine::Transform.get_hasChangedOffset = getRealOffset(0x1471D94);
    UnityEngine::Transform.get_hasChanged = (bool(*)(void*))UnityEngine::Transform.get_hasChangedOffset;

    UnityEngine::Transform.set_hasChangedOffset = getRealOffset(0x1471E00);
    UnityEngine::Transform.set_hasChanged = (void(*)(void*, bool))UnityEngine::Transform.set_hasChangedOffset;

    UnityEngine::Transform.GetEnumeratorOffset = getRealOffset(0x1471E84);
    UnityEngine::Transform.GetEnumerator = (void *(*)(void*))UnityEngine::Transform.GetEnumeratorOffset;

    UnityEngine::Transform.GetChildOffset = getRealOffset(0x1471F30);
    UnityEngine::Transform.GetChild = (void *(*)(void*, int))UnityEngine::Transform.GetChildOffset;

    UnityEngine::Transform.get_position_InjectedOffset = getRealOffset(0x174ACC8);
    UnityEngine::Transform.get_position_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_position_InjectedOffset;

    UnityEngine::Transform.set_position_InjectedOffset = getRealOffset(0x174AD7C);
    UnityEngine::Transform.set_position_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_position_InjectedOffset;

    UnityEngine::Transform.get_localPosition_InjectedOffset = getRealOffset(0x146F50C);
    UnityEngine::Transform.get_localPosition_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_localPosition_InjectedOffset;

    UnityEngine::Transform.set_localPosition_InjectedOffset = getRealOffset(0x146F560);
    UnityEngine::Transform.set_localPosition_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_localPosition_InjectedOffset;

    UnityEngine::Transform.get_localScale_InjectedOffset = getRealOffset(0x1470064);
    UnityEngine::Transform.get_localScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_localScale_InjectedOffset;

    UnityEngine::Transform.set_localScale_InjectedOffset = getRealOffset(0x1470118);
    UnityEngine::Transform.set_localScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_localScale_InjectedOffset;

    UnityEngine::Transform.RotateAroundInternal_InjectedOffset = getRealOffset(0x1470D14);
    UnityEngine::Transform.RotateAroundInternal_Injected = (void(*)(void*, Vector3 *, float))UnityEngine::Transform.RotateAroundInternal_InjectedOffset;

    UnityEngine::Transform.Internal_LookAt_InjectedOffset = getRealOffset(0x147143C);
    UnityEngine::Transform.Internal_LookAt_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.Internal_LookAt_InjectedOffset;

    UnityEngine::Transform.TransformDirection_InjectedOffset = getRealOffset(0x1471498);
    UnityEngine::Transform.TransformDirection_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.TransformDirection_InjectedOffset;

    UnityEngine::Transform.InverseTransformDirection_InjectedOffset = getRealOffset(0x1471584);
    UnityEngine::Transform.InverseTransformDirection_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.InverseTransformDirection_InjectedOffset;

    UnityEngine::Transform.TransformPoint_InjectedOffset = getRealOffset(0x1471670);
    UnityEngine::Transform.TransformPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.TransformPoint_InjectedOffset;

    UnityEngine::Transform.InverseTransformPoint_InjectedOffset = getRealOffset(0x14717DC);
    UnityEngine::Transform.InverseTransformPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.InverseTransformPoint_InjectedOffset;

    UnityEngine::Transform.get_lossyScale_InjectedOffset = getRealOffset(0x1471CBC);
    UnityEngine::Transform.get_lossyScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_lossyScale_InjectedOffset;

    UnityEngine::SpriteRenderer.set_spriteOffset = getRealOffset(0x1467C40);
    UnityEngine::SpriteRenderer.set_sprite = (void(*)(void*, void *))UnityEngine::SpriteRenderer.set_spriteOffset;

    UnityEngine::SpriteRenderer.get_sizeOffset = getRealOffset(0x1467CC8);
    UnityEngine::SpriteRenderer.get_size = (Vector2 (*)(void*))UnityEngine::SpriteRenderer.get_sizeOffset;

    UnityEngine::SpriteRenderer.set_sizeOffset = getRealOffset(0x1467D8C);
    UnityEngine::SpriteRenderer.set_size = (void(*)(void*, Vector2))UnityEngine::SpriteRenderer.set_sizeOffset;

    UnityEngine::Sprite.GetPackingModeOffset = getRealOffset(0x146694C);
    UnityEngine::Sprite.GetPackingMode = (int(*)(void*))UnityEngine::Sprite.GetPackingModeOffset;

    UnityEngine::Sprite.GetPackedOffset = getRealOffset(0x1466998);
    UnityEngine::Sprite.GetPacked = (int(*)(void*))UnityEngine::Sprite.GetPackedOffset;

    UnityEngine::Sprite.GetTextureRectOffset = getRealOffset(0x14669E4);
    UnityEngine::Sprite.GetTextureRect = (int (*)(void*))UnityEngine::Sprite.GetTextureRectOffset;

    UnityEngine::Sprite.GetInnerUVsOffset = getRealOffset(0x1466AA8);
    UnityEngine::Sprite.GetInnerUVs = (int (*)(void*))UnityEngine::Sprite.GetInnerUVsOffset;

    UnityEngine::Sprite.GetOuterUVsOffset = getRealOffset(0x1466B6C);
    UnityEngine::Sprite.GetOuterUVs = (int (*)(void*))UnityEngine::Sprite.GetOuterUVsOffset;

    UnityEngine::Sprite.GetPaddingOffset = getRealOffset(0x1466C30);
    UnityEngine::Sprite.GetPadding = (int (*)(void*))UnityEngine::Sprite.GetPaddingOffset;

    UnityEngine::Sprite.get_boundsOffset = getRealOffset(0x1466E5C);
    UnityEngine::Sprite.get_bounds = (int (*)(void*))UnityEngine::Sprite.get_boundsOffset;

    UnityEngine::Sprite.get_rectOffset = getRealOffset(0x1466F38);
    UnityEngine::Sprite.get_rect = (int (*)(void*))UnityEngine::Sprite.get_rectOffset;

    UnityEngine::Sprite.get_borderOffset = getRealOffset(0x1466FFC);
    UnityEngine::Sprite.get_border = (int (*)(void*))UnityEngine::Sprite.get_borderOffset;

    UnityEngine::Sprite.get_textureOffset = getRealOffset(0x14670C0);
    UnityEngine::Sprite.get_texture = (void *(*)(void*))UnityEngine::Sprite.get_textureOffset;

    UnityEngine::Sprite.get_pixelsPerUnitOffset = getRealOffset(0x1467128);
    UnityEngine::Sprite.get_pixelsPerUnit = (float(*)(void*))UnityEngine::Sprite.get_pixelsPerUnitOffset;

    UnityEngine::Sprite.get_associatedAlphaSplitTextureOffset = getRealOffset(0x1467194);
    UnityEngine::Sprite.get_associatedAlphaSplitTexture = (void *(*)(void*))UnityEngine::Sprite.get_associatedAlphaSplitTextureOffset;

    UnityEngine::Sprite.get_pivotOffset = getRealOffset(0x1467210);
    UnityEngine::Sprite.get_pivot = (Vector2 (*)(void*))UnityEngine::Sprite.get_pivotOffset;

    UnityEngine::Sprite.get_packedOffset = getRealOffset(0x14672D4);
    UnityEngine::Sprite.get_packed = (bool(*)(void*))UnityEngine::Sprite.get_packedOffset;

    UnityEngine::Sprite.get_packingModeOffset = getRealOffset(0x1467328);
    UnityEngine::Sprite.get_packingMode = (int (*)(void*))UnityEngine::Sprite.get_packingModeOffset;

    UnityEngine::Sprite.get_textureRectOffset = getRealOffset(0x1467374);
    UnityEngine::Sprite.get_textureRect = (int (*)(void*))UnityEngine::Sprite.get_textureRectOffset;

    UnityEngine::Sprite.get_verticesOffset = getRealOffset(0x1467488);
    UnityEngine::Sprite.get_trianglesOffset = getRealOffset(0x14674F0);
    UnityEngine::Sprite.get_uvOffset = getRealOffset(0x1467558);
    UnityEngineAssertions::Assert.FailOffset = getRealOffset(0x164EB34);
    UnityEngineAssertions::Assert.Fail = (void(*)(monoString*, monoString*))UnityEngineAssertions::Assert.FailOffset;

    UnityEngineAssertions::Assert.AreEqual2Offset = getRealOffset(0x164EEC0);
    UnityEngineAssertions::Assert.AreEqual2 = (void(*)(void *, void *, monoString*))UnityEngineAssertions::Assert.AreEqual2Offset;

    UnityEngineAssertions::Assert.AreEqual3Offset = getRealOffset(0x164F228);
    UnityEngineAssertions::Assert.AreEqual3 = (void(*)(int, int))UnityEngineAssertions::Assert.AreEqual3Offset;

    UnityEngineAssertions::AssertionException.get_MessageOffset = getRealOffset(0x164F334);
    UnityEngineAssertions::AssertionException.get_Message = (monoString *(*)(void*))UnityEngineAssertions::AssertionException.get_MessageOffset;

    UnityEngineAssertions::AssertionMessageUtil.GetMessageOffset = getRealOffset(0x164F3E0);
    UnityEngineAssertions::AssertionMessageUtil.GetMessage = (monoString *(*)(monoString*))UnityEngineAssertions::AssertionMessageUtil.GetMessageOffset;

    UnityEngineAssertions::AssertionMessageUtil.GetMessage1Offset = getRealOffset(0x164F530);
    UnityEngineAssertions::AssertionMessageUtil.GetMessage1 = (monoString *(*)(monoString*, monoString*))UnityEngineAssertions::AssertionMessageUtil.GetMessage1Offset;

    UnityEngineEvents::ArgumentCache.get_unityObjectArgumentOffset = getRealOffset(0x165A760);
    UnityEngineEvents::ArgumentCache.get_unityObjectArgument = (void *(*)(void*))UnityEngineEvents::ArgumentCache.get_unityObjectArgumentOffset;

    UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeNameOffset = getRealOffset(0x165A768);
    UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeName = (monoString *(*)(void*))UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeNameOffset;

    UnityEngineEvents::ArgumentCache.get_intArgumentOffset = getRealOffset(0x165A770);
    UnityEngineEvents::ArgumentCache.get_intArgument = (int(*)(void*))UnityEngineEvents::ArgumentCache.get_intArgumentOffset;

    UnityEngineEvents::ArgumentCache.get_floatArgumentOffset = getRealOffset(0x165A778);
    UnityEngineEvents::ArgumentCache.get_floatArgument = (float(*)(void*))UnityEngineEvents::ArgumentCache.get_floatArgumentOffset;

    UnityEngineEvents::ArgumentCache.get_stringArgumentOffset = getRealOffset(0x165A780);
    UnityEngineEvents::ArgumentCache.get_stringArgument = (monoString *(*)(void*))UnityEngineEvents::ArgumentCache.get_stringArgumentOffset;

    UnityEngineEvents::ArgumentCache.get_boolArgumentOffset = getRealOffset(0x165A788);
    UnityEngineEvents::ArgumentCache.get_boolArgument = (bool(*)(void*))UnityEngineEvents::ArgumentCache.get_boolArgumentOffset;

    UnityEngineEvents::ArgumentCache.TidyAssemblyTypeNameOffset = getRealOffset(0x165A790);
    UnityEngineEvents::ArgumentCache.TidyAssemblyTypeName = (void(*)(void*))UnityEngineEvents::ArgumentCache.TidyAssemblyTypeNameOffset;

    UnityEngineEvents::ArgumentCache.OnBeforeSerializeOffset = getRealOffset(0x165AA58);
    UnityEngineEvents::ArgumentCache.OnBeforeSerialize = (void(*)(void*))UnityEngineEvents::ArgumentCache.OnBeforeSerializeOffset;

    UnityEngineEvents::ArgumentCache.OnAfterDeserializeOffset = getRealOffset(0x165AA5C);
    UnityEngineEvents::ArgumentCache.OnAfterDeserialize = (void(*)(void*))UnityEngineEvents::ArgumentCache.OnAfterDeserializeOffset;

    UnityEngineEvents::BaseInvokableCall.AllowInvokeOffset = getRealOffset(0x165AB70);
    UnityEngineEvents::BaseInvokableCall.AllowInvoke = (bool(*)(void *))UnityEngineEvents::BaseInvokableCall.AllowInvokeOffset;

    UnityEngineEvents::InvokableCall.ctor1Offset = getRealOffset(0x165AE08);
    UnityEngineEvents::InvokableCall.ctor1 = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.ctor1Offset;

    UnityEngineEvents::InvokableCall.add_DelegateOffset = getRealOffset(0x165AD50);
    UnityEngineEvents::InvokableCall.add_Delegate = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.add_DelegateOffset;

    UnityEngineEvents::InvokableCall.remove_DelegateOffset = getRealOffset(0x165AE30);
    UnityEngineEvents::InvokableCall.remove_Delegate = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.remove_DelegateOffset;

    UnityEngineEvents::InvokableCall.Invoke1Offset = getRealOffset(0x165AF24);
    UnityEngineEvents::InvokableCall.Invoke1 = (void(*)(void*))UnityEngineEvents::InvokableCall.Invoke1Offset;

    UnityEngineEvents::PersistentCall.get_targetOffset = getRealOffset(0x165B664);
    UnityEngineEvents::PersistentCall.get_target = (void *(*)(void*))UnityEngineEvents::PersistentCall.get_targetOffset;

    UnityEngineEvents::PersistentCall.get_methodNameOffset = getRealOffset(0x165B66C);
    UnityEngineEvents::PersistentCall.get_methodName = (monoString *(*)(void*))UnityEngineEvents::PersistentCall.get_methodNameOffset;

    UnityEngineEvents::PersistentCall.get_modeOffset = getRealOffset(0x165B674);
    UnityEngineEvents::PersistentCall.get_mode = (int (*)(void*))UnityEngineEvents::PersistentCall.get_modeOffset;

    UnityEngineEvents::PersistentCall.get_argumentsOffset = getRealOffset(0x165B67C);
    UnityEngineEvents::PersistentCall.get_arguments = (void *(*)(void*))UnityEngineEvents::PersistentCall.get_argumentsOffset;

    UnityEngineEvents::PersistentCall.IsValidOffset = getRealOffset(0x165B68C);
    UnityEngineEvents::PersistentCall.IsValid = (bool(*)(void*))UnityEngineEvents::PersistentCall.IsValidOffset;

    UnityEngineEvents::PersistentCall.GetRuntimeCallOffset = getRealOffset(0x165B738);
    UnityEngineEvents::PersistentCall.GetRuntimeCall = (void *(*)(void*, void *))UnityEngineEvents::PersistentCall.GetRuntimeCallOffset;

    UnityEngineEvents::PersistentCall.GetObjectCallOffset = getRealOffset(0x165BBA0);
    UnityEngineEvents::PersistentCall.GetObjectCall = (void *(*)(void *, void *, void *))UnityEngineEvents::PersistentCall.GetObjectCallOffset;

    UnityEngineEvents::PersistentCallGroup.get_CountOffset = getRealOffset(0x165C240);
    UnityEngineEvents::PersistentCallGroup.get_Count = (int(*)(void*))UnityEngineEvents::PersistentCallGroup.get_CountOffset;

    UnityEngineEvents::PersistentCallGroup.GetListenerOffset = getRealOffset(0x165C2B8);
    UnityEngineEvents::PersistentCallGroup.GetListener = (void *(*)(void*, int))UnityEngineEvents::PersistentCallGroup.GetListenerOffset;

    UnityEngineEvents::PersistentCallGroup.InitializeOffset = getRealOffset(0x165C338);
    UnityEngineEvents::PersistentCallGroup.Initialize = (void(*)(void*, void *, void *))UnityEngineEvents::PersistentCallGroup.InitializeOffset;

    UnityEngineEvents::InvokableCallList.AddPersistentInvokableCallOffset = getRealOffset(0x165B0B4);
    UnityEngineEvents::InvokableCallList.AddPersistentInvokableCall = (void(*)(void*, void *))UnityEngineEvents::InvokableCallList.AddPersistentInvokableCallOffset;

    UnityEngineEvents::InvokableCallList.AddListenerOffset = getRealOffset(0x165B13C);
    UnityEngineEvents::InvokableCallList.AddListener = (void(*)(void*, void *))UnityEngineEvents::InvokableCallList.AddListenerOffset;

    UnityEngineEvents::InvokableCallList.ClearOffset = getRealOffset(0x165B3E0);
    UnityEngineEvents::InvokableCallList.Clear = (void(*)(void*))UnityEngineEvents::InvokableCallList.ClearOffset;

    UnityEngineEvents::InvokableCallList.ClearPersistentOffset = getRealOffset(0x165B460);
    UnityEngineEvents::InvokableCallList.ClearPersistent = (void(*)(void*))UnityEngineEvents::InvokableCallList.ClearPersistentOffset;

    UnityEngineEvents::InvokableCallList.PrepareInvokeOffset = getRealOffset(0x165B4E0);
    UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset = getRealOffset(0x165CC44);
    UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerialize = (void(*)(void*))UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset;

    UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset = getRealOffset(0x165CC48);
    UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserialize = (void(*)(void*))UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset;

    UnityEngineEvents::UnityEventBase.FindMethodOffset = getRealOffset(0x165B9DC);
    UnityEngineEvents::UnityEventBase.FindMethod = (void *(*)(void*, void *))UnityEngineEvents::UnityEventBase.FindMethodOffset;

    UnityEngineEvents::UnityEventBase.GetPersistentEventCountOffset = getRealOffset(0x165CFC8);
    UnityEngineEvents::UnityEventBase.GetPersistentEventCount = (int(*)(void*))UnityEngineEvents::UnityEventBase.GetPersistentEventCountOffset;

    UnityEngineEvents::UnityEventBase.DirtyPersistentCallsOffset = getRealOffset(0x165CC4C);
    UnityEngineEvents::UnityEventBase.DirtyPersistentCalls = (void(*)(void*))UnityEngineEvents::UnityEventBase.DirtyPersistentCallsOffset;

    UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeededOffset = getRealOffset(0x165CFF0);
    UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeeded = (void(*)(void*))UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeededOffset;

    UnityEngineEvents::UnityEventBase.AddCallOffset = getRealOffset(0x165C684);
    UnityEngineEvents::UnityEventBase.AddCall = (void(*)(void*, void *))UnityEngineEvents::UnityEventBase.AddCallOffset;

    UnityEngineEvents::UnityEventBase.RemoveAllListenersOffset = getRealOffset(0x165D0BC);
    UnityEngineEvents::UnityEventBase.RemoveAllListeners = (void(*)(void*))UnityEngineEvents::UnityEventBase.RemoveAllListenersOffset;

    UnityEngineEvents::UnityEventBase.PrepareInvokeOffset = getRealOffset(0x165CC14);
    UnityEngineEvents::UnityEventBase.ToStringOffset = getRealOffset(0x165D0E4);
    UnityEngineEvents::UnityEventBase.ToString = (monoString *(*)(void*))UnityEngineEvents::UnityEventBase.ToStringOffset;

    UnityEngineEvents::UnityAction.InvokeOffset = getRealOffset(0x165031C);
    UnityEngineEvents::UnityAction.Invoke = (void(*)(void*))UnityEngineEvents::UnityAction.InvokeOffset;

    UnityEngineEvents::UnityAction.EndInvokeOffset = getRealOffset(0x165C52C);
    UnityEngineEvents::UnityAction.EndInvoke = (void(*)(void*, void *))UnityEngineEvents::UnityAction.EndInvokeOffset;

    UnityEngineEvents::UnityEvent.AddListenerOffset = getRealOffset(0x165C5E4);
    UnityEngineEvents::UnityEvent.AddListener = (void(*)(void*, void *))UnityEngineEvents::UnityEvent.AddListenerOffset;

    UnityEngineEvents::UnityEvent.GetDelegate1Offset = getRealOffset(0x165C608);
    UnityEngineEvents::UnityEvent.GetDelegate1 = (void *(*)(void *))UnityEngineEvents::UnityEvent.GetDelegate1Offset;

    UnityEngineEvents::UnityEvent.InvokeOffset = getRealOffset(0x165C9EC);
    UnityEngineEvents::UnityEvent.Invoke = (void(*)(void*))UnityEngineEvents::UnityEvent.InvokeOffset;

    UnityEngineExperimentalPlayables::CameraPlayable.GetHandleOffset = getRealOffset(0x424630);
    UnityEngineExperimentalPlayables::CameraPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::CameraPlayable.GetHandleOffset;

    UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandleOffset = getRealOffset(0x42464C);
    UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandleOffset;

    UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandleOffset = getRealOffset(0x424668);
    UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandleOffset;

    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbesOffset = getRealOffset(0x1343070);
    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbes = (bool(*)(void*))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbesOffset;

    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.DisposeOffset = getRealOffset(0x13430F8);
    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose = (void(*)(void*))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.DisposeOffset;

    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1Offset = getRealOffset(0x13430FC);
    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1 = (void(*)(void*, bool))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1Offset;

    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdateOffset = getRealOffset(0x13430B4);
    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdate = (bool(*)())UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdateOffset;

    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_NewOffset = getRealOffset(0x1343100);
    UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_New = (void *(*)())UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_NewOffset;

    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset = getRealOffset(0x13434B4);
    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_system = (void(*)(void *))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset;

    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset = getRealOffset(0x1343708);
    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instance = (void *(*)())UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset;

    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstanceOffset = getRealOffset(0x1343794);
    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstance = (void(*)())UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstanceOffset;

    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementationOffset = getRealOffset(0x13436F8);
    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementation = (void *(*)(void*))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementationOffset;

    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementationOffset = getRealOffset(0x1343700);
    UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementation = (void(*)(void*, void *))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementationOffset;

    UnityEngineInternal::DefaultValueAttribute.get_ValueOffset = getRealOffset(0x134AC60);
    UnityEngineInternal::DefaultValueAttribute.GetHashCodeOffset = getRealOffset(0x134AD5C);
    UnityEngineInternal::DefaultValueAttribute.GetHashCode = (int(*)(void*))UnityEngineInternal::DefaultValueAttribute.GetHashCodeOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instanceOffset = getRealOffset(0x135A55C);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instance = (void *(*)())UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instanceOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnectedOffset = getRealOffset(0x135A700);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnected = (bool(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnectedOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstanceOffset = getRealOffset(0x135A61C);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstance = (void *(*)())UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstanceOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnableOffset = getRealOffset(0x135A8B8);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnable = (void(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnableOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApiOffset = getRealOffset(0x135A7D8);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApi = (void *(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApiOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAllOffset = getRealOffset(0x135B9E4);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAll = (void(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAllOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternalOffset = getRealOffset(0x135C0F8);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternal = (void(*)(int))UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternalOffset;

    UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallbackOffset = getRealOffset(0x135C1E8);
    UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallback = (void(*)(int))UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallbackOffset;

    UnityEnginePlayables::Playable.get_NullOffset = getRealOffset(0x135E7C4);
    UnityEnginePlayables::Playable.get_Null = (int (*)())UnityEnginePlayables::Playable.get_NullOffset;

    UnityEnginePlayables::Playable.GetHandleOffset = getRealOffset(0x419A60);
    UnityEnginePlayables::Playable.GetHandle = (int (*)(void*))UnityEnginePlayables::Playable.GetHandleOffset;

    UnityEnginePlayables::PlayableAsset.get_durationOffset = getRealOffset(0x135EB00);
    UnityEnginePlayables::PlayableAsset.get_outputsOffset = getRealOffset(0x135EB90);
    UnityEnginePlayables::PlayableBehaviour.CloneOffset = getRealOffset(0x135EDCC);
    UnityEnginePlayables::PlayableHandle.get_NullOffset = getRealOffset(0x135EA5C);
    UnityEnginePlayables::PlayableHandle.get_Null = (int (*)())UnityEnginePlayables::PlayableHandle.get_NullOffset;

    UnityEnginePlayables::PlayableHandle.GetHashCodeOffset = getRealOffset(0x419B30);
    UnityEnginePlayables::PlayableHandle.GetHashCode = (int(*)(void*))UnityEnginePlayables::PlayableHandle.GetHashCodeOffset;

    UnityEnginePlayables::PlayableHandle.IsValidOffset = getRealOffset(0x419B60);
    UnityEnginePlayables::PlayableHandle.IsValid = (bool(*)(void*))UnityEnginePlayables::PlayableHandle.IsValidOffset;

    UnityEnginePlayables::PlayableHandle.GetPlayableTypeOffset = getRealOffset(0x419B68);
    UnityEnginePlayables::PlayableHandle.GetPlayableType = (void *(*)(void*))UnityEnginePlayables::PlayableHandle.GetPlayableTypeOffset;

    UnityEnginePlayables::PlayableOutput.GetHandleOffset = getRealOffset(0x419B7C);
    UnityEnginePlayables::PlayableOutput.GetHandle = (int (*)(void*))UnityEnginePlayables::PlayableOutput.GetHandleOffset;

    UnityEnginePlayables::PlayableOutputHandle.get_NullOffset = getRealOffset(0x135F820);
    UnityEnginePlayables::PlayableOutputHandle.get_Null = (int (*)())UnityEnginePlayables::PlayableOutputHandle.get_NullOffset;

    UnityEnginePlayables::PlayableOutputHandle.GetHashCodeOffset = getRealOffset(0x419B98);
    UnityEnginePlayables::PlayableOutputHandle.GetHashCode = (int(*)(void*))UnityEnginePlayables::PlayableOutputHandle.GetHashCodeOffset;

    UnityEngineProfilingMemoryExperimental::MemoryProfiler.PrepareMetadataOffset = getRealOffset(0x13611C0);
    UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshotOffset = getRealOffset(0x1361844);
    UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshot = (void(*)(monoString*, bool))UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshotOffset;

    UnityEngineRendering::SphericalHarmonicsL2.get_ItemOffset = getRealOffset(0x420698);
    UnityEngineRendering::SphericalHarmonicsL2.get_Item = (float(*)(void*, int, int))UnityEngineRendering::SphericalHarmonicsL2.get_ItemOffset;

    UnityEngineRendering::SphericalHarmonicsL2.GetHashCodeOffset = getRealOffset(0x4206A0);
    UnityEngineRendering::SphericalHarmonicsL2.GetHashCode = (int(*)(void*))UnityEngineRendering::SphericalHarmonicsL2.GetHashCodeOffset;

    UnityEngineRendering::LODParameters.GetHashCodeOffset = getRealOffset(0x42066C);
    UnityEngineRendering::LODParameters.GetHashCode = (int(*)(void*))UnityEngineRendering::LODParameters.GetHashCodeOffset;

    UnityEngineRendering::RenderPipeline.get_disposedOffset = getRealOffset(0x145F5A8);
    UnityEngineRendering::RenderPipeline.get_disposed = (bool(*)(void*))UnityEngineRendering::RenderPipeline.get_disposedOffset;

    UnityEngineRendering::RenderPipeline.set_disposedOffset = getRealOffset(0x145F5B0);
    UnityEngineRendering::RenderPipeline.set_disposed = (void(*)(void*, bool))UnityEngineRendering::RenderPipeline.set_disposedOffset;

    UnityEngineRendering::RenderPipeline.DisposeOffset = getRealOffset(0x145F5B8);
    UnityEngineRendering::RenderPipeline.Dispose = (void(*)(void*))UnityEngineRendering::RenderPipeline.DisposeOffset;

    UnityEngineRendering::RenderPipeline.Dispose1Offset = getRealOffset(0x145F65C);
    UnityEngineRendering::RenderPipeline.Dispose1 = (void(*)(void*, bool))UnityEngineRendering::RenderPipeline.Dispose1Offset;

    UnityEngineRendering::RenderPipelineAsset.InternalCreatePipelineOffset = getRealOffset(0x145F724);
    UnityEngineRendering::RenderPipelineAsset.InternalCreatePipeline = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.InternalCreatePipelineOffset;

    UnityEngineRendering::RenderPipelineAsset.get_renderingLayerMaskNamesOffset = getRealOffset(0x145F734);
    UnityEngineRendering::RenderPipelineAsset.get_defaultMaterialOffset = getRealOffset(0x145F73C);
    UnityEngineRendering::RenderPipelineAsset.get_defaultMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShaderOffset = getRealOffset(0x145F744);
    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShaderOffset = getRealOffset(0x145F74C);
    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShaderOffset = getRealOffset(0x145F754);
    UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShaderOffset = getRealOffset(0x145F75C);
    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShaderOffset = getRealOffset(0x145F764);
    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShaderOffset = getRealOffset(0x145F76C);
    UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterialOffset = getRealOffset(0x145F774);
    UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterialOffset = getRealOffset(0x145F77C);
    UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterialOffset = getRealOffset(0x145F784);
    UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterialOffset = getRealOffset(0x145F78C);
    UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterialOffset = getRealOffset(0x145F794);
    UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterialOffset = getRealOffset(0x145F79C);
    UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_default2DMaterialOffset = getRealOffset(0x145F7A4);
    UnityEngineRendering::RenderPipelineAsset.get_default2DMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_default2DMaterialOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultShaderOffset = getRealOffset(0x145F7AC);
    UnityEngineRendering::RenderPipelineAsset.get_defaultShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7ShaderOffset = getRealOffset(0x145F7B4);
    UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7Shader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7ShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8ShaderOffset = getRealOffset(0x145F7BC);
    UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8Shader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8ShaderOffset;

    UnityEngineRendering::RenderPipelineAsset.OnValidateOffset = getRealOffset(0x145F7C4);
    UnityEngineRendering::RenderPipelineAsset.OnValidate = (void(*)(void*))UnityEngineRendering::RenderPipelineAsset.OnValidateOffset;

    UnityEngineRendering::RenderPipelineAsset.OnDisableOffset = getRealOffset(0x145F974);
    UnityEngineRendering::RenderPipelineAsset.OnDisable = (void(*)(void*))UnityEngineRendering::RenderPipelineAsset.OnDisableOffset;

    UnityEngineRendering::RenderPipelineManager.get_currentPipelineOffset = getRealOffset(0x145F978);
    UnityEngineRendering::RenderPipelineManager.get_currentPipeline = (void *(*)())UnityEngineRendering::RenderPipelineManager.get_currentPipelineOffset;

    UnityEngineRendering::RenderPipelineManager.set_currentPipelineOffset = getRealOffset(0x145F9DC);
    UnityEngineRendering::RenderPipelineManager.set_currentPipeline = (void(*)(void *))UnityEngineRendering::RenderPipelineManager.set_currentPipelineOffset;

    UnityEngineRendering::RenderPipelineManager.CleanupRenderPipelineOffset = getRealOffset(0x145F7C8);
    UnityEngineRendering::RenderPipelineManager.CleanupRenderPipeline = (void(*)())UnityEngineRendering::RenderPipelineManager.CleanupRenderPipelineOffset;

    UnityEngineRendering::RenderPipelineManager.PrepareRenderPipelineOffset = getRealOffset(0x145FD58);
    UnityEngineRendering::RenderPipelineManager.PrepareRenderPipeline = (void(*)(void *))UnityEngineRendering::RenderPipelineManager.PrepareRenderPipelineOffset;

    UnityEngineRendering::ScriptableRenderContext.GetHashCodeOffset = getRealOffset(0x42068C);
    UnityEngineRendering::ScriptableRenderContext.GetHashCode = (int(*)(void*))UnityEngineRendering::ScriptableRenderContext.GetHashCodeOffset;

    UnityEngineRendering::SupportedRenderingFeatures.get_activeOffset = getRealOffset(0x1460790);
    UnityEngineRendering::SupportedRenderingFeatures.get_active = (void *(*)())UnityEngineRendering::SupportedRenderingFeatures.get_activeOffset;

    UnityEngineRendering::SupportedRenderingFeatures.set_activeOffset = getRealOffset(0x145FC48);
    UnityEngineRendering::SupportedRenderingFeatures.set_active = (void(*)(void *))UnityEngineRendering::SupportedRenderingFeatures.set_activeOffset;

    UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModesOffset = getRealOffset(0x14608FC);
    UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModesOffset;

    UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModesOffset = getRealOffset(0x1460904);
    UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModesOffset;

    UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypesOffset = getRealOffset(0x146090C);
    UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypesOffset;

    UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModesOffset = getRealOffset(0x1460914);
    UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModesOffset;

    UnityEngineRendering::BatchRendererGroup.DisposeOffset = getRealOffset(0x145E5E4);
    UnityEngineRendering::BatchRendererGroup.Dispose = (void(*)(void*))UnityEngineRendering::BatchRendererGroup.DisposeOffset;

    UnityEngineSceneManagement::Scene.IsValidInternalOffset = getRealOffset(0x14618B0);
    UnityEngineSceneManagement::Scene.IsValidInternal = (bool(*)(int))UnityEngineSceneManagement::Scene.IsValidInternalOffset;

    UnityEngineSceneManagement::Scene.GetNameInternalOffset = getRealOffset(0x14618FC);
    UnityEngineSceneManagement::Scene.GetNameInternal = (monoString *(*)(int))UnityEngineSceneManagement::Scene.GetNameInternalOffset;

    UnityEngineSceneManagement::Scene.GetIsLoadedInternalOffset = getRealOffset(0x1461948);
    UnityEngineSceneManagement::Scene.GetIsLoadedInternal = (bool(*)(int))UnityEngineSceneManagement::Scene.GetIsLoadedInternalOffset;

    UnityEngineSceneManagement::Scene.GetBuildIndexInternalOffset = getRealOffset(0x1461994);
    UnityEngineSceneManagement::Scene.GetBuildIndexInternal = (int(*)(int))UnityEngineSceneManagement::Scene.GetBuildIndexInternalOffset;

    UnityEngineSceneManagement::Scene.GetRootCountInternalOffset = getRealOffset(0x14619E0);
    UnityEngineSceneManagement::Scene.GetRootCountInternal = (int(*)(int))UnityEngineSceneManagement::Scene.GetRootCountInternalOffset;

    UnityEngineSceneManagement::Scene.get_handleOffset = getRealOffset(0x4207AC);
    UnityEngineSceneManagement::Scene.get_handle = (int(*)(void*))UnityEngineSceneManagement::Scene.get_handleOffset;

    UnityEngineSceneManagement::Scene.IsValidOffset = getRealOffset(0x4207B4);
    UnityEngineSceneManagement::Scene.IsValid = (bool(*)(void*))UnityEngineSceneManagement::Scene.IsValidOffset;

    UnityEngineSceneManagement::Scene.get_nameOffset = getRealOffset(0x420800);
    UnityEngineSceneManagement::Scene.get_name = (monoString *(*)(void*))UnityEngineSceneManagement::Scene.get_nameOffset;

    UnityEngineSceneManagement::Scene.get_isLoadedOffset = getRealOffset(0x42084C);
    UnityEngineSceneManagement::Scene.get_isLoaded = (bool(*)(void*))UnityEngineSceneManagement::Scene.get_isLoadedOffset;

    UnityEngineSceneManagement::Scene.get_buildIndexOffset = getRealOffset(0x420898);
    UnityEngineSceneManagement::Scene.get_buildIndex = (int(*)(void*))UnityEngineSceneManagement::Scene.get_buildIndexOffset;

    UnityEngineSceneManagement::Scene.get_rootCountOffset = getRealOffset(0x4208E4);
    UnityEngineSceneManagement::Scene.get_rootCount = (int(*)(void*))UnityEngineSceneManagement::Scene.get_rootCountOffset;

    UnityEngineSceneManagement::Scene.GetRootGameObjectsOffset = getRealOffset(0x420930);
    UnityEngineSceneManagement::Scene.GetHashCodeOffset = getRealOffset(0x420940);
    UnityEngineSceneManagement::Scene.GetHashCode = (int(*)(void*))UnityEngineSceneManagement::Scene.GetHashCodeOffset;

    UnityEngineSceneManagement::SceneManager.get_sceneCountOffset = getRealOffset(0x14620BC);
    UnityEngineSceneManagement::SceneManager.get_sceneCount = (int(*)())UnityEngineSceneManagement::SceneManager.get_sceneCountOffset;

    UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettingsOffset = getRealOffset(0x1462100);
    UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettings = (int(*)())UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettingsOffset;

    UnityEngineSceneManagement::SceneManager.GetActiveSceneOffset = getRealOffset(0x1462144);
    UnityEngineSceneManagement::SceneManager.GetActiveScene = (int (*)())UnityEngineSceneManagement::SceneManager.GetActiveSceneOffset;

    UnityEngineSceneManagement::SceneManager.GetSceneAtOffset = getRealOffset(0x146228C);
    UnityEngineSceneManagement::SceneManager.GetSceneAt = (int (*)(int))UnityEngineSceneManagement::SceneManager.GetSceneAtOffset;

    UnityEngineSceneManagement::SceneManager.GetAllScenesOffset = getRealOffset(0x1462790);
    UnityEngineSceneManagement::SceneManager.LoadScene1Offset = getRealOffset(0x14629D4);
    UnityEngineSceneManagement::SceneManager.LoadScene1 = (void(*)(monoString*))UnityEngineSceneManagement::SceneManager.LoadScene1Offset;

    UnityEngineSceneManagement::SceneManager.LoadScene4Offset = getRealOffset(0x1462AA0);
    UnityEngineSceneManagement::SceneManager.LoadScene4 = (void(*)(int))UnityEngineSceneManagement::SceneManager.LoadScene4Offset;

    UnityEngineSceneManagement::SceneManager.LoadSceneAsync3Offset = getRealOffset(0x1462B64);
    UnityEngineSceneManagement::SceneManager.LoadSceneAsync3 = (void *(*)(monoString*))UnityEngineSceneManagement::SceneManager.LoadSceneAsync3Offset;

    UnityEngineU2D::SpriteAtlasManager.RequestAtlasOffset = getRealOffset(0x14720F8);
    UnityEngineU2D::SpriteAtlasManager.RequestAtlas = (bool(*)(monoString*))UnityEngineU2D::SpriteAtlasManager.RequestAtlasOffset;

    UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlasOffset = getRealOffset(0x1472550);
    UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlas = (void(*)(void *))UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlasOffset;

    UnityEngineU2D::SpriteAtlasManager.RegisterOffset = getRealOffset(0x147264C);
    UnityEngineU2D::SpriteAtlasManager.Register = (void(*)(void *))UnityEngineU2D::SpriteAtlasManager.RegisterOffset;

    UnityEngineInternal::TypeInferenceRuleAttribute.ctor1Offset = getRealOffset(0x1AEC47C);
    UnityEngineInternal::TypeInferenceRuleAttribute.ctor1 = (void(*)(void*, monoString*))UnityEngineInternal::TypeInferenceRuleAttribute.ctor1Offset;

    UnityEngineInternal::TypeInferenceRuleAttribute.ToStringOffset = getRealOffset(0x1AEC49C);
    UnityEngineInternal::TypeInferenceRuleAttribute.ToString = (monoString *(*)(void*))UnityEngineInternal::TypeInferenceRuleAttribute.ToStringOffset;

}
#endif Toshi_UnityEngineCoreModuleh_H
