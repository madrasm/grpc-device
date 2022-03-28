
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-XNETSOCKET Metadata
//---------------------------------------------------------------------
#ifndef NIXNETSOCKET_GRPC_SERVICE_H
#define NIXNETSOCKET_GRPC_SERVICE_H

#include <nixnetsocket.grpc.pb.h>
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

#include "nixnetsocket_library_interface.h"

namespace nixnetsocket_grpc {

struct NiXnetSocketFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiXnetSocketFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiXnetSocketService final : public NiXnetSocket::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxSOCKET>>;
  using nxIpStackRef_tResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxIpStackRef_t>>;

  NiXnetSocketService(
    NiXnetSocketLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    nxIpStackRef_tResourceRepositorySharedPtr nx_ip_stack_ref_t_resource_repository,
    const NiXnetSocketFeatureToggles& feature_toggles = {});
  virtual ~NiXnetSocketService();
  
  ::grpc::Status Accept(::grpc::ServerContext* context, const AcceptRequest* request, AcceptResponse* response) override;
  ::grpc::Status Bind(::grpc::ServerContext* context, const BindRequest* request, BindResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Connect(::grpc::ServerContext* context, const ConnectRequest* request, ConnectResponse* response) override;
  ::grpc::Status GetAddrInfo(::grpc::ServerContext* context, const GetAddrInfoRequest* request, GetAddrInfoResponse* response) override;
  ::grpc::Status GetNameInfo(::grpc::ServerContext* context, const GetNameInfoRequest* request, GetNameInfoResponse* response) override;
  ::grpc::Status GetPeerName(::grpc::ServerContext* context, const GetPeerNameRequest* request, GetPeerNameResponse* response) override;
  ::grpc::Status GetSockName(::grpc::ServerContext* context, const GetSockNameRequest* request, GetSockNameResponse* response) override;
  ::grpc::Status GetSockOpt(::grpc::ServerContext* context, const GetSockOptRequest* request, GetSockOptResponse* response) override;
  ::grpc::Status InetAddr(::grpc::ServerContext* context, const InetAddrRequest* request, InetAddrResponse* response) override;
  ::grpc::Status InetAToN(::grpc::ServerContext* context, const InetAToNRequest* request, InetAToNResponse* response) override;
  ::grpc::Status InetNToA(::grpc::ServerContext* context, const InetNToARequest* request, InetNToAResponse* response) override;
  ::grpc::Status InetNToP(::grpc::ServerContext* context, const InetNToPRequest* request, InetNToPResponse* response) override;
  ::grpc::Status InetPToN(::grpc::ServerContext* context, const InetPToNRequest* request, InetPToNResponse* response) override;
  ::grpc::Status IpStackClear(::grpc::ServerContext* context, const IpStackClearRequest* request, IpStackClearResponse* response) override;
  ::grpc::Status IpStackCreate(::grpc::ServerContext* context, const IpStackCreateRequest* request, IpStackCreateResponse* response) override;
  ::grpc::Status IpStackGetAllStacksInfoStr(::grpc::ServerContext* context, const IpStackGetAllStacksInfoStrRequest* request, IpStackGetAllStacksInfoStrResponse* response) override;
  ::grpc::Status IpStackGetInfo(::grpc::ServerContext* context, const IpStackGetInfoRequest* request, IpStackGetInfoResponse* response) override;
  ::grpc::Status IpStackOpen(::grpc::ServerContext* context, const IpStackOpenRequest* request, IpStackOpenResponse* response) override;
  ::grpc::Status IpStackWaitForInterface(::grpc::ServerContext* context, const IpStackWaitForInterfaceRequest* request, IpStackWaitForInterfaceResponse* response) override;
  ::grpc::Status IsSet(::grpc::ServerContext* context, const IsSetRequest* request, IsSetResponse* response) override;
  ::grpc::Status Listen(::grpc::ServerContext* context, const ListenRequest* request, ListenResponse* response) override;
  ::grpc::Status Recv(::grpc::ServerContext* context, const RecvRequest* request, RecvResponse* response) override;
  ::grpc::Status RecvFrom(::grpc::ServerContext* context, const RecvFromRequest* request, RecvFromResponse* response) override;
  ::grpc::Status Select(::grpc::ServerContext* context, const SelectRequest* request, SelectResponse* response) override;
  ::grpc::Status Send(::grpc::ServerContext* context, const SendRequest* request, SendResponse* response) override;
  ::grpc::Status SendTo(::grpc::ServerContext* context, const SendToRequest* request, SendToResponse* response) override;
  ::grpc::Status SetSockOpt(::grpc::ServerContext* context, const SetSockOptRequest* request, SetSockOptResponse* response) override;
  ::grpc::Status Shutdown(::grpc::ServerContext* context, const ShutdownRequest* request, ShutdownResponse* response) override;
  ::grpc::Status Socket(::grpc::ServerContext* context, const SocketRequest* request, SocketResponse* response) override;
  ::grpc::Status StrErrR(::grpc::ServerContext* context, const StrErrRRequest* request, StrErrRResponse* response) override;
private:
  NiXnetSocketLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  nxIpStackRef_tResourceRepositorySharedPtr nx_ip_stack_ref_t_resource_repository_;

  NiXnetSocketFeatureToggles feature_toggles_;
};

} // namespace nixnetsocket_grpc

#endif  // NIXNETSOCKET_GRPC_SERVICE_H
