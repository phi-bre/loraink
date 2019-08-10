#include "protocol.h"
#include "gtest/gtest.h"

TEST(HelloTest, Hello)
{
    EXPECT_STREQ(hello(), "Hello, World!");
}