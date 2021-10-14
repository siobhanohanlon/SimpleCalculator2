#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, noIterations, sum=0, average, validint, smallest, largest;
	int i = 1;

	// 
	printf("Please enter number of Iterations:\t", i);
	scanf("%d", &noIterations);

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
	printf("\nSum of all numbers is:\t%d", sum);
	printf("\nAverage of all numbers is:\t%d", average);
	
}