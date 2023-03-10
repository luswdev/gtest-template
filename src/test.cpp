#include <gtest/gtest.h>

TEST(template, TestBool)
{
    EXPECT_TRUE( 1 == 1);
    EXPECT_FALSE( 1 == 0);
}
