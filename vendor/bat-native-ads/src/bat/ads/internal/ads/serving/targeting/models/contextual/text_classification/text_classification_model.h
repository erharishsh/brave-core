/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_TARGETING_MODELS_CONTEXTUAL_TEXT_CLASSIFICATION_TEXT_CLASSIFICATION_MODEL_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_TARGETING_MODELS_CONTEXTUAL_TEXT_CLASSIFICATION_TEXT_CLASSIFICATION_MODEL_H_

#include "bat/ads/internal/ads/serving/targeting/models/model_interface.h"

namespace ads {
namespace targeting {
namespace model {

class TextClassification final : public ModelInterface {
 public:
  TextClassification();
  ~TextClassification() override;
  TextClassification(const TextClassification&) = delete;
  TextClassification& operator=(const TextClassification&) = delete;

  SegmentList GetSegments() const override;
};

}  // namespace model
}  // namespace targeting
}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_TARGETING_MODELS_CONTEXTUAL_TEXT_CLASSIFICATION_TEXT_CLASSIFICATION_MODEL_H_