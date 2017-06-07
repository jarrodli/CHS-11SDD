// Jarrod Li

char *longerString(char *arr1, char *arr2) {
	int i = 0;
	int count = 0;
	while(arr1[i] != '\0') {
		count++;
		i++;
	}
	i = 0;
	while(arr2[i] != '\0') {
		i++;
	}
	if (i > count) {
		return arr2;
	} else {
		return arr1;
	}
}