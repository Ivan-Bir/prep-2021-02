#include "out_integers_rec.h"
#include <stdio.h>

void out_integers_rec(int number) {
    int sign = number > 0? 1: -1;
    if (number != 1) {
        out_integers_rec(number - sign);
        printf(" ");
    }
    printf("%d", number);
}
