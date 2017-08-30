#include <stdio.h>

int main()
{
	int myInt = 10;
	printf("my int: %d\n", myInt);

	char myChar = 'k';
	printf("my char: %c\n", myChar);

	float myPI = 3.142f;
	printf("my PI: %f\n", myPI);

	double piDouble = 3.142;
	printf("pi double: %lf\n", piDouble);

	printf("\n%d %c %f %lf\n", myInt, myChar, myPI, piDouble);
	return 0;
}

