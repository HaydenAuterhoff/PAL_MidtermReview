//PAL Week 7 - Example 1 of Midterm Review
//Validate Basic Input
//Validate Basic Output

#include <stdio.h>

int main()
{
	//Basic Output (Memory Allocation)
	char e = 'd';
	//printf("size of char = %d bytes\n", (int)sizeof(e));  //1.

	short a = 'c';
	//printf("size of short = %d bytes\n", (int)sizeof(a)); //2.

	int f = 10;
	//printf("size of int = %d bytes\n", (int)sizeof(f)); // 4 bytes.

	float g = 43.56;
	//printf("size of float = %d bytes\n", (int)sizeof(g)); // 4 bytes.

	double h = 34545654;
	//printf("size of double = %d bytes\n", (int)sizeof(h));  // 8 bytes.

	long b = 66;
	//printf("size of long = %d bytes\n", (int)sizeof(b)); // 4 bytes.

	long long c = 897;
	//printf("size of long long = %d bytes\n", (int)sizeof(c)); // 8 bytes.

	long double d = 99999999;
	//printf("size of long double = %d bytes\n", (int)sizeof(d)); // 8 bytes.

	//-------------------------------------------------------

	//Basic Output (Mix & Match Format Specifiers)

	//printf("This is the Format Specifier for a char %c \n", e); //Char Format Specifier

	//printf("This is the Format Specifier for a short %c \n", a); //Short Format Specifier // Could also be %hd.

	//printf("This is the Format Specifier for an int %d \n", f); //Int Format Specifier

	//printf("This is the Format Specifier for a float %.2f \n", g); //Float Format Specifier

	//printf("This is the Format Specifier for a double %lf \n", h); //Double Format Specifier

	//printf("This is the Format Specifier for a long %ld \n", b); //Long Format Specifier

	//printf("This is the Format Specifier for a long long %lld \n", c); //Long long Format Specifier

	//printf("This is the Format Specifier for a long double %Lf \n", d); //Long Double Format Specifier

	//-------------------------------------------------------

	//Basic Input

	int age;


	char first_name[20]; //What is wrong with this initialization?  **Hard coded size.**
	char full_name[20];

	//User Input for Full Name (including spaces)
	printf("Enter full name: ");
	fgets(full_name, 20, stdin);	//Either scanf or fgets can be used to get input to string.
	full_name[strlen(full_name) - 1] = '\0'; //fgets needs you to add the null terminator manually.
	printf("Your full name: %s\n", full_name);


	//User Input for Age (int)
	printf("Enter age: ");
	scanf_s("%d", &age);	//Getting input from user.
	printf("Your age: %d\n", age);	//Printing the age.

	//User Input for First Name
	printf("Enter first name: ");

	scanf_s("%s", first_name, 20);	//Asking for first name.
	printf("Your first name is: %s\n", first_name);


}