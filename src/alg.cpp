// Copyright 2025 UNN-CS
#include "alg.h"
#include <cstdint>
#include <cmath>

bool checkPrime(uint64_t value) {
  if (value < 2)  {
    return false;
  }
  if (value == 3 || value == 2) 
  return true;
  else if (value % 2 == 0)
  return false;
  for (uint64_t i = 3; pow(i, 2) < value; i += 2)  {
    if (value % i == 0)
    return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t counter = 1;
  uint64_t number = 1;
  if (n < 1)
  return 0;
  if (n == 1)
  return 2;
  while (counter < n)  {
    number += 2;
    if (checkPrime(number))
    counter++;
  }

  return number;
}
uint64_t nextPrime(uint64_t value) {
  if (value < 2)
  return 2;
  if (value == 2)
  return 3;
  if (value % 2 == 0)
  value--;
  while (true)  {
    value += 2;
    if (checkPrime(value))
    return value;
  }

  return -1;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t number = 3;
  uint64_t sum = 2;
  if (hbound < 3)
  return 2;
  if (hbound < 5)
  return 5;
  while (number < hbound)  {
    if (checkPrime(number))
    sum += number;
    number += 2;
  }

  return sum;
}
