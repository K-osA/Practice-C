#include <stdio.h>
int main()
{
	int n;
	int j=0;
	scanf("%d",&n);

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			j=1;
			n/=i;
			if(n!=1)
				printf("%d * ", i);
			break;
		}
	}
	printf("%d\n",n);
	return 0;
}
