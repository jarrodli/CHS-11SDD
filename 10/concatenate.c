// Jarrod Li

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char *arr, char *arr2);

int main(int argc, char *argv[]) {
	char arr[] = "Hello,";
	char arr2[] = " world";
	printf("%s", concatenate(arr, arr2));
	//free(concatenated);
}

char *concatenate(char *arr, char *arr2) {
	int i = 0;
	int j = strlen(arr);
	char *concatenated = malloc(strlen(arr) + strlen(arr2));
	while(arr2[i] != '\0') {
		arr2[i] = arr[j];
	}
	concatenated = arr2;
	arr2[i] = '\0';
	printf("%s", concatenated);
	return concatenated;
}