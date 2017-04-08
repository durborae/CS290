/*********************************************************************
** Program Filename: assignment0.c
** Author: Eric Durboraw
** Date: 04/06/2017
** Description: This program will convert inches to cm and cm to inches
** Input: length in cm or inches
** Output: length in inches or cm
*********************************************************************/
#include <stdio.h>

/*********************************************************************
** Function: convertCM
** Description: will convert inches to cm
** Parameters: int inches
** Pre-Conditions: >0
** Post-Conditions: >0
*********************************************************************/

double convertCM(double inches)
{
	double cm = inches*2.54;
	return cm;
}

/*********************************************************************
** Function: convertIN
** Description: will convert cm to inches
** Parameters: int inches
** Pre-Conditions: >0
** Post-Conditions: >0
*********************************************************************/

double convertIN(double cm)
{
	double inches = cm/2.54;
	return inches;
}

/*********************************************************************
** Function: getUserVal
** Description: this will get a value from the user and perform data 
** validation
** Parameters: none
** Pre-Conditions: >0
** Post-Conditions: >0
*********************************************************************/

double getUserVal()
{
	double val = -1.0;
	while (val < 1)
	{
		printf("Please enter a value for conversion: ");
		scanf("%lf", &val);
		if(val < 0)
		{
			printf("Invalid option\n");
		}
	}
	return val;
}

/*********************************************************************
** Function: menu
** Description: This function will prompt a user for a menu option
** and call the function to convert cm or inches
** Parameters: int inches
** Pre-Conditions: >0
** Post-Conditions: >0
*********************************************************************/

void menu()
{
	int choice = -1;
	double val;
	double result;
	while (choice < 1 || choice > 3)
	{
		printf("Welcome to the inch/centimeter converter\n1. Convert inches to centimeters\n2. Convert centimeters to inches\n3. exit\n");
		scanf("%d", &choice);
		if (choice < 1 || choice > 3)
		{
			printf("invalid choice\n");
		}
	}

	while (choice == 1 || choice == 2)
	{
		if(choice == 1)
		{
			val = getUserVal();
			printf("%.2f inches = ", val);
			result = convertCM(val);
			printf("%.2f centimeters\n", result);
			choice = -1;
		}
		else if (choice == 2)
		{
			val = getUserVal();
			printf("%.2f centimeters = ", val);
			result = convertIN(val);
			printf("%.2f inches\n", result);
			choice = -1;
		}
		while (choice < 1 || choice > 3)
		{
			printf("1. Convert inches to centimeters\n2. Convert centimeters to inches\n3. exit\n");
			scanf("%d", &choice);
			if (choice < 1 || choice > 3)
			{
				printf("invalid choice");
			}
		}
	}

}

main()
{
	menu();
}