/* -------------------------------
Name: Jo Eun Park	           
Student number:  147824189
Email:       ipark10@myseneca.ca
Section:        SNN
Date:           March 25,19
----------------------------------
Assignment: 2
Milestone:  2
---------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:

void pause(void) {

	printf("(Press Enter to continue)");
	clearKeyboard();



}


// getInt function definition goes here:

int getInt(void) {
	int Value;
	char NL;


	scanf("%d%c", &Value, &NL);
	while (NL != '\n') {

		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &Value, &NL);


	}
	return Value;
}
// getIntInRange function definition goes here:

int getIntInRange(int min, int max) {

	int value = getInt();
	while (value > max || value < min) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		scanf("%d", &value);

	
	}
	return value;
}

// yes function definition goes here:


int yes(void) {
	char answer;
	char newline;
	int result;
	int i = 0;
	scanf("%c%c", &answer, &newline);
	while (i == 0) {
		if (newline != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf("%c%c", &answer, &newline);
		}
		else if (answer == 'Y' || answer == 'y') {
			result = 1;
			i++;
		}
		else if (answer == 'n' || answer == 'N') {
			result = 0;
			i++;
		}
		else {
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf("%c%c", &answer, &newline);
			if (newline != '\n') {
				clearKeyboard();
			}
		}
	}
	return result;
}

// menu function definition goes here:


int menu(void) {

	int sel;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	sel  = getIntInRange(0, 6);

	return sel;

}
// contactManagerSystem function definition goes here:

void contactManagerSystem(void) {
	int result = 0;
	int sel;
	int i = 0;


	while (result == 0) {
		sel = menu();
		while (sel != 0) {
			if (i == 0) {
				clearKeyboard();
				i++;
			}
			printf("\n<<< Feature %d is unavailable >>>\n\n", sel);
			pause();
			printf("\n");
			sel = menu();
		}
		printf("\nExit the program? (Y)es/(N)o: ");

		result = yes();
		printf("\n");
	}
	printf("Contact Management System: terminated\n");
}