//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFMXINSTR-RESTRICTED
//---------------------------------------------------------------------
#ifndef NIRFMXINSTR_RESTRICTED_GRPC_LIBRARY_H
#define NIRFMXINSTR_RESTRICTED_GRPC_LIBRARY_H

#include "nirfmxinstr_restricted_library_interface.h"

#include <server/shared_library.h>

namespace nirfmxinstr_restricted_grpc {

class NiRFmxInstrRestrictedLibrary : public nirfmxinstr_restricted_grpc::NiRFmxInstrRestrictedLibraryInterface {
 public:
  NiRFmxInstrRestrictedLibrary();
  virtual ~NiRFmxInstrRestrictedLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 ConvertForPowerUnitsUtility(niRFmxInstrHandle instrumentHandle, float64 referenceOrTriggerLevelIn, int32 inputPowerUnits, int32 outputPowerUnits, int32 terminalConfiguration, float64 bandwidth, float64* referenceOrTriggerLevelOut);
  int32 DeleteSnapshot(niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[]);
  int32 GetActiveResultName(niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32 resultSize, char resultName[], int32* actualResultSize, int32* resultState);
  int32 GetActiveTableName(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char activeTableName[]);
  int32 GetAttributeAuthor(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal);
  int32 GetAttributeDesiredF32(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32* attrVal);
  int32 GetAttributeDesiredF32Array(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeDesiredF64(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64* attrVal);
  int32 GetAttributeDesiredF64Array(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeDesiredI32(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32* attrVal);
  int32 GetAttributeDesiredI64(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int64* attrVal);
  int32 GetAttributeDesiredString(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32 arraySize, char attrVal[]);
  int32 GetCalibrationPlaneEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* calibrationPlaneEnabled);
  int32 GetCalibrationPlaneNames(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calibrationPlaneNames[]);
  int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 GetExternalAttenuationTableNames(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char externalAttenuationTableNames[]);
  int32 GetForceAllTracesEnabled(niRFmxInstrHandle instrumentHandle, char channelName[], int32* attrVal);
  int32 GetInitiaitedSnapshotStrings(niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32 personalityIDArray[], int32 personalityIDArraySize, int32* personalityIDArrayActualSize, char signalNames[], int32 signalNamesSize, int32* signalNamesActualSize, char resultNames[], int32 resultNamesSize, int32* resultNamesActualSize, char snapshotIdentifiers[], int32 snapshotIdentifiersSize, int32* snapshotIdentifiersActualSize, uInt64 snapshotTimestampArray[], int32 snapshotTimestampArraySize, int32* snapshotTimestampArrayActualSize);
  int32 GetLatestConfigurationSnapshot(niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32* personalityID, char signalName[], int32 signalNameSize, int32* signalNameActualSize, char snapshotIdentifier[], int32 snapshotIdentifierSize, int32* snapshotIdentifierActualSize, int32* signalConfigurationState, uInt64* signalTimestamp);
  int32 GetOpenSessionsInformation(char resourceName[], int32 infoJsonSize, char infoJson[]);
  int32 GetPrivilegeLevel(niRFmxInstrHandle instrumentHandle, int32* isConnectionAlive, int32* privilegeLevel);
  int32 GetRFmxVersion(niRFmxInstrHandle instrumentHandle, int32 arraySize, char RFmxVersion[]);
  int32 GetSignalConfigurationState64(niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32* signalState, uInt64* timeStamp);
  int32 GetSnapshotState(niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[], int32* snapshotState);
  int32 GetTracesInfoForMonitorSnapshot(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* allTracesEnabled);
  int32 LoadAllForRevert(niRFmxInstrHandle instrumentHandle, char filePath[]);
  int32 LoadConfigurationsFromJSON(niRFmxInstrHandle instrumentHandle, char jsonString[], int32 arraySize);
  int32 RegisterSpecialClientSnapshotInterest(char resourceName[]);
  int32 RequestPrivilege(niRFmxInstrHandle instrumentHandle, int32 privilegeLevel);
  int32 SaveAllForRevert(niRFmxInstrHandle instrumentHandle, char filePath[]);
  int32 SaveConfigurationsToJSON(niRFmxInstrHandle instrumentHandle, char signalNames[], char jsonStringOut[], int32 arraySize, int32* actualArraySize);
  int32 SetForceAllTracesEnabled(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attrVal);
  int32 SetIOTraceStatus(niRFmxInstrHandle instrumentHandle, int32 IOTraceStatus);
  int32 UnregisterSpecialClientSnapshotInterest(char resourceName[]);

 private:
  using ConvertForPowerUnitsUtilityPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, float64 referenceOrTriggerLevelIn, int32 inputPowerUnits, int32 outputPowerUnits, int32 terminalConfiguration, float64 bandwidth, float64* referenceOrTriggerLevelOut);
  using DeleteSnapshotPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[]);
  using GetActiveResultNamePtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32 resultSize, char resultName[], int32* actualResultSize, int32* resultState);
  using GetActiveTableNamePtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char activeTableName[]);
  using GetAttributeAuthorPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal);
  using GetAttributeDesiredF32Ptr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32* attrVal);
  using GetAttributeDesiredF32ArrayPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize);
  using GetAttributeDesiredF64Ptr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64* attrVal);
  using GetAttributeDesiredF64ArrayPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize);
  using GetAttributeDesiredI32Ptr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32* attrVal);
  using GetAttributeDesiredI64Ptr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int64* attrVal);
  using GetAttributeDesiredStringPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32 arraySize, char attrVal[]);
  using GetCalibrationPlaneEnabledPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* calibrationPlaneEnabled);
  using GetCalibrationPlaneNamesPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calibrationPlaneNames[]);
  using GetErrorPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  using GetErrorStringPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  using GetExternalAttenuationTableNamesPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char externalAttenuationTableNames[]);
  using GetForceAllTracesEnabledPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32* attrVal);
  using GetInitiaitedSnapshotStringsPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32 personalityIDArray[], int32 personalityIDArraySize, int32* personalityIDArrayActualSize, char signalNames[], int32 signalNamesSize, int32* signalNamesActualSize, char resultNames[], int32 resultNamesSize, int32* resultNamesActualSize, char snapshotIdentifiers[], int32 snapshotIdentifiersSize, int32* snapshotIdentifiersActualSize, uInt64 snapshotTimestampArray[], int32 snapshotTimestampArraySize, int32* snapshotTimestampArrayActualSize);
  using GetLatestConfigurationSnapshotPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32* personalityID, char signalName[], int32 signalNameSize, int32* signalNameActualSize, char snapshotIdentifier[], int32 snapshotIdentifierSize, int32* snapshotIdentifierActualSize, int32* signalConfigurationState, uInt64* signalTimestamp);
  using GetOpenSessionsInformationPtr = int32 (*)(char resourceName[], int32 infoJsonSize, char infoJson[]);
  using GetPrivilegeLevelPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32* isConnectionAlive, int32* privilegeLevel);
  using GetRFmxVersionPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 arraySize, char RFmxVersion[]);
  using GetSignalConfigurationState64Ptr = int32 (*)(niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32* signalState, uInt64* timeStamp);
  using GetSnapshotStatePtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[], int32* snapshotState);
  using GetTracesInfoForMonitorSnapshotPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* allTracesEnabled);
  using LoadAllForRevertPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char filePath[]);
  using LoadConfigurationsFromJSONPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char jsonString[], int32 arraySize);
  using RegisterSpecialClientSnapshotInterestPtr = int32 (*)(char resourceName[]);
  using RequestPrivilegePtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 privilegeLevel);
  using SaveAllForRevertPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char filePath[]);
  using SaveConfigurationsToJSONPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char signalNames[], char jsonStringOut[], int32 arraySize, int32* actualArraySize);
  using SetForceAllTracesEnabledPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char channelName[], int32 attrVal);
  using SetIOTraceStatusPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 IOTraceStatus);
  using UnregisterSpecialClientSnapshotInterestPtr = int32 (*)(char resourceName[]);

  typedef struct FunctionPointers {
    ConvertForPowerUnitsUtilityPtr ConvertForPowerUnitsUtility;
    DeleteSnapshotPtr DeleteSnapshot;
    GetActiveResultNamePtr GetActiveResultName;
    GetActiveTableNamePtr GetActiveTableName;
    GetAttributeAuthorPtr GetAttributeAuthor;
    GetAttributeDesiredF32Ptr GetAttributeDesiredF32;
    GetAttributeDesiredF32ArrayPtr GetAttributeDesiredF32Array;
    GetAttributeDesiredF64Ptr GetAttributeDesiredF64;
    GetAttributeDesiredF64ArrayPtr GetAttributeDesiredF64Array;
    GetAttributeDesiredI32Ptr GetAttributeDesiredI32;
    GetAttributeDesiredI64Ptr GetAttributeDesiredI64;
    GetAttributeDesiredStringPtr GetAttributeDesiredString;
    GetCalibrationPlaneEnabledPtr GetCalibrationPlaneEnabled;
    GetCalibrationPlaneNamesPtr GetCalibrationPlaneNames;
    GetErrorPtr GetError;
    GetErrorStringPtr GetErrorString;
    GetExternalAttenuationTableNamesPtr GetExternalAttenuationTableNames;
    GetForceAllTracesEnabledPtr GetForceAllTracesEnabled;
    GetInitiaitedSnapshotStringsPtr GetInitiaitedSnapshotStrings;
    GetLatestConfigurationSnapshotPtr GetLatestConfigurationSnapshot;
    GetOpenSessionsInformationPtr GetOpenSessionsInformation;
    GetPrivilegeLevelPtr GetPrivilegeLevel;
    GetRFmxVersionPtr GetRFmxVersion;
    GetSignalConfigurationState64Ptr GetSignalConfigurationState64;
    GetSnapshotStatePtr GetSnapshotState;
    GetTracesInfoForMonitorSnapshotPtr GetTracesInfoForMonitorSnapshot;
    LoadAllForRevertPtr LoadAllForRevert;
    LoadConfigurationsFromJSONPtr LoadConfigurationsFromJSON;
    RegisterSpecialClientSnapshotInterestPtr RegisterSpecialClientSnapshotInterest;
    RequestPrivilegePtr RequestPrivilege;
    SaveAllForRevertPtr SaveAllForRevert;
    SaveConfigurationsToJSONPtr SaveConfigurationsToJSON;
    SetForceAllTracesEnabledPtr SetForceAllTracesEnabled;
    SetIOTraceStatusPtr SetIOTraceStatus;
    UnregisterSpecialClientSnapshotInterestPtr UnregisterSpecialClientSnapshotInterest;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfmxinstr_restricted_grpc

#endif  // NIRFMXINSTR_RESTRICTED_GRPC_LIBRARY_H
