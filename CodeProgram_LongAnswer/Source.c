#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

//Struct consisting of data (First and last name, age, and address)
typedef struct data_entry
{
	char firstName[MAX_LEN];
	char lastName[MAX_LEN];
	char address[MAX_LEN];
	int age;

} DATA;

//Function to create and initialize the struct
DATA CreateDataEntry(char[], char[], int, char[]);

//Function to display the struct (Need to pass the struct as a parameter)
void PrintEntry(DATA);

int main()
{
	char first_name[MAX_LEN];
	char last_name[MAX_LEN];
	int age;
	char address[MAX_LEN];

	//Each component of the struct will be user input

	printf("Enter your first name: ");
	//scanf("%s", first_name);
	fgets(first_name, sizeof(first_name), stdin);

	printf("Enter your last name: ");
	//scanf("%s", last_name);
	fgets(last_name, sizeof(last_name), stdin);

	printf("Enter your address: ");
	//scanf("%s", address);
	fgets(address, sizeof(address), stdin); //fegets reads until the end of line or newline. Using it after a bunch of scanf creates a newline that satisfies fgets
	//Either use all user input as fgets or use fgets before scanf
	printf("Enter your age: ");
	scanf("%d", &age);

	//Build the struct based on the user input component (Function Call)
	DATA entry = CreateDataEntry(first_name, last_name, age, address);

    //Print the struct (Function Call)
	PrintEntry(entry);

	return 0;
}

DATA CreateDataEntry(char first_name[], char last_name[], int age, char address[])
{
	DATA n;
	strncpy_s(n.firstName, MAX_LEN, first_name, MAX_LEN);
	strncpy_s(n.lastName, MAX_LEN, last_name, MAX_LEN);
	n.age = age;
	strncpy_s(n.address, MAX_LEN, address, MAX_LEN);

	n.lastName[1] = '.';

	for (int i = 2; i < sizeof(n.lastName); i++)
	{
		n.lastName[i] = '\0';
	}

	return n;
}

void PrintEntry(DATA n)
{
	printf("\n-----------------------------\n");
	printf("First Name: %s", n.firstName);
	printf("Last Name: %s \n", n.lastName);
	printf("Address: %s", n.address);
	printf("Age: %d \n", n.age);

}