#include <stdio.h>
static __inline int max(int a, int b){
	if(a>b) return a;
	return b;
}
int main(int argc, char **argv)
{
	printf("3과 2 중 최대값은 : %d\n",max(3,2));
	return 0;
}
