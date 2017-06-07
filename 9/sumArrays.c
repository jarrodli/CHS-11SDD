// sumArrays.c
// jarrod li
// 25/05

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sumArrays.h"

int sumArrays(int *arr1, int *arr2, int e1, int e2) {
	int i = 0;
	int t = 0;
	
	while(i < e1) {
		t += arr1[i];
		++i;
	}
	i = 0;
	while(i < e2) {
		t += arr2[i];
		++i;
	}
	return t;
}