#include "../include/recurs.h"
#include <stdio.h>

void output_integers(int n) {
    int sign = n > 0? 1: -1;
    if (n != 1) {
        output_integers(n - sign);
        printf(" ");
    }
    printf("%d", n);
}
