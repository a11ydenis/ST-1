// Copyright 2026 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, primeSumLimitLarge) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922ULL;
    EXPECT_EQ(expected, res);
}

TEST(st1, primeSumLimitSmall) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17ULL;
    EXPECT_EQ(expected, res);
}

TEST(st1, checkPrimeTrivialNonPrimes) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrimeSmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}

TEST(st1, checkPrimeSmallComposites) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
}

TEST(st1, checkPrimeLargePrime) {
    EXPECT_TRUE(checkPrime(99991));
}

TEST(st1, checkPrimeLargeComposite) {
    EXPECT_FALSE(checkPrime(100000));
}

TEST(st1, nPrimeSimple) {
    EXPECT_EQ(2ULL, nPrime(1));
    EXPECT_EQ(3ULL, nPrime(2));
    EXPECT_EQ(5ULL, nPrime(3));
    EXPECT_EQ(7ULL, nPrime(4));
    EXPECT_EQ(11ULL, nPrime(5));
}

TEST(st1, nPrimeZeroIndex) {
    EXPECT_EQ(0ULL, nPrime(0));
}

TEST(st1, nPrimeTenthPrime) {
    EXPECT_EQ(29ULL, nPrime(10));
}

TEST(st1, nextPrimeAfterComposite) {
    EXPECT_EQ(5ULL, nextPrime(4));
    EXPECT_EQ(13ULL, nextPrime(11));
}

TEST(st1, nextPrimeAfterPrimeItselfNotCounted) {
    EXPECT_EQ(3ULL, nextPrime(2));
    EXPECT_EQ(5ULL, nextPrime(3));
}

TEST(st1, nextPrimeNearZero) {
    EXPECT_EQ(2ULL, nextPrime(0));
    EXPECT_EQ(2ULL, nextPrime(1));
}
