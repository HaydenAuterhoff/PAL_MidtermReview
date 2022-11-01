//PAL Week 7 - Example 4 of Midterm Review
//Structures

#include <stdio.h>

#define MAX_LEN 20

	//Question: what is a structure (as in, the characteristics)?
	// 
	//Car struct detailing information for a car (Owner, Car Brand, Model Number (int), and Number of Kilometers (float))
struct car
{
	char carOwner[MAX_LEN];
	char carBrand[MAX_LEN];
	int modelNumber;
	float kilometresCounter;
};

typedef struct car2
{
	char carOwner2[MAX_LEN];
	char carBrand2[MAX_LEN];
	int modelNumber2;
	float kilometresCounter2;

} CAR;

//Question: what is the difference between car and car2?

int main()
{
	//How do we access the struct? (Hard-code entire struct versus user input of just one variable in the struct)

	//Hard Code Example
	struct car myCar = { .carOwner = "Hayden", .carBrand = "Dodge", .modelNumber = 1, .kilometresCounter = 420.69 };

	/*
	//User Input Example
	printf("Please enter the name of the Car Owner: ");
	scanf_s("%s", myCar.carOwner, MAX_LEN);
	*/

	/*
	//Initialize individual components Example
	char newModel[] = "Honda";
	//myCar.carBrand = newModel; //Can't do this why?
	strncpy_s(myCar.carBrand, MAX_LEN, newModel, MAX_LEN);
	*/

	//Print the contents of the struct
	printf("\n-----------------------------\n");
	printf("Owner: %s \n", myCar.carOwner);
	printf("Brand: %s \n", myCar.carBrand);
	printf("Model Number: %d \n", myCar.modelNumber);
	printf("Kilometres: %.2f ", myCar.kilometresCounter);

	//Part 2 - Let's use the typedef of the struct!

	CAR myCar2;

	return 0;
}