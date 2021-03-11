//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SCOPE
//---------------------------------------------------------------------
#ifndef GRPC_NISCOPE_LIBRARY_H
#define GRPC_NISCOPE_LIBRARY_H

#include "niscope_library_interface.h"

#include <server/shared_library.h>

namespace grpc {
namespace niscope {

class NiScopeLibrary : public grpc::niscope::NiScopeLibraryInterface {
 public:
  NiScopeLibrary();
  virtual ~NiScopeLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus AcquisitionStatus(ViSession vi, ViInt32* acquisitionStatus);
  ViStatus ActualMeasWfmSize(ViSession vi, ViInt32 arrayMeasFunction, ViInt32* measWaveformSize);
  ViStatus ActualNumWfms(ViSession vi, ViConstString channelList, ViInt32* numWfms);
  ViStatus ActualRecordLength(ViSession vi, ViInt32* recordLength);
  ViStatus AddWaveformProcessing(ViSession vi, ViConstString channelList, ViInt32 measFunction);
  ViStatus AdjustSampleClockRelativeDelay(ViSession vi, ViReal64 delay);
  ViStatus AutoSetup(ViSession vi);
  ViStatus CableSenseSignalStart(ViSession vi);
  ViStatus CableSenseSignalStop(ViSession vi);
  ViStatus CalSelfCalibrate(ViSession vi, ViConstString channelList, ViInt32 option);
  ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  ViStatus CheckAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession value);
  ViStatus CheckAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  ViStatus ClearWaveformMeasurementStats(ViSession vi, ViConstString channelList, ViInt32 clearableMeasurementFunction);
  ViStatus ClearWaveformProcessing(ViSession vi, ViConstString channelList);
  ViStatus Close(ViSession vi);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureAcquisition(ViSession vi, ViInt32 acquisitionType);
  ViStatus ConfigureChanCharacteristics(ViSession vi, ViConstString channelList, ViReal64 inputImpedance, ViReal64 maxInputFrequency);
  ViStatus ConfigureClock(ViSession vi, ViConstString inputClockSource, ViConstString outputClockSource, ViConstString clockSyncPulseSource, ViBoolean masterEnabled);
  ViStatus ConfigureEqualizationFilterCoefficients(ViSession vi, ViConstString channelList, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  ViStatus ConfigureHorizontalTiming(ViSession vi, ViReal64 minSampleRate, ViInt32 minNumPts, ViReal64 refPosition, ViInt32 numRecords, ViBoolean enforceRealtime);
  ViStatus ConfigureTriggerDigital(ViSession vi, ViConstString triggerSource, ViInt32 slope, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerEdge(ViSession vi, ViConstString triggerSource, ViReal64 level, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerGlitch(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 width, ViInt32 polarity, ViInt32 glitchCondition, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerHysteresis(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 hysteresis, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerImmediate(ViSession vi);
  ViStatus ConfigureTriggerRunt(ViSession vi, ViConstString triggerSource, ViReal64 lowThreshold, ViReal64 highThreshold, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerSoftware(ViSession vi, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerVideo(ViSession vi, ViConstString triggerSource, ViBoolean enableDcRestore, ViInt32 signalFormat, ViInt32 eventParameter, ViInt32 lineNumber, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerWidth(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 lowThreshold, ViReal64 highThreshold, ViInt32 polarity, ViInt32 condition, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerWindow(ViSession vi, ViConstString triggerSource, ViReal64 lowLevel, ViReal64 highLevel, ViInt32 windowMode, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureVertical(ViSession vi, ViConstString channelList, ViReal64 range, ViReal64 offset, ViInt32 coupling, ViReal64 probeAttenuation, ViBoolean enabled);
  ViStatus Disable(ViSession vi);
  ViStatus ErrorHandler(ViSession vi, ViStatus errorCode, ViChar errorSource[642], ViChar errorDescription[642]);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus Fetch(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchArrayMeasurement(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 arrayMeasFunction, ViInt32 measurementWaveformSize, ViReal64 measWfm[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary16(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt16 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary32(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt32 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary8(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt8 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchComplex(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, NIComplexNumber_struct wfm[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchComplexBinary16(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, NIComplexI16_struct wfm[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchMeasurement(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[]);
  ViStatus FetchMeasurementStats(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[], ViReal64 mean[], ViReal64 stdev[], ViReal64 min[], ViReal64 max[], ViInt32 numInStats[]);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean* value);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32* value);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64* value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64* value);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession* value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 bufSize, ViChar value[]);
  ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]);
  ViStatus GetChannelNameFromString(ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar name[]);
  ViStatus GetEqualizationFilterCoefficients(ViSession vi, ViConstString channel, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetErrorMessage(ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]);
  ViStatus GetFrequencyResponse(ViSession vi, ViConstString channel, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 amplitudes[], ViReal64 phases[], ViInt32* numberOfFrequencies);
  ViStatus GetNormalizationCoefficients(ViSession vi, ViConstString channelList, ViInt32 bufferSize, niScope_coefficientInfo coefficientInfo[], ViInt32* numberOfCoefficientSets);
  ViStatus GetScalingCoefficients(ViSession vi, ViConstString channelList, ViInt32 bufferSize, niScope_coefficientInfo coefficientInfo[], ViInt32* numberOfCoefficientSets);
  ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamName, ViUInt32* writerHandle);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus InitiateAcquisition(ViSession vi);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus ProbeCompensationSignalStart(ViSession vi);
  ViStatus ProbeCompensationSignalStop(ViSession vi);
  ViStatus Read(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus ReadMeasurement(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[]);
  ViStatus Reset(ViSession vi);
  ViStatus ResetDevice(ViSession vi);
  ViStatus RevisionQuery(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]);
  ViStatus SampleMode(ViSession vi, ViInt32* sampleMode);
  ViStatus SampleRate(ViSession vi, ViReal64* sampleRate);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareTriggerEdge(ViSession vi, ViInt32 whichTrigger);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession value);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);

 private:
  using AbortPtr = ViStatus (*)(ViSession vi);
  using AcquisitionStatusPtr = ViStatus (*)(ViSession vi, ViInt32* acquisitionStatus);
  using ActualMeasWfmSizePtr = ViStatus (*)(ViSession vi, ViInt32 arrayMeasFunction, ViInt32* measWaveformSize);
  using ActualNumWfmsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32* numWfms);
  using ActualRecordLengthPtr = ViStatus (*)(ViSession vi, ViInt32* recordLength);
  using AddWaveformProcessingPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 measFunction);
  using AdjustSampleClockRelativeDelayPtr = ViStatus (*)(ViSession vi, ViReal64 delay);
  using AutoSetupPtr = ViStatus (*)(ViSession vi);
  using CableSenseSignalStartPtr = ViStatus (*)(ViSession vi);
  using CableSenseSignalStopPtr = ViStatus (*)(ViSession vi);
  using CalSelfCalibratePtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 option);
  using CheckAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  using CheckAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  using CheckAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  using CheckAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  using CheckAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession value);
  using CheckAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  using ClearWaveformMeasurementStatsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 clearableMeasurementFunction);
  using ClearWaveformProcessingPtr = ViStatus (*)(ViSession vi, ViConstString channelList);
  using ClosePtr = ViStatus (*)(ViSession vi);
  using CommitPtr = ViStatus (*)(ViSession vi);
  using ConfigureAcquisitionPtr = ViStatus (*)(ViSession vi, ViInt32 acquisitionType);
  using ConfigureChanCharacteristicsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 inputImpedance, ViReal64 maxInputFrequency);
  using ConfigureClockPtr = ViStatus (*)(ViSession vi, ViConstString inputClockSource, ViConstString outputClockSource, ViConstString clockSyncPulseSource, ViBoolean masterEnabled);
  using ConfigureEqualizationFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  using ConfigureHorizontalTimingPtr = ViStatus (*)(ViSession vi, ViReal64 minSampleRate, ViInt32 minNumPts, ViReal64 refPosition, ViInt32 numRecords, ViBoolean enforceRealtime);
  using ConfigureTriggerDigitalPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViInt32 slope, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerEdgePtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerGlitchPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 width, ViInt32 polarity, ViInt32 glitchCondition, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerHysteresisPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 hysteresis, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerImmediatePtr = ViStatus (*)(ViSession vi);
  using ConfigureTriggerRuntPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 lowThreshold, ViReal64 highThreshold, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerSoftwarePtr = ViStatus (*)(ViSession vi, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerVideoPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViBoolean enableDcRestore, ViInt32 signalFormat, ViInt32 eventParameter, ViInt32 lineNumber, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerWidthPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 lowThreshold, ViReal64 highThreshold, ViInt32 polarity, ViInt32 condition, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerWindowPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 lowLevel, ViReal64 highLevel, ViInt32 windowMode, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureVerticalPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 range, ViReal64 offset, ViInt32 coupling, ViReal64 probeAttenuation, ViBoolean enabled);
  using DisablePtr = ViStatus (*)(ViSession vi);
  using ErrorHandlerPtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViChar errorSource[642], ViChar errorDescription[642]);
  using ExportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using ExportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using ExportSignalPtr = ViStatus (*)(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  using FetchPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchArrayMeasurementPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 arrayMeasFunction, ViInt32 measurementWaveformSize, ViReal64 measWfm[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary16Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt16 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt32 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary8Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt8 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchComplexPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, NIComplexNumber_struct wfm[], niScope_wfmInfo wfmInfo[]);
  using FetchComplexBinary16Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, NIComplexI16_struct wfm[], niScope_wfmInfo wfmInfo[]);
  using FetchMeasurementPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[]);
  using FetchMeasurementStatsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[], ViReal64 mean[], ViReal64 stdev[], ViReal64 min[], ViReal64 max[], ViInt32 numInStats[]);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean* value);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32* value);
  using GetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64* value);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64* value);
  using GetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession* value);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 bufSize, ViChar value[]);
  using GetChannelNamePtr = ViStatus (*)(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]);
  using GetChannelNameFromStringPtr = ViStatus (*)(ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar name[]);
  using GetEqualizationFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channel, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  using GetErrorMessagePtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]);
  using GetFrequencyResponsePtr = ViStatus (*)(ViSession vi, ViConstString channel, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 amplitudes[], ViReal64 phases[], ViInt32* numberOfFrequencies);
  using GetNormalizationCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 bufferSize, niScope_coefficientInfo coefficientInfo[], ViInt32* numberOfCoefficientSets);
  using GetScalingCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 bufferSize, niScope_coefficientInfo coefficientInfo[], ViInt32* numberOfCoefficientSets);
  using GetStreamEndpointHandlePtr = ViStatus (*)(ViSession vi, ViConstString streamName, ViUInt32* writerHandle);
  using ImportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using ImportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using InitPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  using InitWithOptionsPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  using InitiateAcquisitionPtr = ViStatus (*)(ViSession vi);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using ProbeCompensationSignalStartPtr = ViStatus (*)(ViSession vi);
  using ProbeCompensationSignalStopPtr = ViStatus (*)(ViSession vi);
  using ReadPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  using ReadMeasurementPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[]);
  using ResetPtr = ViStatus (*)(ViSession vi);
  using ResetDevicePtr = ViStatus (*)(ViSession vi);
  using RevisionQueryPtr = ViStatus (*)(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]);
  using SampleModePtr = ViStatus (*)(ViSession vi, ViInt32* sampleMode);
  using SampleRatePtr = ViStatus (*)(ViSession vi, ViReal64* sampleRate);
  using SelfTestPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  using SendSoftwareTriggerEdgePtr = ViStatus (*)(ViSession vi, ViInt32 whichTrigger);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  using SetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  using SetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViSession value);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    AcquisitionStatusPtr AcquisitionStatus;
    ActualMeasWfmSizePtr ActualMeasWfmSize;
    ActualNumWfmsPtr ActualNumWfms;
    ActualRecordLengthPtr ActualRecordLength;
    AddWaveformProcessingPtr AddWaveformProcessing;
    AdjustSampleClockRelativeDelayPtr AdjustSampleClockRelativeDelay;
    AutoSetupPtr AutoSetup;
    CableSenseSignalStartPtr CableSenseSignalStart;
    CableSenseSignalStopPtr CableSenseSignalStop;
    CalSelfCalibratePtr CalSelfCalibrate;
    CheckAttributeViBooleanPtr CheckAttributeViBoolean;
    CheckAttributeViInt32Ptr CheckAttributeViInt32;
    CheckAttributeViInt64Ptr CheckAttributeViInt64;
    CheckAttributeViReal64Ptr CheckAttributeViReal64;
    CheckAttributeViSessionPtr CheckAttributeViSession;
    CheckAttributeViStringPtr CheckAttributeViString;
    ClearWaveformMeasurementStatsPtr ClearWaveformMeasurementStats;
    ClearWaveformProcessingPtr ClearWaveformProcessing;
    ClosePtr Close;
    CommitPtr Commit;
    ConfigureAcquisitionPtr ConfigureAcquisition;
    ConfigureChanCharacteristicsPtr ConfigureChanCharacteristics;
    ConfigureClockPtr ConfigureClock;
    ConfigureEqualizationFilterCoefficientsPtr ConfigureEqualizationFilterCoefficients;
    ConfigureHorizontalTimingPtr ConfigureHorizontalTiming;
    ConfigureTriggerDigitalPtr ConfigureTriggerDigital;
    ConfigureTriggerEdgePtr ConfigureTriggerEdge;
    ConfigureTriggerGlitchPtr ConfigureTriggerGlitch;
    ConfigureTriggerHysteresisPtr ConfigureTriggerHysteresis;
    ConfigureTriggerImmediatePtr ConfigureTriggerImmediate;
    ConfigureTriggerRuntPtr ConfigureTriggerRunt;
    ConfigureTriggerSoftwarePtr ConfigureTriggerSoftware;
    ConfigureTriggerVideoPtr ConfigureTriggerVideo;
    ConfigureTriggerWidthPtr ConfigureTriggerWidth;
    ConfigureTriggerWindowPtr ConfigureTriggerWindow;
    ConfigureVerticalPtr ConfigureVertical;
    DisablePtr Disable;
    ErrorHandlerPtr ErrorHandler;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    ExportSignalPtr ExportSignal;
    FetchPtr Fetch;
    FetchArrayMeasurementPtr FetchArrayMeasurement;
    FetchBinary16Ptr FetchBinary16;
    FetchBinary32Ptr FetchBinary32;
    FetchBinary8Ptr FetchBinary8;
    FetchComplexPtr FetchComplex;
    FetchComplexBinary16Ptr FetchComplexBinary16;
    FetchMeasurementPtr FetchMeasurement;
    FetchMeasurementStatsPtr FetchMeasurementStats;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetChannelNamePtr GetChannelName;
    GetChannelNameFromStringPtr GetChannelNameFromString;
    GetEqualizationFilterCoefficientsPtr GetEqualizationFilterCoefficients;
    GetErrorPtr GetError;
    GetErrorMessagePtr GetErrorMessage;
    GetFrequencyResponsePtr GetFrequencyResponse;
    GetNormalizationCoefficientsPtr GetNormalizationCoefficients;
    GetScalingCoefficientsPtr GetScalingCoefficients;
    GetStreamEndpointHandlePtr GetStreamEndpointHandle;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    InitPtr Init;
    InitWithOptionsPtr InitWithOptions;
    InitiateAcquisitionPtr InitiateAcquisition;
    LockSessionPtr LockSession;
    ProbeCompensationSignalStartPtr ProbeCompensationSignalStart;
    ProbeCompensationSignalStopPtr ProbeCompensationSignalStop;
    ReadPtr Read;
    ReadMeasurementPtr ReadMeasurement;
    ResetPtr Reset;
    ResetDevicePtr ResetDevice;
    RevisionQueryPtr RevisionQuery;
    SampleModePtr SampleMode;
    SampleRatePtr SampleRate;
    SelfTestPtr SelfTest;
    SendSoftwareTriggerEdgePtr SendSoftwareTriggerEdge;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    UnlockSessionPtr UnlockSession;
  } FunctionLoadStatus;

  grpc::nidevice::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace niscope
}  // namespace grpc

#endif  // GRPC_NISCOPE_LIBRARY_H
