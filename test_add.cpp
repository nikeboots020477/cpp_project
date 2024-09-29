///\file

#include <gtest/gtest.h>
#include "my_add.hpp"

///Unit test

TEST(Add, Simple){
   EXPECT_EQ(my_add(2,3),5);
   EXPECT_EQ(my_add(3,6), my_add(6,3));
   EXPECT_EQ(my_add(-10,5), -5);
}
