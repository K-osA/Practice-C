#include <stdio.h>
struct test{
	int a, b;
};
void p(struct test*);
int main()
{
	struct test st;
	struct test *ptr;

	ptr=&st;

	(*ptr).a=1;
	(*ptr).b=2;

	printf("st 의 a 멤버 : %d\n",st.a);
	printf("st의 b멤버 : %d\n", st.b);

	p(&st);

	return 0;
}
void p(struct test* a){
	printf("test: %d\n",a->b);
	return;
}
