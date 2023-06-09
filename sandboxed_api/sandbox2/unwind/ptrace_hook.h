// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SANDBOXED_API_SANDBOX2_UNWIND_PTRACE_HOOK_H_
#define SANDBOXED_API_SANDBOX2_UNWIND_PTRACE_HOOK_H_

#include <unistd.h>

#include "absl/strings/string_view.h"

namespace sandbox2 {

// Sets the register values that the ptrace emulation will return.
void EnablePtraceEmulationWithUserRegs(pid_t pid, absl::string_view regs,
                                       int mem_fd);

}  // namespace sandbox2

#endif  // SANDBOXED_API_SANDBOX2_UNWIND_PTRACE_HOOK_H_
