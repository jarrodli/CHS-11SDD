// prog.c
// jarrod li
// 25/05

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "sumArrays.h"

int main() {
	int i = 0;
	int arr1[] = {0, 1, 2, 3, 4, 5};
	int arr2[] = {0, 1, 2, 3, 4, 5}; 
	int s1 = sizeof(arr1) / sizeof(*arr1);
	int s2 = sizeof(arr2) / sizeof(*arr2);

	printf("testing sumArrays...\n");

	printf(sumArrays(arr1, arr2, s1, s2));
	assert(sumArrays(arr1, arr2, s1, s2) == 30);
	while (i < s1) {
		arr1[i]++;
		++i;
	}
	i = 0;
	while (i < s2) {
		arr2[i]++;
		++i;
	}
	printf(sumArrays(arr1, arr2, s1, s2));
	assert(sumArrays(arr1, arr2, s1, s2) == 42);

	printf("all tests passed\n!");

	return EXIT_SUCCESS;
}