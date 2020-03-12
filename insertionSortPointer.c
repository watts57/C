#include <stdio.h>
#include <math.h>



int main()	
{	
	printf("Will Watts");
	printf("\n");
	printf("watts57@uab.edu");
	printf("\n");
	printf("Lab 2 for CS 330");
	printf("\n");
	printf("\n");


	int i, j, key, currentIndex, length; //declare integer key (what is searched for) 
	//and length, which will be length of array
	 // empty array
	printf("Please enter how many elements you'd like to have in the array (as integer): \n");
	scanf("%d", &length);  
	printf("Length of array = ");
	printf("%d",length);
	printf("\n");
	int array[length];
	int* integers = array;	
	
		for (currentIndex = 0; currentIndex < length; currentIndex++) // set up for loop
			{
				printf("Add Elements to the array by entering an integer and then pressing ENTER. \n");
				//get user input
				scanf("%d", &*(integers + currentIndex));
				printf("currentIndex = ");
				printf("%d",currentIndex);
				printf("\n");
				printf("*(integers + currentIndex) = ");
				printf("%d",*(integers + currentIndex));
				printf("\n");
			}	
		//print instructions to user

		printf("\n");
		//get user input
		printf("Sorting..."); // this is just here to let me know it works so far
		printf("\n");
		


	
		//using a nested for loop
		// i is outer, j is inner
		//key is value being compared
		//*(insertArrayName + number) is format to index with pointer
		//example: *(integers + 1) is equivalent to integers[1]

		for (i = 0; i < length; i++) // set up for loop outer layer
			{
				key = *(integers + i); // current compared value is current index of integer array
				j = i-1; //j is one less than i


				while(j >= 0 && *(integers + j) > key) 
				// if j is 0 or positive int, and index j contains larger int than key
					{ 
						*(integers + (j+1)) = *(integers + j); //move
						j = j - 1; //j decreased by one
					}
				*(integers+(j+1)) = key; //set integers[j+1] equal to current key being compared
			}


	for (currentIndex = 0; currentIndex < length; currentIndex++)
		{
			printf("%d", *(integers + currentIndex));
			
			if (currentIndex < (length - 1))
			{
				printf(", "); // separate with comma if needed
			}
			else
			{
				printf("\n"); // if last number, don't add comma, but say "done"
				printf("Done!");
			}

		}

	return 0;


}
