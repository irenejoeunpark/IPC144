/* -------------------------------------------
Name:Jo Eun Park
Student number:147 824 189
Email: ipark10@myseneca.ca
Section:SNN
Date:March 8, 2019
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main(void)
{

	// Declare variables here:
	char answer[10];
	struct Name name;
	struct Address address;
	struct Numbers numbers;


	// Display the title

	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf(" %31[^\n]%*c", name.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %[^\n]%*c", answer);
	if (answer[0] == 'y' || answer[0] == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]%*c", name.middleInitial);

	}

	printf("Please enter the contact's last name: ");
	scanf(" %36[^\n]%*c", name.lastName);
	// Contact Address Input:

	printf("Please enter the contact's street number: ");
	scanf("%d%*c", &address.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %41[^\n]%*c", address.street);
	// Contact Numbers Input:
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %[^\n]%*c", answer);
	if (answer[0] == 'y' || answer[0] == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d%*c", &address.apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]%*c", address.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]%*c", address.city);

	// Display Contact Summary Details
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %[^\n]%*c", answer);
	if (answer[0] == 'y' || answer[0] == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11[^\n]%*c", numbers.cell);
	}


	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %[^\n]%*c", answer);
	if (answer[0] == 'y' || answer[0] == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %11[^\n]%*c", numbers.home);
	}


	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %[^\n]%*c", answer);
	if (answer[0] == 'y' || answer[0] == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %11[^\n]%*c", numbers.business);
	}


	// Display Completion Message
	printf("\n");
	printf("Contact Details\n");
	printf("---------------\n");

	printf("Name Details\n");

	printf("First name: %s\n", name.firstName);
	if (name.middleInitial[0] != '\0')
		printf("Middle initial(s): %s\n", name.middleInitial);
	printf("Last name: %s\n", name.lastName);
	printf("\n");

	printf("Address Details\n");

	printf("Street number: %d\n", address.streetNumber);
	printf("Street name: %s\n", address.street);

	if (address.apartmentNumber > 0)
		printf("Apartment: %d\n", address.apartmentNumber);

	printf("Postal code: %s\n", address.postalCode);
	printf("City: %s\n", address.city);
	printf("\n");



	printf("Phone Numbers:\n");
	if (numbers.cell[0] != '\0') {
		printf("Cell phone number: %s\n", numbers.cell);
	}
	if (numbers.home[0] != '\0') {
		printf("Home phone number: %s\n", numbers.home);
	}
	if (numbers.business[0] != '\0') {
		printf("Business phone number: %s\n", numbers.business);
	}
	
	printf("\n");
	printf("Structure test for Name, Address, and Numbers Done!\n");


	return 0;
}

/*  SAMPLE OUTPUT:

	Contact Management System
	-------------------------
	Please enter the contact's first name: Tom
	Do you want to enter a middle initial(s)? (y or n): y
	Please enter the contact's middle initial(s): L. A.
	Please enter the contact's last name: Wong Song
	Please enter the contact's street number: 20
	Please enter the contact's street name: Keele Street
	Do you want to enter an apartment number? (y or n): y
	Please enter the contact's apartment number: 40
	Please enter the contact's postal code: A8A 4J4
	Please enter the contact's city: North York
	Do you want to enter a cell phone number? (y or n): Y
	Please enter the contact's cell phone number: 9051116666
	Do you want to enter a home phone number? (y or n): Y
	Please enter the contact's home phone number: 7052227777
	Do you want to enter a business phone number? (y or n): Y
	Please enter the contact's business phone number: 4163338888

	Contact Details
	---------------
	Name Details
	First name: Tom
	Middle initial(s): L. A.
	Last name: Wong Song

	Address Details
	Street number: 20
	Street name: Keele Street
	Apartment: 40
	Postal code: A8A 4J4
	City: North York

	Phone Numbers:
	Cell phone number: 9051116666
	Home phone number: 7052227777
	Business phone number: 4163338888

	Structure test for Name, Address, and Numbers Done!
*/