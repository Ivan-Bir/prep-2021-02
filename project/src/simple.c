#include "../include/simple.h"
#include <stdio.h>

int prime_number(int num) {
    if (num <= 0 || num == 1) {return 0;}
    for (int devisor = 2; devisor < num; ++devisor) {
        if (num % devisor == 0) {return 0;}
    }
    return 1;
}
