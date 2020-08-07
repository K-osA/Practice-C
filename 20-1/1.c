#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int SizeOfArray;
	int *arr;

	scanf("%d",&SizeOfArray);

	arr = (int*)malloc(sizeof(int)*SizeOfArray);

	free(arr);

	return 0;
}
