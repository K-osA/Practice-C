#include <stdio.h>
int main()
{
	int *p;
	int a;
	a=2;

	p=&a;
	printf("%p\n",&a);
	printf("%p\n",p);
	return 0;
}
