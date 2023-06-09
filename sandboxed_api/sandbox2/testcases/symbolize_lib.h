#ifndef SANDBOXED_API_SANDBOX2_TESTCASES_SYMBOLIZE_LIB_H_
#define SANDBOXED_API_SANDBOX2_TESTCASES_SYMBOLIZE_LIB_H_

#include "absl/base/attributes.h"

ABSL_ATTRIBUTE_NOINLINE
ABSL_ATTRIBUTE_NO_TAIL_CALL
void LibRecurse(void (*cb)(int), int data, int n);

#endif  // SANDBOXED_API_SANDBOX2_TESTCASES_SYMBOLIZE_LIB_H_
