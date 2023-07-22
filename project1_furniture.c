/*** Name: Ahmed Ghoneim..
 * This program is for a furniture store and it calculates the amount due on customes depending on how many month are they wishing to rent the item ***/


#include <stdio.h>


int main()
{


	// declaring Integer values for the project
	int Furn, month, amountdue, cost, min_charge, maxper_year,amountdue1;

	printf("Please select from the following menu: 1. Sofa, 2. \n Loveseat, 3. 4 Post Bed, 4. Dresser 5. Kitchen Table \n");

	// scanning the choice of item
	printf("Enter furniture selection: ");
	scanf("%d", &Furn);
	
	// validating option
	 if(Furn<1 || Furn>5) {
                printf("Invalid Choice \n");
                return 0;
        }

	//scanning for the amount of months
	printf("Enter months rented: ");
	scanf("%d", &month);

	// validating option
	if(month<1) {
		printf("Invalid Choice \n");
		return 0;
	}




	// if statements for inputing different values for each specific item
	if (Furn == 1) {
		cost = 45;
		min_charge = 60;
		maxper_year = 450;
	}

	 if (Furn == 2) {
                cost = 30;
		min_charge = 45;
		maxper_year = 280;

        }

	 if (Furn == 3) {
                cost = 38;
		min_charge = 55;
		maxper_year = 350;
        }
	 if (Furn == 4) {
                cost = 25;
		min_charge = 28;
		maxper_year = 200;
        }

	 if (Furn == 5) {
                cost = 20;
		min_charge = 35;
		maxper_year = 220;
        }	
	
	
	//equations to calculate the total amount due on the customer
	
	month = month -1;
	amountdue1 = min_charge + cost * month;
	amountdue = min_charge + cost * month;

	if (amountdue > maxper_year) {
		amountdue = maxper_year;
		amountdue1 = maxper_year;
	}
	if (month > 12) {
		month = month + 1;
		amountdue = amountdue*(month- (month%12))/12;
		amountdue = amountdue + cost * (month%12);
		printf("Amount due ($):%d", amountdue);
	}
	else {
		printf("Amount due ($):%d", amountdue1);
	}

 
	return 0; 
 
}
