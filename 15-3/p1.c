#include <stdio.h>
int getlen(char *);
int main()
{
	char a[100]={0};
	scanf("%s",a);

	int len;
	len=getlen(a);
	printf("%d\n",len);
	return 0;
}
int getlen(char *text){
	int len=0;
	while(text[len]!=0)
		len++;
	return len;
}
