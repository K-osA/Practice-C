#include <stdio.h>
int main()
{
	float f;
	scanf("%f",&f);
	int i;
	//i=((int)(f*100)%100)>0?(int)(f*100)%100:-(int)(f*100)%100;
	i=100*(f-(int)f);
	printf("i=%d\n",i);
	return 0;
}
