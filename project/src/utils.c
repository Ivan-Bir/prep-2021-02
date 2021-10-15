#include "../include/utils.h"
#include <stdio.h>
#include <stdlib.h>

size_t timer_from(unsigned int from) {
    size_t counter = 0;
    for (int i = from; i > 0; --i) {
        ++counter;
        printf("%d ", i);
    }
    if (counter != 0) {
        printf("0\n");
        ++counter;
    } else {
        return counter;
    }
    return counter;
}

long long int custom_pow(int base, int pow) {
    long long int result = base;
    if (pow == 0) {return 1;}
    for (int i = pow; i > 1; --i) {
        result *= base;
    }
    return result;
}
