// Lab7.cpp : Defines the entry point for the console application.
/*
	EECS20_Lab7.c
	Jonathan Lim
	33104333
*/

//For some reason, my switch-case always runs twice. 

#include "stdafx.h"
#include <stdio.h>
#include <assert.h>

/*int economyClass(int e, int seats[200]);
int businessClass(int b, int seats[200]);
int firstClass(int f, int seats[200]);*/

int main()
{
	int seats[200] = {};
	char choice, response;
	int e = 100, b = 50, f = 0, count = 0;
	bool loop;

	while (count < 200) {
		printf("Hey there! Please type E for 'Economy', type B for 'Business', and type F for 'First Class'.\n");
		scanf("%c", &choice);
		switch(choice) {
			case 'E':
				loop = true;
				do {
					if (seats[e] != 1 && e < 200) {
						seats[e] = 1;
						count++;
						printf("Boarding pass: seat number %d for the economy class.\n", e + 1);
						e++;
						break;
					}
					else {
						while (loop) {
							printf("It seems like the economy class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
							scanf("%c", &response);
							if (response == 'y') {
								break;
							}
							else if (response == 'n') {
								printf("We are booked.\n");
								break;
							}
							else {
								printf("Type only 'y' or 'n'\n");
								loop = false;
							}
						}
					}
				} while (e < 200);
				break;
			case 'B':
				loop = true;
				do {
					if (seats[b] != 1 && b < 100) {
						seats[b] = 1;
						count++;
						printf("Boarding pass: seat number %d in business class.\n", b + 1);
						b++;
						break;
					}
					else {
						while (loop) {
							printf("It seems like the business class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
							scanf("%c", &response);
							if (response == 'y') {
								break;
							}
							else if (response == 'n') {
								printf("We are booked.\n");
								break;
							}
							else {
								printf("Type only 'y' or 'n'\n");
								loop = false;
							}
							b++;
						}
					}
				} while (b < 100);
				break;
			case 'F':
				loop = true;
				do {
					if (seats[f] != 1 && f < 50) {
						seats[f] = 1;
						printf("Boarding pass: seat number %d in first class.\n", f + 1);
						f++;
						break;
					}
					else {
						while (loop) {
							printf("It seems like the first class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
							scanf("%c", &response);
							if (response == 'y') {
								break;
							}
							else if (response == 'n') {
								printf("We are booked.\n");
								break;
							}
							else {
								printf("Type only 'y' or 'n'\n");
								loop = false;
							}
						}
					}
				} while (f < 50);
				break;
			default:
				printf("Please type only 'E', 'B', or 'F'.\n");
		}
	}
	printf("Every seat is booked!\n");
	return 0;
}

/*int economyClass(int e, int seats[200]) {
	char response = NULL;
	do {
		if (seats[e] != 1) {
			seats[e] = 1;
			printf("Boarding pass: seat number %d for the economy class.\n", e + 1);
			e++;
			break;
		}
		else {
			while (1) {
				printf("It seems like the economy class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
				scanf("%c", &response);
				if (response == 'y') {
					break;
				}
				else if (response == 'n') {
					printf("We are booked.\n");
					break;
				}
				else {
					printf("Type only 'y' or 'n'\n");
				}
			}
		}
	} while (e < 200);
	return e;
}

int businessClass(int b, int seats[200]) {
	char response = NULL;
	do {
		if (seats[b] != 1) {
			seats[b] = 1;
			printf("Boarding pass: seat number %d in business class.\n", b + 1);
			b++;
			break;
		}
		else {
			while (1) {
				printf("It seems like the business class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
				scanf("%c", &response);
				if (response == 'y') {
					break;
				}
				else if (response == 'n') {
					printf("We are booked.\n");
					break;
				}
				else {
					printf("Type only 'y' or 'n'\n");
				}
				b++;
			}
		}
	} while (b < 100);
	return b;
}

int firstClass(int f, int seats[200]) {
	char response = NULL;
	do {
		if (seats[f] != 1) {
			seats[f] = 1;
			printf("Boarding pass: seat number %d in first class.\n", f + 1);
			f++;
			break;
		}
		else {
			while (1) {
				printf("It seems like the first class is full. Would you like to book other sections? Type 'y' for yes and 'n' for no.\n");
				scanf("%c", &response);
				if (response == 'y') {
					break;
				}
				else if (response == 'n') {
					printf("We are booked.\n");
					break;
				}
				else {
					printf("Type only 'y' or 'n'\n");
				}
			}
		}
	} while (f < 50);
	return f;
}*/