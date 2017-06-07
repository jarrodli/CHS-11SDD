/*
 * exercises.c
 * lesson 5
 * jarrod li
 * 23 March 2017
 * all code from this exercise
 * copy code into your own editor and compile
 */

// 1.
printf("/n");
puts();

// 2.
scanf("%c, %f, %c", &character, &decimal, &character);

// 3.
scanf("%d", &n);
printf("%d", n);

// 4.
scanf("%d", &n);
printf("%d", n);

if (n % 2 != 0) {
    return 1;
} else {
    return 0;
}

// 5.
int main(int argc, char *argv) {

    int array[5]

    for (x = 0; x % 2 == 0 && x != 99; x++) {
        array[x] = input;
    }
}

// 6 - goto l07e06

// 7.
// requires escape sequence for inverted quotation marks

/* 8.
 *
 * returns to a voided function
 * infinite loop
 * no inverted quotation marks in printf
 * scanf expects an integer
 * scanf expects an address of (&)
 */

// 10.
#include <stdio.h>

int main(int argc, char*argv[]) {

    float x, y;

    scanf("%f, %f" &x, &y);

    printf("product: %f", x*y);

    return 0;
 }

// 11.
#include <stdio.h>

int main(int argc, char *argv[]) {

    int x;
    int add[10];
    int sum = 0;

    for (x = 0; x < 10; x++) {

        scanf("%d", &add[x]);
    }

    for (x = 0; x < 10; x++) {

        sum += add[x];
    }

    printf("%d", sum);

    return 0;
}

// 12.

/*
 * program writeen by
 * jarrod li
 * 23 March 2017
 * sorts numbers in an array
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int elements = 0;
    int x;
    int arr[1000];

    printf("Enter how many elements in the array: \n");
    scanf("%d", &elements);
    printf("%d elements\n", elements);

    for (x = 0; x < elements; x++) {
        printf("Element:");
        scanf("%d", &arr[x]);
    }

    int maxValue = arr[0];
    int minValue = arr[0];

    for (x = 1; x < elements; x++) {
        if (maxValue < arr[x]) {
            maxValue = arr[x];
        }
    }

    for (x = 1; x < elements; x++) {
        if (minValue > arr[x]) {
            minValue = arr[x];
        }
    }

    printf("the lowest value is %d\nthe highest value is %d\n", minValue, maxValue);

    return 0;
}
