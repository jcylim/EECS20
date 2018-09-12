/*
EECS20_Lab6b.c
Jonathan Lim
33104333
*/

#include "stdafx.h"
#include <stdio.h>
#include <assert.h>
#include <math.h>

void windChillCalc(int temp, int windSpeed);

int main()
{
	int temp, windSpeed;
	while (1) {
		while (1) {
			printf("Please input a temperature lower than 40 degrees F: ");
			scanf_s("%d", &temp);
			if (temp < 40) {
				printf("Input temperature (<= 40 degrees F): %d\n", temp);
				break;
			}
			else {
				printf("Input temperature (<= 40 degrees F): %d\n", temp);
				printf("Number is out of range. Try again.\n");
			}
		}
		while (1) {
			printf("Please input a wind speed high than 6 mph: ");
			scanf_s("%d", &windSpeed);
			if (temp >= 6) {
				printf("Input wind speed (>= 6 mph): %d\n", windSpeed);
				break;
			}
			else {
				printf("Input wind speed (>= 6 mph): %d\n", windSpeed);
				printf("Number is out of range. Try again.\n");
			}
		}
		windChillCalc(temp, windSpeed);
	}
	return 0;
}

void windChillCalc(int temp, int windSpeed) {
	double wc1 = 0.0817*(3.71*sqrt(windSpeed) + 5.81 - 0.25*windSpeed);
	double wc2 = (temp - 91.4);
	double wc = wc1 * wc2 + 91.4;
	printf("The wind chill is %.2f degrees F.\n", wc);
}

