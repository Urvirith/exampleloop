#include <stdio.h>
#include <time.h>

#define LEN 33

const char str[LEN] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '2', '3', '4', '5', '6', '7', '9'};

void main() {
    clock_t t = clock();

    for(int i = 0; i < LEN; i++) {
        for(int j = 0; j < LEN; j++) {
            for(int k = 0; k < LEN; k++) {
                for(int l = 0; l < LEN; l++) {
                    for(int m = 0; m < LEN; m++) {
                        printf("%c%c%c%c%c \n", str[i], str[j], str[k], str[l], str[m]);
                    }
                }
            }
        }
    }

    clock_t u = clock() - t;
    double time_taken = ((double)u)/CLOCKS_PER_SEC;
    printf("Time Taken: %f \n", time_taken);
}