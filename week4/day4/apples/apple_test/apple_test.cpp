//
// Created by Jonas on 2019. 04. 25..
//
#include "gtest/gtest.h"
#include "apple.h"

TEST(APPLE_TEST , TestString){
    ASSERT_EQ("pear" , getApple());
}

TEST(SumTest, sumListNumbersEmptyList){
    std::vector<int> emptyVector;

    ASSERT_EQ(0, sumNumbers(emptyVector));
}
TEST(SumTest2, sumListNumberOneElement){
    std::vector<int> oneElement{5};
    ASSERT_EQ(5 , sumNumbers(oneElement));

}

TEST(SumTest2, SumListFullList){
    std::vector<int> fullVector{1,2,3,4,5,6,7,8,9};
    ASSERT_EQ(45, sumNumbers(fullVector));

}

TEST(SumTest3, SumListNegativeNumbers){
    std::vector<int> negativeVector{4,5,-5};

    ASSERT_EQ(4, sumNumbers(negativeVector));
}

