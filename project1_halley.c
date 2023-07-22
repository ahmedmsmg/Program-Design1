/*** Name: Ahmed Ghoneim..
 * This program is made  created to calculate when is comet halley going to
 *  appear ***/


#include<stdio.h>

int main()
{
	//Integer Variables
	
	int start_year = 1986;
	// The year given by the consumer
	int given_year = 0;

	int numberof_years = 0;

	// the year that comet halley is going to appear in
	int appear_year;

	int years_till;

	printf("Enter Year: ");
	scanf("%d",&given_year);

	// validating user's input
	if(given_year < start_year || given_year == start_year) {
		printf("Invalid Input");
		return 0;
	}

	// calculating when comet halley is going to appear
	numberof_years  = (given_year - start_year)%76;
	years_till = 76 - numberof_years;
	
	appear_year = given_year + years_till;


	printf("%d", appear_year);
		

	return 0;









}
