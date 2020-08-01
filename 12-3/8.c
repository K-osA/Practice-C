#include <stdio.h>
int main()
{
	int a[3][5][7];
	int (*arr)[5][7];

	a[0][0][0]=3;

	arr=a;

	printf("%d",arr[0][0][0]);
	return 0;
}
