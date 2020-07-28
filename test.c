#include <stdio.h>
int main()
{
	double celsius;
	scanf("%lf",&celsius);
	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9.0/5.0*celsius+32);
	return 0;
}
