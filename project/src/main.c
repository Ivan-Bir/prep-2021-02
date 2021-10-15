#include "../include/utils.h"
#include "../include/simple.h"
#include "../include/recurs.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_MOD_REC     4


int main(int argc, const char* argv[]) {
    if (argc < 3) {
        printf("%d\n", ERR_ARGS_COUNT);
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data = argv[2];

    switch (Test_case) {  // Counter with total output
        case TST_FOO_FIX: {
            unsigned int to = atoi(data);
            size_t ticks_count = timer_from(to);
            printf("%zu\n", ticks_count);
            break;
        }
        case TST_FOO_IMPL: {  // The function returns the result of raising base to the power pow
            if (argc == 4) {
                int base = atoi(data);
                int pow =  atoi(argv[3]);
                long long res = custom_pow(base, pow);
                printf("%lld\n", res);
             } else {
                return ERR_ARGS_COUNT;
             }
             break;
        }
        case TST_MOD_IMPL: {  // If number is simlpe return 1, otherwise 0
            int num = atoi(data);
            printf("%d\n", prime_number(num));
            break;
        }
        case TST_MOD_REC: {  // Print integers from 0 to n
            int n = atoi(data);
            output_integers(n);
            printf("\n");
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
