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
    int w = 0;
    int l = 1;
    if (n == 1) {
        return 2;
    } else {
        for (int i = 3; i < 10000; i++) {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    w += 1;
                }
            }
            if (w == 0) {
                l += 1;
            } else {
                w = 0;
            }
            if (l == n) {
                return i;
            }
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    int s = 0;
    for (int i = value + 1; i < 10000; i++) {
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                s += 1;
            }
        }
        if (s == 0) {
            return i;
        }
        s = 0;
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
