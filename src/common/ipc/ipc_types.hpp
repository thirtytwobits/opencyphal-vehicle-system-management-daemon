//
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: MIT
//

#ifndef OCVSMD_COMMON_IPC_TYPES_HPP_INCLUDED
#define OCVSMD_COMMON_IPC_TYPES_HPP_INCLUDED

#include <cetl/pf20/cetlpf.hpp>

#include <cerrno>
#include <cstdint>

namespace ocvsmd
{
namespace common
{
namespace ipc
{

/// Defines some common error codes of IPC operations.
///
/// Maps to `errno` values, hence `int` inheritance and zero on success.
///
enum class ErrorCode : int  // NOLINT
{
    Success      = 0,
    NotConnected = ENOTCONN,
    Disconnected = ECONNRESET,
    Shutdown     = ESHUTDOWN,

};  // ErrorCode

using Payload  = cetl::span<const std::uint8_t>;
using Payloads = cetl::span<const Payload>;

}  // namespace ipc
}  // namespace common
}  // namespace ocvsmd

#endif  // OCVSMD_COMMON_IPC_TYPES_HPP_INCLUDED
