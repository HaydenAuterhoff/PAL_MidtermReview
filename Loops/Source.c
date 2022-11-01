//PAL Week 7 - Example 2 of Midterm Review
//Loops (For, While, Do While)
//IF-ElseIF-Else Statements, Swtich Cases

#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 20

int main()
{
	//Question: When do you use a For Loop?

	//Example
	int set[] = { 1,2,3,4,5 };

	// Difference between these initialize array of characters?
	char name = "Hello World";
	char name2[MAXLEN];//Question: If I were to use a string, do I always needWhy don't we need to use MAXLEN?

	for (int i = 0; i < sizeof(set) / sizeof(set[0]); i++) //What is the middle condition checking?
		// sizeof(set)/sizeof(set[0]) is used for finding size of array.
	{
		printf("%d \n", set[i]);
		//printf("---\n");
	}

	printf("//-------------------\n");

	/*
	//Question: When do you use a While Loop?
	//QUestion: What is better, For Loop or While Loop?
	//Example
	int i = 0;
	while (i < 5) //What else could used instead of a magic number?
	{
		set[i] = set[i] * 5;
		printf("%d \n", set[i]);
		i++;
	}
	*/


	printf("//-------------------\n");

	//Question: When do you use a Do While Loop?
	//QUestion: What is a good application of a Do While?

	int j = 0;
	bool isTrue = true;; //What needs to be included for bool?

	//Example
	do
	{
		//int j = 0; Where is the correct initialization of j?
		if (j == 3)
		{
			isTrue = false;
		}
		printf("%d \n", j);
		j++;

	} while (isTrue == true); //What other condition could work?


	//When are Switch-Cases used? (Check example 16 in Week 3 Tues folder on GitHub)

}