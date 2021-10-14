#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, noIterations, sum = 0, average, validint, smallest, largest;
	int i = 1;

	//Tell User how to work code
	printf("Please enter numbers to get a detailed list of sum, average, max, min\nEnter any negative number to finish:\t\n");

	printf("Please enter number %d:\t", i);
	scanf("%d", &input);
	sum += input;
	smallest = input;
	largest = input;
	i++;

	//This way the minus number needed to finish wont take from number
	if (input < 0)
	{
		printf("Finished Calculations");
	}

	//Until -1 is entered
	while (input >= 0);
	{
		printf("Please enter number %d:\t", i);
		scanf("%d", &input);

		//This way the minus number needed to finish wont take from number
		if (input >= 0)
		{
			sum += input;
			i++;

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
		}
	} 

	//Calculations
	if (sum > 0)
	{
		average = sum / (i - 1);
		//Display Calculations
		printf("\nSum of all numbers is:\t\t%d", sum);
		printf("\nAverage of all numbers is:\t%d\n\n", average);
		printf("\nSmallest number entered is:\t%d\n\n", smallest);
		printf("\nLargest number entered is:\t%d\n\n", largest);
	}
}