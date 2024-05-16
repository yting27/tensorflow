/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/types.h"

namespace tensorflow {
namespace risc {
namespace experimental {

class RiscSortOp : public OpKernel {
 public:
  explicit RiscSortOp(OpKernelConstruction* ctx) : OpKernel(ctx) {}

  void Compute(OpKernelContext* ctx) override {
    // TODO(b/171294012): Implement RiscSort op.
  }
};

REGISTER_KERNEL_BUILDER(Name("RiscSort").Device(DEVICE_CPU), RiscSortOp);

}  // namespace experimental
}  // namespace risc
}  // namespace tensorflow
