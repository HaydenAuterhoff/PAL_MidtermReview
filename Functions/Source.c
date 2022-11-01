//PAL Week 7 - Example 3 of Midterm Review
//Pass By Value
//Pass By Reference

#include <stdio.h>

int incrementByValue(int num); //What does this mean, declaring a function before main?

void incrementByReference(int* num);

int main()
{
	//Question: what does Pass by Value mean?

	//Example
	int num = 5;
	printf("Before Increment: %d \n", num);

	int inc_num = incrementByValue(num); //Briefly explain this line (Why does inc_num have to be an int?
	printf("After Increment: %d \n", inc_num);

	/*
	printf("//------------------\n");
	//Question: what does Pass by Reference mean?
	int num2 = 6;
	printf("Before Increment: %d \n", num2);
	incrementByReference(&num2); //Why is this different than line 19 for Passing by Value?
	printf("After Increment: %d \n", num2);
	*/
}

int incrementByValue(int x)
{
	x = x + 5;
	return x;
}

void incrementByReference(int* x)
{
	int temp; //Why do we need to use a temp variable?

	temp = *x;
	*x = *x + 8;

	return;
}