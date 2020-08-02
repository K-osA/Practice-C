#include <stdio.h>
int main()
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	int (*parr)[3]=arr;
	
	printf("parr[0][1]:%d\n",*(*parr+4));
	
	/*printf("arr[1]:%d\n",arr[1]);
	printf("parr[1]:%d\n",(**parr+1));

	printf("arr:%p\n",arr);
	printf("parr:%p\n",parr);*/
	return 0;
}
