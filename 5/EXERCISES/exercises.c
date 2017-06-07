/*
 * exercises.c
 * lesson 5
 * jarrod li
 * 23 March 2017
 * all code from this exercise
 * copy code into your own editor and compile
 */


// 1.
float do_it(char x, char y, char z);

// 2.
void print_a_number(int x);

/* 3.
 *
 * a. an integer
 * b. a long integer
 */

// 4.
// function expects no return

// 5.
// unexpected terminator ;

// 7.
int sum(int x, int y) {

    return x + y;
}

// 8.
int divide(int x, int y) {

    int total = 0;
    if (y != 0) {
        total += (x / y);
    }
    return total;
}

// 9.

sum();
divide();


// 10.
int main(int argc, char *argv[]) {

    float v1, v2, v3, v4, v5;
    double x;

    scanf("%d, %d, %d, %d, %d", v1, v2, v3, v4, v5);

    x = ( v1 + v2 + v3 + v4 + v5 ) / 5

    printf("%lf", x)

    return 0;
}

// 11.

#include <stdio.h>

int recursion(int power, int base);

int main (int argc, char *argv[]) {

    int power;
    int base = 3;

    scanf("%d", &power);

    printf("%d", recursion(power, base));

    return 0;

}

int recursion(int power, int base) {

    if (power == 0) {
        return 1;
    } else {
        return base * recursion(power - 1, base);
    }
}
