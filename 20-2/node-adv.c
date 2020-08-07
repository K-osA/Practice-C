#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* nextNode;
};
struct Node* CreateNode(int);
struct Node* InsertNode(struct Node*, int);
struct Node* DestroyNode(struct Node*, struct Node*);
int main()
{
	struct Node* node1=CreateNode(100);
	return 0;
}

struct Node* CreateNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

	newNode->data=data;
	newNode->nextNode=NULL;

	return newNode;
}

struct Node* InsertNode(struct Node* currentNode, int data){
	struct Node* afterNode = CreateNode(data);

	afterNode->nextNode=currentNode->nextNode;
	currentNode->nextNode=afterNode;

	afterNode->data=data;

	return afterNode;
}
void DestroyNode(struct Node* destroy, struct Node* head){
	struct Node* current=head;

	while(current){
		if(current->nextNode==destroy){
			current->nextNode=destroy->nextNode;
			free(destroy);
			break;
		}
		current=current->nextNode;
	}
	return;
}
void PrintNode(struct 
