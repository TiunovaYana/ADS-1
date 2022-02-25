// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i < value; i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int i = 0;
    int j = 2;
    while (i < n) {
        if (checkPrime(j) == 1)
            i++;
        j++;
    }
    return j - 1;
}

uint64_t nextPrime(uint64_t value) {
    while (1) {
        value++;
        if (checkPrime(value) == 1)
            break;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    int sum = 0;
    for (int j = 2; j < hbound; j++) {
        if (checkPrime(j) == 1)
            sum += j;
    }
    return sum;
}
