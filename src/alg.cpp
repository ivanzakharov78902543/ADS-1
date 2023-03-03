// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    int k = 0;
    if (value < 2) {
        return false;
    }
    for (int i = 2; i <= value / 2; i++) {
        if (value % i == 0) {
            k += 1;
        }
    }
    if (k == 0) {
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    int num = 2;
    int k = 0;
    while (1) {
        if (checkPrime(num) == 1) {
            k++;
        }
        if (k == n) {
            break;
        }
        num++;
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    while (1) {
        int k = 1;
        value++;
        for (int i = 2; i <= value; i++) {
            if (value % i == 0) {
                k++;
            }
        }
        if (k == 2) {
            return value;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    int sum = 0;
    int p = 0;
    for (int i = 2; i < hbound; i++) {
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                p += 1;
            }
        }
        if (p == 0) {
            sum += i;
        }
        p = 0;
    }
    return sum;
}
