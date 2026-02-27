// Copyright 2026 UNN-CS

#include "alg.h"
#include <cstdint>
#include <gtest/gtest.h>

TEST(st1, sumPrime1)
{
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2)
{
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}
