#include <stdio.h>
int main()
{
	int a;
	int b;
	
	const int* pa=&a;

	int* const pa2=&a;

//	pa=&b;

//	*pa2=1;

	*pa=1;

	pa2=&b;
	return 0;
}
