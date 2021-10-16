#include "is_prime_number.h"
#include <stdio.h>

int is_prime_number(int number) {
    if (number <= 0 || number == 1) {
        return 0;
    }
    for (int devisor = 2; devisor * devisor <= number; ++devisor) {
        if (number % devisor == 0) {
            return 0;
        }
    }
    return 1;
}
