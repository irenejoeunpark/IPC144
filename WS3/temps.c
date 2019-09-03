/* 
    Name:           JO EUN PARK
    Student Number: 147824189
    Email:          ipark10@myseneca.ca
    Section:        SNN
    Workshop:       3 (at-home)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Put your code below:

#define NUMS 4

int main(void) {
	
	printf("---=== IPC Temperature Analyzer ===---\n");

	
	int k;
	double lTemp;
	double hTemp;
	int highest = -41;
	int lowest = 41;
	int hDay;
	int lDay;
	double lTotal = 0;
	double hTotal = 0;


	for (k = 0; k< NUMS; k++) {
		
	
		
		

		do {
			printf("Enter the high value for day %d: ", k + 1);
			scanf("%lf", &hTemp);
			printf("\n");

			printf("Enter the low value for day %d: ", k + 1);
			scanf("%lf", &lTemp);
			printf("\n");

			if (lTemp < -40 || lTemp> 40 || hTemp< -40 || hTemp > 40 || lTemp > hTemp) {


				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				printf("\n");
			}
			
					
			
		} while (lTemp < -40 || lTemp> 40 || hTemp < -40 || hTemp > 40 || lTemp > hTemp);
		lTotal = lTotal + lTemp;
		hTotal = hTotal + hTemp;
		
	
		
		
		if(lTemp<lowest){
			lowest = lTemp;
			lDay = k+1;
		}
		if(hTemp>highest){
			highest = hTemp;
			hDay = k+1;
		}
		


	}
	
	


	
	
	
	printf("The average (mean) LOW temperature was: %.2lf", lTotal/NUMS);
	printf("\n");
	printf("The average (mean) HIGH temperature was: %.2lf", hTotal/NUMS);
	printf("\n");
	printf("The average (mean) temperature was: %.2lf", (lTotal/NUMS + hTotal/NUMS)/2);
	printf("\n");
	printf("The highest temperature was %d, on day %d", highest, hDay);
	printf("\n");
	printf("The lowest temperature was %d, on day %d", lowest, lDay);
	printf("\n");
	
	return 0;

}