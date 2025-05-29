// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1_strakhov, checkPrime1) {
  bool res = checkPrime(1);
  bool expected = false;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, checkPrime2) {
  bool res = checkPrime(2);
  bool expected = true;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, checkPrime3) {
  bool res = checkPrime(3);
  bool expected = true;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, checkPrime4) {
  bool res = checkPrime(4);
  bool expected = false;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, nPrime2) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1_strakhov, nPrime3) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1_strakhov, nPrime4) {
  uint64_t res = nPrime(4);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1_strakhov, nextPrime0) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1_strakhov, nextPrime2) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, nextPrime3) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1_strakhov, nextPrime12) {
  uint64_t res = nextPrime(12);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
