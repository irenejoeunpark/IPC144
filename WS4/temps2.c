//--------------------------------------------------
// Name:           Jo Eun Park	
// Student Number: 147824189
// Email:          ipark10@myseneca.ca
// Section:        SNN
// Workshop:       4 (at-home)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below

#include <stdio.h>

int main(void) {

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");


	int nDays;
	int i;
	int hTemp[10];
	int lTemp[10];
	int highest = -100;
	int lowest = 100;
	int hDay;
	int lDay;
	double total;
	double aTemp;
	int aDay;



	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &nDays);
	printf("\n");

	while (nDays > 10 || nDays < 3) {


		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &nDays);
		printf("\n");
	}


	for (i = 0; i < nDays; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &hTemp[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &lTemp[i]);


	}


	printf("\n");
	printf("Day  Hi  Low");
	printf("\n");
	i = 0;

	do {
		printf("%d    %d    %d\n", i + 1, hTemp[i], lTemp[i]);
		i++;

	} while (i < nDays);











	for (i = 0; i < nDays; i++) {


		if (lTemp[i] < lowest) {
			lowest = lTemp[i];
			lDay = i + 1;
		}
		if (hTemp[i] > highest) {
			highest = hTemp[i];
			hDay = i + 1;
		}

	}

	printf("\n");
	printf("The highest temperature was %d, on day %d", highest, hDay);
	printf("\n");
	printf("The lowest temperature was %d, on day %d", lowest, lDay);
	printf("\n");
	printf("\n");

	



	do {

		printf("Enter a number between %d and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", 1, nDays);
		scanf("%d", &aDay);
		printf("\n");

		if (aDay >= 0) {

			while (aDay > nDays || aDay < 1) {


				printf("Invalid entry, please enter a number between %d and %d, inclusive: ", 1, nDays);
				scanf("%d", &aDay);
				printf("\n");


			}


			total = 0;


			for (i = 0; i < aDay; i++) {

				total = total + hTemp[i] + lTemp[i];

			}



			aTemp = total / (2 * aDay);


			printf("The average temperature up to day %d is: %0.2lf", aDay, aTemp);
			printf("\n");
			printf("\n");








		}

		else {
			aDay = aDay;
		}
		
		
	} while (aDay >= 0);
	
	printf("Goodbye!\n");


		
		
	



	return 0;
}

