#include "headers/psieve.h"

extern char pmap[primecount];

int main (int argc, char** argv) {
    pmap[0] = 1; pmap[1] = 0; pmap[2] = 1; pmap[3] = 0; pmap[4] = 1;

    if (argc < 2) { return 0; }

    if (argv[1][0] == 'd') {
        for (unsigned int i = 1; i < primecount; i++) {
            if (default_prime(i) != 0) {
                //printf(" %d\n",i);
            }
        }
    } else if (argv[1][0] == 's') {
        for (unsigned int i = 1; i < primecount; i++) {
            if (sieve_prime(i) != 0) {
                //printf(" %d\n",i);
            }
        }
        for (unsigned int i = primecount-1; i >= 0; i--) {
            if (pmap[i] == 0) { printf("%d\n",i); return 0; }
        }
    }
}
