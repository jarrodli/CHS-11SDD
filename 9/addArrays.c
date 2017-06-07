// addArrays.c
// jarrod li
// 25/05

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *addArrays(int *arr1, int *arr2, int e);

int main (int argc, char* argv[]) {

	printf("testing addArrays...\n");

	int arr1[] = {0, 1, 2, 3, 4, 5};
	int arr2[] = {0, 1, 2, 3, 4, 5};
	int arr3[] = {0, 2, 4, 6, 8, 10};
	int e = sizeof(arr1) / sizeof(*arr1);
	int *addedArrays = addArrays(arr1, arr2, e);
	assert(addedArrays[0] == arr3[0]);
	assert(addedArrays[1] == arr3[1]);
	assert(addedArrays[2] == arr3[2]);
	assert(addedArrays[3] == arr3[3]);
	assert(addedArrays[4] == arr3[4]);

	printf("all tests passed!\n");
	free(addedArrays);
}

int *addArrays(int *arr1, int *arr2, int e) {
	int *arr3 = malloc(e);
	int i = 0;
	while (i < e) {
		arr3[i] = arr1[i] + arr2[i];
		++i;
	}
	return arr3;
}