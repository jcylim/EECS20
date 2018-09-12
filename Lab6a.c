/*
	EECS20_Lab6a.c
	Jonathan Lim
	33104333
*/

#include "stdafx.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

void drawTriangle(char symbol, int num);

int main()
{
	char symbol;
	int num;
	bool start = true;

	printf("Hello! Please type a symbol for the program: ");
	scanf_s("%c", &symbol);
	while (start) {
		printf("Please enter a non-zero number from 5-35: ");
		scanf_s("%d", &num);
		if (num == 0) {
			printf("Exit program.....");
			start = false;
		}
		else if (num < 5 || num > 35) {
			printf("Enter a non-zero number between 5-35 only!\n");
		}
		else {
			drawTriangle(symbol, num);
		}
	}
	return 0;
}

void drawTriangle(char symbol, int num) {
	printf("Input is %c and %d\n", symbol, num);
	printf("The output is: \n");
	for (int i = 1; i < num + 1; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", symbol);
		}
		printf("\n");
	}
}
