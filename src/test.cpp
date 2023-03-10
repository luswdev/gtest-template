#include <gtest/gtest.h>

TEST(template, TestBool)
{
    EXPECT_TRUE( 1 == 1);
    EXPECT_FALSE( 1 == 0);
}

TEST(template, TestValue)
{
    /* L == R */
    EXPECT_EQ( 1, 1);

    /* L != R */
    EXPECT_NE(1, 0);

    /* L < R */
    EXPECT_LT(1, 2);

    /* L <= R */
    EXPECT_LE(1, 1);
    EXPECT_LE(1, 2);

    /* L > R */
    EXPECT_GT(2, 1);

    /* L <= R */
    EXPECT_GE(2, 2);
    EXPECT_GE(2, 1);
}
