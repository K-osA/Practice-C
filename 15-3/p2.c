#include <stdio.h>
void copy(char *, char *);
int main()
{
	char a[100]={0}, b[100]={0};
	scanf("%s",a);
	copy(b, a);
	printf("a: %s\nb: %s\n",a,b);
	return 0;
}
void copy(char *b, char *a){
	int i=0;
	while(a[i]!=0){
		b[i]=a[i];
		i++;
	}
	return;
}
