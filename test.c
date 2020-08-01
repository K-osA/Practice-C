#include <stdio.h>
int main()
{
	int a[10]={1,2,3};

	int (*pa)[10]=&a;
	
	printf("%d\n",(**pa+2));
	return 0;
}
