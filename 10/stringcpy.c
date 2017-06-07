// Jarrod Li

#include <stdio.h>
#include <stdlib.h>

void stringcpy(char str[], char str2[]);

int main(int argc, char *argv[]){

	char str[100];
	char str2[100];

	scanf("%s", str);
	stringcpy(str, str2);
	printf("%s", str2);

}

void stringcpy(char str[], char str2[]) {
	
	int i = 0;

	while(str[i] != '\0') {
		str2[i] = str[i];
		++i;
	}
	//++i;
	str[i] = '\0';
}