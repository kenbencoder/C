
// printf is how you print values in C
// in order to use printf you must 'include' stdio.h

#include <stdio.h>

int main()
{
	// strings in C are inside ""
	// you must pass a string to printf
	printf("hello world\n"); // slash n is a new line. delete it, compile and run and you will see what it does
	printf("hello ken\n");

	// compile error because 10 isn't a string
	// printf(10)

	return 0;
}
