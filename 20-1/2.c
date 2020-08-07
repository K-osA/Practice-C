#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int student;
	int i, input;
	int *score;
	int sum=0;

	scanf("%d",&student);

	score=(int*)malloc(student*sizeof(int));

	for(i=0;i<student;i++){
		printf("%d's score: ", i);
		scanf("%d",&input);

		score[i]=input;
	}
	for(i=0;i<student;i++)
		sum+=score[i];

	printf("avg score : %d\n",sum/student);
	free(score);
	return 0;
}
