#include <stdio.h>
int main()
{
	int sum=0;
	int a=1,b=1,c;
	for(int i=3;i<=1000000;i++){
		c=a+b;
		a=b;
		b=c;
		
		if(i%2==0) sum+=c;
	}

	printf("%d\n",sum+1);
	return 0;
}
