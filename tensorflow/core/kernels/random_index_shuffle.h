/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

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

#ifndef TENSORFLOW_CORE_KERNELS_RANDOM_INDEX_SHUFFLE_H_
#define TENSORFLOW_CORE_KERNELS_RANDOM_INDEX_SHUFFLE_H_

#include <array>

#include "absl/base/integral_types.h"

namespace tensorflow {
namespace random {

// Returns the position of `index` in a permutation of [0, ..., max_index].
//
// Index must be number in [0, ..., max_index].
// Key is the random key for the permutation.
// The returned index will also be in [0, ..., max_index]. For a fixed `key`
// and `max_index` the all possible `index` values and the returned values
// form a bijection.
//
// For more details on the algorithm see the top of the cc file.
uint64_t index_shuffle(const uint64_t index, const std::array<uint32_t, 3>& key,
                       const uint64_t max_index);

}  // namespace random
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_KERNELS_RANDOM_INDEX_SHUFFLE_H_
