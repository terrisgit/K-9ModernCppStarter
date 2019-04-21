#include "gtest/gtest.h"
#include "nlohmann/json.hpp"

namespace k9 {
namespace {
TEST(Json, HardCodedJson_1) {
  auto j = R"(
  {
    "happy": true,
    "pi": 3.141
  }
)"_json;

  ASSERT_EQ(j["happy"], true);
  ASSERT_GT(j["pi"], 3.14);
}
}  // namespace 
}  // namespace k9
