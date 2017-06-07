/*
 * exercises.c
 * lesson 5
 * jarrod li
 * 23 March 2017
 * all code from this exercise
 * copy code into your own editor and compile
 */

// 1.

int one[1000];
int two[1000];
int three[1000];

// 2.
#include <stdio.h>

int main(int argc, char *argv[]) {

    int arr[10];

    for (x = 0; x < 10; x++) {
        int y = 1;
        arr[y];
    }
}

// 3.
#include <stdio.h>

int main(int argc, char *argv[]) {

    int arr[x];

    for (x = 0; x < 10; x++) {
        int y = 88;
        arr[y];
    }
}

// 4.
/*
 * program written by
 * jarrod li
 * 23 March 2017
 * multidimensional arrays
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

    int stuff[12][10];
    int x, y;

    for (x = 0; x < 12; x++) {
        for (y = 0; y < 10; y++) {
            int z = 0;
            stuff[x][y] = z;

        }
    }

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {

            printf("%d", stuff[x][y]);
        }
    }
    return 0;
}



// 5.
// incorrect placement of x and y values

// 6.
// overflow on the array, undefined behaviour

// 7.
/*
 * program written by
 * jarrod li
 * 23 March 2017
 * inputs random numbers into a
 * two-dimensional array
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int arr[5][4];
    int x, y;

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 4; y++) {
            arr[x][y] = rand();
        }
    }

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 4; y++) {
            printf("%d", arr[x][y]);
        }
        printf("\n");
    }
    return 0;
}

// 8.
/*
 * avgarray.c
 * program writeen by
 * jarrod li
 * 23 March 2017
 * prints average of array and values
 * ten values at a time
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    int arr[1000];
    int total = 0;
    int i; //x;

    srand(time(NULL));

    for (i = 0; i < 1000; i++) {
        arr[i] = rand();
    }

    for (i = 0; i < 1000; i++) {
        total += arr[i];
    }

    printf("the total is: %d\n", total);
    total /= 1000;
    printf("the average is %d\n", total);

    #if 0
    for (i = 0; i < 10; i++) {
    for (x = 0; x < 10; i++) {
    printf("%d", arr[i]);
    }

    printf("press enter to continue, CTRL-C to exit.");
    getchar();
}

#endif

return EXIT_SUCCESS;
}


// 9.
/*
 * subscript.c
 * written by
 * jarrod li
 * 23 March 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        arr[i] *= arr[i];
        printf("%d\n", arr[i]);
    }

    return 0;
}

// 10.
/*
 * modifiedsubscript.c
 * written by
 * jarrod li
 * 23 March 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int arr[10];
    int arrcpy[10];
    int i;

    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        arr[i] *= arr[i];
    }

    for (i = 0; i < 10; i++) {
        arrcpy[i] = arr[i] + 10;
        printf("%d\n", arrcpy[i]);
    }

    return 0;
}
