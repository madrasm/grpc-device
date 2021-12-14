
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-FAKE-NON-IVI Metadata
//---------------------------------------------------------------------
#ifndef NIFAKE_NON_IVI_GRPC_SERVICE_H
#define NIFAKE_NON_IVI_GRPC_SERVICE_H

#include <nifake_non_ivi.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nifake_non_ivi_library_interface.h"

namespace nifake_non_ivi_grpc {

struct NiFakeNonIviFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiFakeNonIviFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
  bool is_allow_undefined_attributes_enabled;
};

class NiFakeNonIviService final : public NiFakeNonIvi::WithCallbackMethod_ReadStream<NiFakeNonIvi::WithCallbackMethod_RegisterCallback<NiFakeNonIvi::Service>> {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<FakeHandle>>;

  NiFakeNonIviService(
    NiFakeNonIviLibraryInterface* library,
    ResourceRepositorySharedPtr session_repository,
    const NiFakeNonIviFeatureToggles& feature_toggles = {});
  virtual ~NiFakeNonIviService();
  
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status GetMarbleAttributeDouble(::grpc::ServerContext* context, const GetMarbleAttributeDoubleRequest* request, GetMarbleAttributeDoubleResponse* response) override;
  ::grpc::Status GetMarbleAttributeInt32(::grpc::ServerContext* context, const GetMarbleAttributeInt32Request* request, GetMarbleAttributeInt32Response* response) override;
  ::grpc::Status GetMarbleAttributeInt32Array(::grpc::ServerContext* context, const GetMarbleAttributeInt32ArrayRequest* request, GetMarbleAttributeInt32ArrayResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithHandleNameAsSessionName(::grpc::ServerContext* context, const InitWithHandleNameAsSessionNameRequest* request, InitWithHandleNameAsSessionNameResponse* response) override;
  ::grpc::Status InputArraysWithNarrowIntegerTypes(::grpc::ServerContext* context, const InputArraysWithNarrowIntegerTypesRequest* request, InputArraysWithNarrowIntegerTypesResponse* response) override;
  ::grpc::Status IotaWithCustomSize(::grpc::ServerContext* context, const IotaWithCustomSizeRequest* request, IotaWithCustomSizeResponse* response) override;
  ::grpc::Status OutputArraysWithNarrowIntegerTypes(::grpc::ServerContext* context, const OutputArraysWithNarrowIntegerTypesRequest* request, OutputArraysWithNarrowIntegerTypesResponse* response) override;
  ::grpc::Status InputArrayOfBytes(::grpc::ServerContext* context, const InputArrayOfBytesRequest* request, InputArrayOfBytesResponse* response) override;
  ::grpc::Status OutputArrayOfBytes(::grpc::ServerContext* context, const OutputArrayOfBytesRequest* request, OutputArrayOfBytesResponse* response) override;
  ::grpc::Status OutputArraysWithPassedInByPtrMechanism(::grpc::ServerContext* context, const OutputArraysWithPassedInByPtrMechanismRequest* request, OutputArraysWithPassedInByPtrMechanismResponse* response) override;
  ::grpc::ServerWriteReactor<RegisterCallbackResponse>* RegisterCallback(::grpc::CallbackServerContext* context, const RegisterCallbackRequest* request) override;
  ::grpc::ServerWriteReactor<ReadStreamResponse>* ReadStream(::grpc::CallbackServerContext* context, const ReadStreamRequest* request) override;
  ::grpc::Status InputTimestamp(::grpc::ServerContext* context, const InputTimestampRequest* request, InputTimestampResponse* response) override;
  ::grpc::Status OutputTimestamp(::grpc::ServerContext* context, const OutputTimestampRequest* request, OutputTimestampResponse* response) override;
  ::grpc::Status InputVarArgs(::grpc::ServerContext* context, const InputVarArgsRequest* request, InputVarArgsResponse* response) override;
  ::grpc::Status OutputVarArgs(::grpc::ServerContext* context, const OutputVarArgsRequest* request, OutputVarArgsResponse* response) override;
  ::grpc::Status ResetMarbleAttribute(::grpc::ServerContext* context, const ResetMarbleAttributeRequest* request, ResetMarbleAttributeResponse* response) override;
  ::grpc::Status ScalarsWithNarrowIntegerTypes(::grpc::ServerContext* context, const ScalarsWithNarrowIntegerTypesRequest* request, ScalarsWithNarrowIntegerTypesResponse* response) override;
  ::grpc::Status SetMarbleAttributeDouble(::grpc::ServerContext* context, const SetMarbleAttributeDoubleRequest* request, SetMarbleAttributeDoubleResponse* response) override;
  ::grpc::Status SetMarbleAttributeInt32(::grpc::ServerContext* context, const SetMarbleAttributeInt32Request* request, SetMarbleAttributeInt32Response* response) override;
  ::grpc::Status SetColors(::grpc::ServerContext* context, const SetColorsRequest* request, SetColorsResponse* response) override;
  ::grpc::Status GetStructsWithCoercion(::grpc::ServerContext* context, const GetStructsWithCoercionRequest* request, GetStructsWithCoercionResponse* response) override;
  ::grpc::Status SetStructsWithCoercion(::grpc::ServerContext* context, const SetStructsWithCoercionRequest* request, SetStructsWithCoercionResponse* response) override;
  ::grpc::Status InputStringValuedEnum(::grpc::ServerContext* context, const InputStringValuedEnumRequest* request, InputStringValuedEnumResponse* response) override;
  ::grpc::Status WriteBooleanArray(::grpc::ServerContext* context, const WriteBooleanArrayRequest* request, WriteBooleanArrayResponse* response) override;
private:
  NiFakeNonIviLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  std::map<std::int32_t, std::string> mobileosnames_input_map_ { {1, "Android"},{2, "iOS"},{3, "None"}, };
  std::map<std::string, std::int32_t> mobileosnames_output_map_ { {"Android", 1},{"iOS", 2},{"None", 3}, };

  NiFakeNonIviFeatureToggles feature_toggles_;
};

} // namespace nifake_non_ivi_grpc

namespace nidevice_grpc {
namespace converters {
template <>
void convert_to_grpc(const StructWithCoercion_struct& input, nifake_non_ivi_grpc::StructWithCoercion* output);
template <>
StructWithCoercion_struct convert_from_grpc(const nifake_non_ivi_grpc::StructWithCoercion& input);
} // namespace converters
} // namespace nidevice_grpc

#endif  // NIFAKE_NON_IVI_GRPC_SERVICE_H
