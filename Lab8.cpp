// Lab8.cpp : Defines the entry point for the console application.
/*
	Jonathan Lim 
	33104333
	EECS 20 Lab 8
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#define MAX 200

double meanCalc(int counter, int x[]);
double medianCalc(int counter, int x[]);
double stdCalc(int counter, int x[]);
//double sortedNumCalc(int counter, int x[]);

int main()
{
	int value, i, counter = 0;
	double mean, median, std;
	int input[MAX];
	while (1) {
		while (counter < 99) {
			printf("Please enter an integer number from 0-100 and enter -1 to see results: \n");
			scanf("%d", &value);
			if (value == -1) {
				break;
			} else {
				if (value >= 0 && value <= 100) {
					input[counter] = value;
					counter++;
				} else {
					printf("The integer inputted is invalid. Please try again.\n");
				}
			}
		}
		mean = meanCalc(counter, input);
		median = medianCalc(counter, input);
		std = stdCalc(counter, input);
		printf("The mean of the inputted integers is %.2f\n", mean);
		printf("The median of the inputted integers is %.2f\n", median);
		printf("The standard deviation of the inputted integers is %.2f\n", std);
		if (counter == 100) {
			exit(0);
		}
	}
	return 0;
}

double meanCalc(int counter, int x[]) {
	double sum = 0;
	for (int i = 0; i < counter; i++) {
		sum += x[i];
	}
	return sum/counter;
}

double medianCalc(int counter, int x[]) {
	int max = 0, temp = 0;
	double median = 0;
	for (int i = 0; i < counter; i++) {
		if (x[i] < max) {
			temp = x[i-1];
			x[i - 1] = x[i];
			x[i] = temp;
		} else {
			max = x[i];
		}
	}
	if (counter % 2 == 0) {
		median = (x[counter / 2] + x[(counter / 2) - 1]) / 2;
		//printf("x[0] = %d and x[counte] = %d and x[2] = %d and x[3] = %d\n", x[0], x[1], x[2], x[3]);
		return (median);
	} else {
		return (x[counter / 2]);
	}
}

double stdCalc(int counter, int x[]) {
	double sum = 0;
	double mean = meanCalc(counter, x);
	for (int i = 0; i < counter; i++) {
		sum += pow((x[i] - mean), 2);
	}
	return sqrt(sum/counter);
}
