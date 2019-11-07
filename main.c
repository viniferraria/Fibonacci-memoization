#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fibonacci.h"


int main(void) {
    int number;
    clock_t duration;
    printf("Hello World\n");
    scanf("%d", &number);

    duration = clock();
    long result = fibonacci(number);
    duration = clock() - duration;
    double total = ((double) duration)/CLOCKS_PER_SEC;

    printf("%ld", result);
    printf("\nDuration: %.10f", total);
}