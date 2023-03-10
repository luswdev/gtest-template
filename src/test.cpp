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

TEST(template, TestString)
{
    EXPECT_STREQ("Hello", "Hello");
    EXPECT_STRNE("Hello", "World");

    /* ignore case */
    EXPECT_STRCASEEQ("Hello", "Hello");
    EXPECT_STRCASEEQ("Hello", "hello");

    ASSERT_STRCASENE("Hello", "World");
    ASSERT_STRCASENE("Hello", "world");
}

TEST(template, TestFloat)
{
    EXPECT_FLOAT_EQ(1.1f, 1.1f);
    EXPECT_DOUBLE_EQ(1.1, 1.1);
    EXPECT_NEAR(1.1, 1.5, 0.8);
}
