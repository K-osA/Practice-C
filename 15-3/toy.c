#include <stdio.h>
int main()
{
	/*char a[100][100];
	char (*pa)[100];

	pa=a;

	a[0][0]='a';
	a[0][1]='e';
	a[1][0]='g';

	(*pa)++;
	printf("%c\n",*(*pa+1));*/

	char a[100];
	char *pa;

	pa=a;

	a[0]='a';
	a[1]='e';
	a[2]='f';

	a++;

	printf("%c\n",*(pa+1));
	return 0;
}
