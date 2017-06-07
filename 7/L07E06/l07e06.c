/*
 * l07e06.c
 * code written by
 * jarrod li
 * 21 March 2017
 * prints out values in an array
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int array[5];
    int x, count;
    int input = 0;

    for (x = 0; x < 6; x++) {
        scanf("%d", &input);
        array[x] = input;
    }

    for (x = 0; x < 6; x++) {
        printf("%d\n", array[x]);
    }

    return EXIT_SUCCESS;
}
