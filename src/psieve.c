#include "../headers/psieve.h"

char pmap[primecount] = {0};

int default_prime(uint n) {
    if (n == 1) { return 1; }
    if (n % 2 == 0) { return 0; }
    for (uint i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sieve_prime(uint n) {
    if (n < 5) { return pmap[n]^1; }
    if (n % 2 == 0 || n % 3 == 0) { return 0; }
    if (pmap[n] == 0) {
        for (uint k = n+n; k <= primecount; k+=n) {
            pmap[k] = 1;
        }
        return 1;
    }
    return 0;
}
