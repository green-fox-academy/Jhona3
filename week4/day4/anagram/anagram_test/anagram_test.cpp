//
// Created by Jonas on 2019. 04. 25..
//

#include "gtest/gtest.h"
#include "anagram.h"

TEST(AnagramTest, AnagramTest1){

    ASSERT_EQ(true, anagramChecker("funeral", "realfun"));

}