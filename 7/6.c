#include <stdio.h>
int main()
{
	int a,b,c;
	int cnt=0;
	for(a=1;;a++){
		for(b=1;b<a;b++){
			for(c=1;c<b;c++){
				if(a+b+c==2000) cnt++;
			}
		}
		if(c>2000) break;
	}
	printf("%d\n",cnt);
	return 0;
}
