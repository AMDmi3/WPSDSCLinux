/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation. All rights reserved. See license.txt for license information.
**
** Licensed under the Apache License, Version 2.0 (the "License"); you may not
** use this file except in compliance with the License. You may obtain a copy
** of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
** MERCHANTABLITY OR NON-INFRINGEMENT.
**
** See the Apache 2 License for the specific language governing permissions
** and limitations under the License.
**
**==============================================================================
*/

#ifndef __EVENTWRAPPER_H_
#define __EVENTWRAPPER_H_

#if defined(_MSC_VER)
#include "DscCoreREvents.h"
#else
#ifndef Hex_Int32
#define Hex_Int32 int
#endif
#define NOTINCLUDE_OMILOGGING
#include <base/paths.h>
#endif 


#define WIDEN(x) MI_T(x)
#define __WFUNCTION__ WIDEN(__FUNCTION__)
#define _STRINGEMPTY_ MI_T("")

/*ErrorEventInfo */
typedef struct _ErrorEventInfo
{ 
    const MI_Char *ComponentName; 
    signed int ErrorId ; 
    const MI_Char * ErrorDetail ; 
} ErrorEventInfo;


#ifdef __cplusplus

extern "C" {
#endif

#ifndef _ENGINE_HELPERINTERNAL_H_
#ifndef g_ConfigurationDetails

#define JOB_UUID_LENGTH 40*sizeof(MI_Char)
    typedef struct _ConfigurationDetails
        { 
            MI_Char jobGuidString[JOB_UUID_LENGTH]; 
            MI_Boolean hasSetDetail;
        } ConfigurationDetails;

    extern ConfigurationDetails g_ConfigurationDetails;
#endif
#endif

unsigned long DSC_EventRegister();

unsigned long DSC_EventUnRegister();

#if defined(_MSC_VER)
#define ExpandEvent(eventdefinition) EventWrite ## eventdefinition

#else
#define ExpandEvent(eventdefinition) eventdefinition

#define FILE_EVENT0(eventId, eventName, priority, format)                                               \
PAL_INLINE void eventName(const char * file, int line)                                                  \
{                                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format);                                                  \
}

#define FILE_EVENT1(eventId, eventName, priority, format, T0)                                           \
PAL_INLINE void eventName(const char * file, int line, T0 a0)                                                                            \
{                                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0);                                  \
}

#define FILE_EVENT2(eventId, eventName, priority, format, T0, T1)                                       \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1)                                                                     \
{                                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1);                              \
}

#define FILE_EVENT3(eventId, eventName, priority, format, T0, T1, T2)                                   \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2)                                                              \
{                                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2);                          \
}

#define FILE_EVENT4(eventId, eventName, priority, format, T0, T1, T2, T3)               \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3)                                       \
{                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3);      \
}

#define FILE_EVENT5(eventId, eventName, priority, format, T0, T1, T2, T3, T4)           \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4)                                \
{                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4);  \
}

#define FILE_EVENT6(eventId, eventName, priority, format, T0, T1, T2, T3, T4, T5)           \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5)                             \
{                                                                                           \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4, a5);  \
}

#define FILE_EVENT7(eventId, eventName, priority, format, T0, T1, T2, T3, T4, T5, T6)           \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6)                          \
{                                                                                               \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4, a5, a6);  \
}

#define FILE_EVENT8(eventId, eventName, priority, format, T0, T1, T2, T3, T4, T5, T6, T7)               \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7)                           \
{                                                                                                       \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4, a5, a6, a7);      \
}

#define FILE_EVENT9(eventId, eventName, priority, format, T0, T1, T2, T3, T4, T5, T6, T7, T8)               \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8)                        \
{                                                                                                           \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4, a5, a6, a7, a8);      \
}

#define FILE_EVENT10(eventId, eventName, priority, format, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9)                  \
PAL_INLINE void eventName(const char * file, int line, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9)                         \
{                                                                                                                   \
    DSCFilePutLog(priority, eventId, file, line, format, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);          \
}

void DSCFilePutLog(
    int priority,
    int eventId,
    const char * file,
    int line,
    const PAL_Char* format,
    ...);

#include <eventing/oidsc.h>
#endif

#define DSC_EventWriteLCMSendConfigurationError(ComponentName,ErrorId, ErrorDetail, ResourceId, SourceInfo, errorMessage) \
     ExpandEvent(LCMSendConfigurationError( g_ConfigurationDetails.jobGuidString, ComponentName, ErrorId, ErrorDetail, ResourceId, SourceInfo, errorMessage))

#define DSC_EventWriteDumpMessageFromBuiltinProvider( WMIMessageChannel, ResourceId, MessageBody) \
    ExpandEvent(DumpMessageFromBuiltinProvider( g_ConfigurationDetails.jobGuidString, WMIMessageChannel, ResourceId, MessageBody))

#define DSC_EventWriteMethodStart(MethodName) \
    ExpandEvent(MethodStart(g_ConfigurationDetails.jobGuidString, MethodName))

#define DSC_EventWriteMethodEnd(MethodName) \
    ExpandEvent(MethodEnd( g_ConfigurationDetails.jobGuidString, MethodName))


#define DSC_EventWriteEngineMethodParameters(MethodName, ClassName,ResourceID, Flags, ExecutionMode, Namespace) \
    ExpandEvent(EngineMethodParameters(g_ConfigurationDetails.jobGuidString, MethodName, ClassName, ResourceID, Flags, ExecutionMode, Namespace))

#define DSC_EventWriteMessageFromEngine(WMIMessageChannel, ResourceId, MessageBody) \
    ExpandEvent(MessageFromEngine( g_ConfigurationDetails.jobGuidString, WMIMessageChannel, ResourceId, MessageBody))

#define DSC_EventWriteMessageFromEngineConsistency(MessageBody) \
    ExpandEvent(MessageFromEngineConsistency( g_ConfigurationDetails.jobGuidString, DSC_RESOURCENAME, MessageBody))


#define DSC_EventWriteMessageFromEngineInfo(computerName, userSid) \
    ExpandEvent(LCMRepudiationInfomation( g_ConfigurationDetails.jobGuidString, computerName, userSid))

#define DSC_EventWriteGenericMessageFromBuiltinProvider(ClassName, MessageBody) \
    ExpandEvent(GenericMessageFromBuiltinProvider( g_ConfigurationDetails.jobGuidString, ClassName, MessageBody))

// Pull engine events

//LCMPullEngineError
#define DSC_EventWriteLCMPullEngineError(ComponentName, DownloadManagerName, ErrorId, ErrorDetail) \
    ExpandEvent(LCMPullEngineError( g_ConfigurationDetails.jobGuidString, ComponentName, DownloadManagerName, ErrorId, ErrorDetail))

//LCMPullGetConfigAttempt
#define DSC_EventWriteLCMPullGetConfigAttempt(DownloadManagerName, ConfigurationId) \
    ExpandEvent(LCMPullGetConfigAttempt( g_ConfigurationDetails.jobGuidString, DownloadManagerName, ConfigurationId))

//LCMPullGetModuleAttempt
#define DSC_EventWriteLCMPullGetModuleAttempt(DownloadManagerName, ConfigurationId, Modules) \
    ExpandEvent(LCMPullGetModuleAttempt( g_ConfigurationDetails.jobGuidString, DownloadManagerName, ConfigurationId, Modules))
// LCMPullGetActionAttempt
#define DSC_EventWriteLCMPullGetActionAttempt(DownloadManagerName, ConfigurationId, Checksum, Compliant) \
    ExpandEvent(LCMPullGetActionAttempt( g_ConfigurationDetails.jobGuidString, DownloadManagerName, ConfigurationId, Checksum, Compliant))

// LCMPullGetConfigSuccess
#define DSC_EventWriteLCMPullGetConfigSuccess(DownloadManagerName) \
    ExpandEvent(LCMPullGetConfigSuccess( g_ConfigurationDetails.jobGuidString, DownloadManagerName))

// LCMPullGetModuleSuccess
#define DSC_EventWriteLCMPullGetModuleSuccess(DownloadManagerName) \
    ExpandEvent(LCMPullGetModuleSuccess( g_ConfigurationDetails.jobGuidString, DownloadManagerName))

// LCMPullGetActionSuccess
#define DSC_EventWriteLCMPullGetActionSuccess(ActionStatus, DownloadManagerName) \
    ExpandEvent(LCMPullGetActionSuccess( g_ConfigurationDetails.jobGuidString, ActionStatus, DownloadManagerName))

// LCMConsistencyEngineRunAttempt
#define DSC_EventWriteLCMConsistencyEngineRunAttempt() \
    ExpandEvent(LCMConsistencyEngineRunAttempt( g_ConfigurationDetails.jobGuidString))

// LCMConsistencyEngineRunSuccess
#define DSC_EventWriteLCMConsistencyEngineRunSuccess() \
    ExpandEvent(LCMConsistencyEngineRunSuccess( g_ConfigurationDetails.jobGuidString))



// VerboseMessageFromPsProvider
#define DSC_EventWriteVerboseMessageFromPsProvider(ResourceId, MessageBody) \
    ExpandEvent(VerboseMessageFromPsProvider( g_ConfigurationDetails.jobGuidString, ResourceId, MessageBody))

// DebugMessageFromPsProvider
#define DSC_EventWriteDebugMessageFromPsProvider(ResourceId, MessageBody) \
    ExpandEvent(DebugMessageFromPsProvider( g_ConfigurationDetails.jobGuidString, ResourceId, MessageBody))

// ConfigurationCancelledInTheMiddle
#define DSC_EventWriteConfigurationCancelledInTheMiddle(TotalSize, RemainingSize) \
    ExpandEvent(ConfigurationCancelledInTheMiddle( g_ConfigurationDetails.jobGuidString, TotalSize, RemainingSize))

// PsConfigurationStopped
#define DSC_EventWritePsConfigurationStopped() \
    ExpandEvent(PsConfigurationStopped( g_ConfigurationDetails.jobGuidString))

// NativeProviderWriteProgressError
#define DSC_EventWriteNativeProviderWriteProgressError(ErrorCode) \
    ExpandEvent(NativeProviderWriteProgressError( g_ConfigurationDetails.jobGuidString,  ErrorCode))

// ConfigurationForcelyStopped
#define DSC_EventWriteConfigurationForcelyStopped() \
    ExpandEvent(ConfigurationForcelyStopped( g_ConfigurationDetails.jobGuidString))
// Outputerror
#define DSC_EventWriteCIMError(ErrorMessage, ErrorCode) \
    ExpandEvent(CimError( g_ConfigurationDetails.jobGuidString, ErrorMessage, ErrorCode))
// Analytic Event Process Messages

#define DSC_EventWriteMessageRegisteringModule(ModuleName) \
    ExpandEvent(MessageRegisteringModule( g_ConfigurationDetails.jobGuidString, ModuleName))

#define DSC_EventWriteMessageLoadingInstance(Location) \
    ExpandEvent(MessageLoadingInstance( g_ConfigurationDetails.jobGuidString, Location))

#define DSC_EventWriteValidatingDocInstance() \
    ExpandEvent(ValidatingDocInstance( g_ConfigurationDetails.jobGuidString)) 

#define DSC_EventWriteMessageDeletingInstance(Location) \
    ExpandEvent(MessageDeletingInstance( g_ConfigurationDetails.jobGuidString, Location))

#define DSC_EventWriteMessageParsingConfiguration() \
    ExpandEvent(MessageParsingConfiguration( g_ConfigurationDetails.jobGuidString)) 

#define DSC_EventWriteMessageResolvingDependency() \
    ExpandEvent(MessageResolvingDependency( g_ConfigurationDetails.jobGuidString)) 

#define DSC_EventWriteMessageSettingResourcesOrder(NumOfResources) \
    ExpandEvent(MessageSettingResourcesOrder( g_ConfigurationDetails.jobGuidString, NumOfResources))

#define DSC_EventWriteMessageProcessingResource(resourceIndex, ResourceName) \
    ExpandEvent(MessageProcessingResource( g_ConfigurationDetails.jobGuidString, resourceIndex, ResourceName))

#define DSC_EventWriteMessageGettingMetaConfig() \
    ExpandEvent(MessageGettingMetaConfig( g_ConfigurationDetails.jobGuidString)) 

#define DSC_EventWriteMessageMoveResourceToDesired(ResourceName, className) \
    ExpandEvent(MessageMoveResourceToDesired( g_ConfigurationDetails.jobGuidString, ResourceName, className))

#define DSC_EventWriteMessageSettingMetaConfig() \
    ExpandEvent(MessageSettingMetaConfig( g_ConfigurationDetails.jobGuidString)) 

#define DSC_EventWriteMessageSavingConfig(LocationToSaveIn) \
    ExpandEvent(MessageSavingConfig( g_ConfigurationDetails.jobGuidString, LocationToSaveIn))

#define DSC_EventWriteMessageCopyingConfig(FromLocation, ToLocation) \
    ExpandEvent(MessageCopyingConfig( g_ConfigurationDetails.jobGuidString, FromLocation, ToLocation))

#define DSC_EventWriteMessageApplyingConfig(ConfigLocation) \
    ExpandEvent(MessageApplyingConfig( g_ConfigurationDetails.jobGuidString, ConfigLocation))

#define DSC_EventWriteMessageWaitCurrentConfig() \
    ExpandEvent(MessageWaitCurrentConfig( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteMessageDeletingFile(Location) \
    ExpandEvent(MessageDeletingFile( g_ConfigurationDetails.jobGuidString, Location))

#define DSC_EventWriteMessageExecutingPS(Provider, Resource) \
    ExpandEvent(MessageExecutingPS( g_ConfigurationDetails.jobGuidString, Provider, Resource))

#define DSC_EventWriteMessageExecutingWMI(Provider, Resource) \
    ExpandEvent(MessageExecutingWMI( g_ConfigurationDetails.jobGuidString, Provider, Resource))

#define DSC_EventWriteMessagePsGet(Provider, Resource) \
    ExpandEvent(MessagePsGet( g_ConfigurationDetails.jobGuidString, Provider, Resource))

#define DSC_EventWriteMessageWmiGet(Provider, Resource) \
    ExpandEvent(MessageWmiGet( g_ConfigurationDetails.jobGuidString, Provider, Resource))

#define DSC_EventWriteMessageInvokingSession(Namespace, Classname, MethodName) \
    ExpandEvent(MessageInvokingSession( g_ConfigurationDetails.jobGuidString, Namespace, Classname, MethodName))

#define DSC_EventWriteMessageGetSchemaPath() \
    ExpandEvent(MessageGetSchemaPath( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteMSFTMethodParameters(FunctionName, Namespace, Classname, MethodName) \
    ExpandEvent(MSFTMethodParameters( g_ConfigurationDetails.jobGuidString, FunctionName, Namespace, Classname, MethodName))

#define DSC_EventWriteLocalConfigMethodParameters(FunctionName, DataSize, Flags, ExecutionMode) \
    ExpandEvent(LocalConfigMethodParameters( g_ConfigurationDetails.jobGuidString, FunctionName, DataSize, Flags, ExecutionMode))

#define DSC_EventWriteValidatingDSCDocInstance(InstanceArraySize, flags) \
    ExpandEvent(ValidatingDSCDocInstance( g_ConfigurationDetails.jobGuidString, InstanceArraySize, flags))

#define DSC_EventWriteValidatingDSCProviderSchema(ClassArraySize) \
    ExpandEvent(ValidatingDSCProviderSchema( g_ConfigurationDetails.jobGuidString, ClassArraySize))

#define DSC_EventWriteValidatingSchema(ClassToCheck, ClassIndex, ClassArraySize) \
    ExpandEvent(ValidatingSchema( g_ConfigurationDetails.jobGuidString, ClassToCheck, ClassIndex, ClassArraySize))

#define DSC_EventWriteValidatingProviderRegistration(ClassArraySize, RegistrationArraySize) \
    ExpandEvent(ValidatingProviderRegistration( g_ConfigurationDetails.jobGuidString, ClassArraySize, RegistrationArraySize))

#define DSC_EventWriteValidatingInfrastructureSchema(ClassArraySize) \
    ExpandEvent(ValidatingInfrastructureSchema( g_ConfigurationDetails.jobGuidString, ClassArraySize))

#define DSC_EventWriteValidatingDSCProviderRegistrationInstance(ClassName) \
    ExpandEvent(ValidatingDSCProviderRegistrationInstance( g_ConfigurationDetails.jobGuidString, ClassName))

#define DSC_EventWriteValidatingClassProperty(PropertyName, ClassName) \
    ExpandEvent(ValidatingClassProperty( g_ConfigurationDetails.jobGuidString, PropertyName, ClassName))

#define DSC_EventWriteDeleteFileFailed(AttemptNumber, FilePath, lastError, errorMessage) \
    ExpandEvent(DeleteFileFailed( g_ConfigurationDetails.jobGuidString, AttemptNumber, FilePath, lastError, errorMessage))

//Messages output in the operational channel
#define DSC_EventWriteMessageScheduleTaskAfterReboot() \
    ExpandEvent(MessageScheduleTaskAfterReboot( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteRestartedMachine() \
    ExpandEvent(RestartedMachine( g_ConfigurationDetails.jobGuidString))


#define DSC_EventWriteMessageScheduleReboot() \
    ExpandEvent(MessageScheduleReboot( g_ConfigurationDetails.jobGuidString))


#define DSC_EventWriteNotRegisteredForPull() \
    ExpandEvent(NotRegisteredForPull( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteFailedToRegisterConsistencyTask() \
    ExpandEvent(FailedToRegisterConsistencyTask( g_ConfigurationDetails.jobGuidString)) 


#define DSC_EventWriteFailedToRegisterPullServerTask() \
    ExpandEvent(FailedToRegisterPullServerTask( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteCopyConfigurationFailed(FromLocation, ToLocation) \
    ExpandEvent(CopyConfigurationFailed( g_ConfigurationDetails.jobGuidString, FromLocation, ToLocation))


#define DSC_EventWriteDeleteCurrentConfigFailed() \
    ExpandEvent(DeleteCurrentConfigFailed( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteRestoringConfiguration() \
    ExpandEvent(RestoringConfiguration( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteReadingMOFFile(FileName) \
    ExpandEvent(ReadingMOFFile( g_ConfigurationDetails.jobGuidString, FileName))


#define DSC_EventWriteLCMConsistencyEngineNoCurrentPending() \
    ExpandEvent(LCMConsistencyEngineNoCurrentPending( g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMPullModuleChecksumValidationResult(Module, StatusCode) \
    ExpandEvent(LCMPullModuleChecksumValidationResult( g_ConfigurationDetails.jobGuidString, Module, StatusCode))

#define DSC_EventWriteLCMPullModuleContentValidationResult(Module, StatusCode) \
    ExpandEvent(LCMPullModuleContentValidationResult( g_ConfigurationDetails.jobGuidString, Module, StatusCode))

#define DSC_EventWriteLCMPullModuleDownloadLocation(Module, DownloadLocation) \
    ExpandEvent(LCMPullModuleDownloadLocation( g_ConfigurationDetails.jobGuidString, Module, DownloadLocation))

#define DSC_EventWriteLCMPullModuleInstallLocation(Module, InstallLocation) \
    ExpandEvent(LCMPullModuleInstallLocation( g_ConfigurationDetails.jobGuidString, Module, InstallLocation))

#define DSC_EventWriteGetDscModuleWebDownloadManagerServerUrl(Module, ServerUrl) \
    ExpandEvent(GetDscModuleWebDownloadManagerServerUrl( g_ConfigurationDetails.jobGuidString, Module, ServerUrl))

#define DSC_EventWriteGetDscDocumentWebDownloadManagerServerUrl(ConfigurationId, ServerUrl) \
    ExpandEvent(GetDscDocumentWebDownloadManagerServerUrl( g_ConfigurationDetails.jobGuidString, ConfigurationId, ServerUrl))

#define DSC_EventWriteLCMPullConfigurationChecksumValidationResult(ConfigurationId, StatusCode) \
    ExpandEvent(LCMPullConfigurationChecksumValidationResult( g_ConfigurationDetails.jobGuidString, ConfigurationId, StatusCode))

#define DSC_EventWriteLCMPullConfigurationInvalidConfigurationFormat(ConfigurationId) \
    ExpandEvent(LCMPullConfigurationInvalidConfigurationFormat( g_ConfigurationDetails.jobGuidString, ConfigurationId))

#define DSC_EventWriteLCMPullModuleInvalidVersionFormat(ModuleName, ModuleVersion) \
    ExpandEvent(LCMPullModuleInvalidVersionFormat( g_ConfigurationDetails.jobGuidString, ModuleName, ModuleVersion))

#define DSC_EventWriteLCMPullModuleSkippedAsModuleIsAvailable(ModuleName, ModuleVersion, ModulePath) \
    ExpandEvent(LCMPullModuleSkippedAsModuleIsAvailable( g_ConfigurationDetails.jobGuidString, ModuleName, ModuleVersion, ModulePath))

#define DSC_EventWriteWebDownloadManagerDoActionServerUrl(ConfigurationId, ServerUrl) \
    ExpandEvent(WebDownloadManagerDoActionServerUrl( g_ConfigurationDetails.jobGuidString, ConfigurationId, ServerUrl))

#define DSC_EventWriteWebDownloadManagerDoActionGetUrl(ConfigurationId, RelativeUrl) \
    ExpandEvent(WebDownloadManagerDoActionGetUrl( g_ConfigurationDetails.jobGuidString, ConfigurationId, RelativeUrl))

#define DSC_EventWriteWebDownloadManagerDoActionGetCall(ConfigurationId, OutputResult) \
    ExpandEvent(WebDownloadManagerDoActionGetCall( g_ConfigurationDetails.jobGuidString, ConfigurationId, OutputResult))

#define DSC_EventWriteWebDownloadManagerGetDocGetUrl(ConfigurationId, RelativeUrl) \
    ExpandEvent(WebDownloadManagerGetDocGetUrl( g_ConfigurationDetails.jobGuidString, ConfigurationId, RelativeUrl))

#define DSC_EventWriteWebDownloadManagerGetDocGetCall(ConfigurationId, OutputResult) \
    ExpandEvent(WebDownloadManagerGetDocGetCall( g_ConfigurationDetails.jobGuidString, ConfigurationId, OutputResult))

#define DSC_EventWriteWebDownloadManagerDoActionCertId(ConfigurationId, CertificateId) \
    ExpandEvent(WebDownloadManagerDoActionCertId(g_ConfigurationDetails.jobGuidString, ConfigurationId, CertificateId))

#define DSC_EventWriteWebDownloadManagerDoActionHttpClient(ConfigurationId, errorString) \
    ExpandEvent(WebDownloadManagerDoActionHttpClient(g_ConfigurationDetails.jobGuidString, ConfigurationId, errorString))

#define DSC_EventWriteWebDownloadManagerGetDocHttpClient(ConfigurationId, OutputResult) \
    ExpandEvent(WebDownloadManagerGetDocHttpClient( g_ConfigurationDetails.jobGuidString, ConfigurationId, OutputResult))

#define DSC_EventWriteWebDownloadManagerGetDocChecksumValidation(ConfigurationId, OutputResult) \
    ExpandEvent(WebDownloadManagerGetDocChecksumValidation( g_ConfigurationDetails.jobGuidString, ConfigurationId, OutputResult))

#define DSC_EventWriteWebDownloadManagerGetDocFileSave(ConfigurationId, FilePath) \
    ExpandEvent(WebDownloadManagerGetDocFileSave( g_ConfigurationDetails.jobGuidString, ConfigurationId, FilePath))

//*********************PARTIAL CONFIGURATION EVENTS ********************//
#define DSC_EventWriteLCMPullingPartial(partialConfigName) \
    ExpandEvent(LCMPullingPartial(g_ConfigurationDetails.jobGuidString, partialConfigName))

#define DSC_EventWriteLCMApplyingPartial(PartialConfigName) \
    ExpandEvent(LCMApplyingPartial(g_ConfigurationDetails.jobGuidString, PartialConfigName))

#define DSC_EventWriteLCMIdentifiedModePartial() \
    ExpandEvent(LCMIdentifiedModePartial(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMAboutToMergePartial() \
    ExpandEvent(LCMAboutToMergePartial(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMMergingPartialConfiguration(PartialConfigurationName) \
    ExpandEvent(LCMMergingPartialConfiguration(g_ConfigurationDetails.jobGuidString, PartialConfigurationName))

#define DSC_EventWriteLCMValidatingPartialConfiguration(PartialConfigurationName) \
    ExpandEvent(LCMValidatingPartialConfiguration(g_ConfigurationDetails.jobGuidString, PartialConfigurationName))
        
#define DSC_EventWriteLCMValidatingMergedPartial() \
    ExpandEvent(LCMValidatingMergedPartial(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMValidatingMetaConfPartial() \
    ExpandEvent(LCMValidatingMetaConfPartial(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMValidatingPartialConfigName(partialConfigName) \
    ExpandEvent(LCMValidatingPartialConfigName(g_ConfigurationDetails.jobGuidString, partialConfigName))

#define DSC_EventWriteLCMValidatingPartialConfigMetaConfDownloadMgr() \
    ExpandEvent(LCMValidatingPartialConfigMetaConfDownloadMgr(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMValidatingPartialConfigMetaConfExclusiveResources() \
    ExpandEvent(LCMValidatingPartialConfigMetaConfExclusiveResources(g_ConfigurationDetails.jobGuidString))

#define DSC_EventWriteLCMValidatingPartialExclusiveResourceStringDefintion(exclusiveResourceString) \
    ExpandEvent(LCMValidatingPartialExclusiveResourceStringDefintion(g_ConfigurationDetails.jobGuidString, exclusiveResourceString))

#define DSC_EventWritePartialConfigurationNotAvailable(PartialConfigurationName) \
    ExpandEvent(PartialConfigurationNotAvailable( g_ConfigurationDetails.jobGuidString, PartialConfigurationName))


#define DSC_EventWriteCUMethodWarning(WarningMessage) \
        ExpandEvent(CUMethodWarning( g_ConfigurationDetails.jobGuidString, WarningMessage))



#ifdef __cplusplus

}

#endif

#endif //__EVENTWRAPPER_H_
