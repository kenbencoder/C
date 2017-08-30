#include <stdio.h>

int main()
{
	// we can print different values with printf
	// by embedding some symbols in the first argument of printf
	
	// % is the symbol that is used, the character after tells printf what it is
	// in this case %s means string
	printf("%s\n", "hello world");

	// %d is integer
	printf("%d\n", 10);

	// %f is float
	printf("%f\n", 3.142); // suffix f is float

	// mix some up
	printf("%s, %f, %d\n", "hello ken", 3.142, 123);
	return 0;
}
