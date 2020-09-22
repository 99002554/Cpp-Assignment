#include "box.h"
#include <gtest/gtest.h>

TEST(Box,DefaultConstructor) {
    Box a1;
    EXPECT_EQ(0,a1.length());
    EXPECT_EQ(0,a1.height());
    EXPECT_EQ(0,a1.breadth());
}
TEST(Box,ParameterizedConstructor) {
    Box a1(10,8,5);
    EXPECT_EQ(10,a1.length());
    EXPECT_EQ(8,a1.height());
    EXPECT_EQ(5,a1.breadth());

}
