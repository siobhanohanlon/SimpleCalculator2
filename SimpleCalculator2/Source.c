#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, noIterations, sum=0, average, validint, smallest, largest;
	int i = 1;

	//Tell User how to work code
	printf("Please enter numbers to get a detailed list of sum, average, max, min\nEnter any negative number to finish:\t\n");

	//Until -1 is entered
	do
	{
		printf("Please enter number %d:\t", i);
		scanf("%d", &input);

		//This way the minus number needed to finish wont take from number
		if (input >= 0)
		{
			sum += input;
			i++;
		}
	} while (input >= 0);

	//Calculations
	average = sum / (i-1);

	//Display Calculations
	printf("\nSum of all numbers is:\t\t%d", sum);
	printf("\nAverage of all numbers is:\t%d\n\n", average);
	
}