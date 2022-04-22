/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_FREQUENCY_CAPPING_PERMISSION_RULES_SEARCH_RESULT_ADS_PER_HOUR_PERMISSION_RULE_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_FREQUENCY_CAPPING_PERMISSION_RULES_SEARCH_RESULT_ADS_PER_HOUR_PERMISSION_RULE_H_

#include <string>
#include <vector>

#include "bat/ads/internal/frequency_capping/permission_rules/permission_rule_interface.h"

namespace base {
class Time;
}  // namespace base

namespace ads {

class SearchResultAdsPerHourPermissionRule final
    : public PermissionRuleInterface {
 public:
  SearchResultAdsPerHourPermissionRule();
  ~SearchResultAdsPerHourPermissionRule() override;

  bool ShouldAllow() override;

  std::string GetLastMessage() const override;

 private:
  bool DoesRespectCap(const std::vector<base::Time>& history);

  SearchResultAdsPerHourPermissionRule(
      const SearchResultAdsPerHourPermissionRule&) = delete;
  SearchResultAdsPerHourPermissionRule& operator=(
      const SearchResultAdsPerHourPermissionRule&) = delete;

  std::string last_message_;
};

}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_FREQUENCY_CAPPING_PERMISSION_RULES_SEARCH_RESULT_ADS_PER_HOUR_PERMISSION_RULE_H_