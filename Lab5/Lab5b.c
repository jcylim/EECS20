/*	
	EECS20_Lab5b.c
	Spring 2018
	Jonathan Lim
*/

#include <stdio.h>
#include <assert.h>

int main() {
	int counter = 0;
	char temp;
	char num[7];
	printf("Please enter a seven-digit integer number: ");
	scanf("%s", &num);
	assert(strlen(num) == 7);
	while (counter != 4) {
		temp = num[counter];
		num[counter] = num[6 - counter];
		num[6 - counter] = temp;
		counter++;
	}
	printf("The reverse order of the seven-digit integer number is %s", num);
	return 0;
}