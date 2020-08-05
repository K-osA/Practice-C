#include <stdio.h>
int num;
void copy(char *, char *);
int cmp(char *, char *);
int main()
{
	int borrowed[100]={0};
	char title[100][100]={0}, name[100][100]={0}, publisher[100][100]={0};

	while(1){
		int n;
		printf("1. add\n2. search title\n3. search name\n4. search publisher\n5. borrow\n6. return\n\n");
		scanf("%d",&n);

		switch(n){
			case 1:
				{
					char title_temp[100];
					char name_temp[100];
					char publisher_temp[100];
	
					printf("\ntitle? ");
					scanf("%s",title_temp);

					printf("name? ");
					scanf("%s",name_temp);
				
					printf("publisher? ");
					scanf("%s",publisher_temp);

					copy(title[num], title_temp);
					copy(name[num], name_temp);
					copy(publisher[num], publisher_temp);

					num++;
					printf("complete!\n\n");
					break;
				}

			case 2:
				{
					char title_temp[100];
					int find=0;

					printf("\ntitle? ");
					scanf("%s",title_temp);

					for(int i=0;i<num;i++){
						find = cmp(title_temp, title[i]);
						if(find==1){
							printf("\nResult\ntitle: %s\nname: %s\npublisher: %s\n\n", title[i], name[i],publisher[i]);
							break;
						}
					}
					break;

				}

			case 5:
				{
					char title_temp[100];
					int find=0;

					printf("\ntitle? ");
					scanf("%s",title_temp);

					for(int i=0;i<num;i++){
						find = cmp(title_temp, title[i]);
						if(find==1){
							if(borrowed[i]>0)
								printf("already borrowed\n\n");
							else{
								borrowed[i]++;
								printf("borrow complete!\n\n");
							}
						}
						break;
					}
					break;
				}

			case 6:
				{
					char title_temp[100];
					int find=0;
					
					printf("\ntitle? ");
					scanf("%s",title_temp);

					for(int i=0;i<num;i++){
						find = cmp(title_temp, title[i]);
						if(find==1){
							if(borrowed[i]>0){
								borrowed[i]--;
								printf("return complete!\n\n");
							}
							else{
								printf("not borrowed\n\n");
							}
						}
						break;
					}
					break;
				}

		}
	}
	return 0;
}
void copy(char *dest, char *src){
	while(*src){
		*dest=*src;
		dest++;
		src++;
	}
	*dest=0;
	return;

}
int cmp(char *a, char *b){
	while(*a==*b && *a!=0 && *b!=0){
		a++;
		b++;
	}
	if(*a==0 && *b==0)
		return 1;
	return 0;
}
