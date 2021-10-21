#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, sum = 0, average, valid=0 , smallest, largest;
	int i = 1;

	//Tell User how to work code
	printf("Please enter numbers to get a detailed list of sum, average, max, min\nEnter any negative number to finish:\t\n");

	//Ask User for first Number
	printf("Please enter number %d:\t", i);
	scanf("%d", &input);

	if (i == 1)
	{
		smallest = input;
		largest = input;
	}

	//Until -1 is entered
	while(input > 0)
	{
		//Update variables
		i++;
		sum += input;

		//If input is now largest number
		if (input > largest)
		{
			largest = input;
		}

		//If input is now smallest number
		if (input < smallest)
		{
			smallest = input;
		}

		//Ask user to enter rest of numbers
		printf("Please enter number %d:\t", i);
		scanf("%d", &input);
	} 

	//Display text to show no more numbers to be entered
	printf("\nFinished Calculations\n");

	//If stoped on first number
	if (i == 2 && input <= 0)
	{
		printf("\nERROR!!!! No Numbers to Compute\n");
	}

	//Calculations, only done and displayed if sum over 1, meaning a positive number was entered
	if (sum > 0)
	{
		//Update Variables
		valid = --i;
		average = sum/valid;
		
		//Display Calculations
		printf("\nSum of all numbers is:\t\t%d", sum);
		printf("\nAverage of all numbers is:\t%d", average);
		printf("\nSmallest number entered is:\t%d", smallest);
		printf("\nLargest number entered is:\t%d", largest);
		printf("\nNumber of valid ints entered:\t%d\n\n", valid);
	}
}