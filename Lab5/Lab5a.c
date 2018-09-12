/*	
	EECS20_Lab5a.c
	Spring 2018
	Jonathan Lim
*/

#include <stdio.h>
#include <assert.h>

int main(void) {
	int a, b, c, d;
	int sum, product, diff, quotient, remainder;

	printf("Hello! Please enter the first non-zero integer number for calculations: ");
	scanf("%d", &a);
	assert(a != 0);
	printf("Please enter the second non-zero integer number for calculations: ");
	scanf("%d", &b);
	assert(b != 0);
	printf("Please enter the third non-zero integer number for calculations: ");
	scanf("%d", &c);
	assert(c != 0);
	printf("Please enter the fourth non-zero integer number for calculations: ");
	scanf("%d", &d);
	assert(d != 0);

	//The calculations are done below
	sum = a + b + c + d;
	product = a * b * c * d;
	diff = a + b - c - d;
	quotient = (a + b) / (c + d);
	remainder = (a + b + c) % d;
	printf("The sum of the four integers is: %d\n", sum);
	printf("The product of the four integers is: %d\n", product);
	printf("The diff of the four integers is: %d\n", diff);
	printf("The quotient of the four integers is: %d\n", quotient);
	printf("The remainder of the four integers is: %d\n", remainder);

	return 0;
}