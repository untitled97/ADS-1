// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value > 1) {
    uint64_t b, a = 0;
    for (uint64_t i = 1; i <= value; i++) {
      b = value;
      b %= i;
      if (b == 0)
        a++;
    }
    if (a == 2)
      return true;
    else
      return false;
  }
  return 0;
}

uint64_t nPrime(uint64_t n) {
    if (n >= 1) {
        uint64_t prime = 2, b1, number = 1;
        while (number <= n) {
            uint64_t a = 0;
            for (uint64_t i = 1; i <= prime; i++) {
                b1 = prime;
                b1 %= i;
                if (b1 == 0) {
                    a++;
                }
            }
            if (a == 2 && number < n) {
                prime++;
                number++;
            } else if (a == 2 && number == n) {
                return prime;
            } else {
            prime++;
          }
        }
    }
    return 0;
}

uint64_t nextPrime(uint64_t value) {
    if (value >= 1) {
        uint64_t a2 = 0, b2;
        while (1) {
            value++;
            for (uint64_t i = 1; i <= value; i++) {
                b2 = value;
                b2 %= i;
                if (b2 == 0)
                    a2++;
            }
            if (a2 == 2)
                return value;
            else
                a2 = 0;
        }
    }
    return 0;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t res = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            res += i;
        }
    }
    return res;
}
