#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, noIterations, sum = 0, average, valid=0 , smallest=0, largest=0;
	int i = 1;

	//Tell User how to work code
	printf("Please enter numbers to get a detailed list of sum, average, max, min\nEnter any negative number to finish:\t\n");

	//Ask User for first Number
	printf("Please enter number %d:\t", i);
	scanf("%d", &input);

	//Add input to sum
	sum += input;

	//Change smallest and largest to entered number as if done after this, they're the values
	smallest += input;
	largest += input;

	//Update counter and number of valid numbers entered
	i++;
	valid++;

	//Until -1 is entered
	while(input >= 0)
	{
		//Ask user to enter rest of numbers
		printf("Please enter number %d:\t", i);
		scanf("%d", &input);

		//This way the minus number needed to finish wont take from number
		if (input >= 0)
		{
			//Update Variables as input was positive
			sum += input;
			++valid;
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

	//Display text to show no more numbers to be entered
	printf("\nFinished Calculations\n");

	//Calculations, only done and displayed if sum over 1, meaning a positive number was entered
	if (sum > 0)
	{
		average = sum / (i - 1);

		//Display Calculations
		printf("\nSum of all numbers is:\t\t%d", sum);
		printf("\nAverage of all numbers is:\t%d", average);
		printf("\nSmallest number entered is:\t%d", smallest);
		printf("\nLargest number entered is:\t%d", largest);
		printf("\nNumber of valid ints entered:\t%d\n\n", valid);
	}
}