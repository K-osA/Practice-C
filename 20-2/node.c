#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* nextNode;
};
void PrintNodeFrom(struct Node*);
struct Node* CreateNode(int);
struct Node* InsertNode(struct Node*, int);
void DestroyNode(struct Node*, struct Node*);

int main()
{
	struct Node* Node1=CreateNode(100);
	struct Node* Node2=InsertNode(Node1, 200);
	struct Node* Node3=InsertNode(Node2, 300);
	struct Node* Node4=InsertNode(Node2, 400);

	PrintNodeFrom(Node1);
	return 0;
}

void PrintNodeFrom(struct Node* from){
	while(from){
		printf("Node's Data : %d\n",from->data);
		from=from->nextNode;
	}
}

struct Node* CreateNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data=data;
	newNode->nextNode=NULL;

	return newNode;
}

struct Node* InsertNode(struct Node* current, int data){
	struct Node* after = current->nextNode;

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data=data;
	newNode->nextNode=after;

	current->nextNode=newNode;

	return newNode;
}
void DestroyNode(struct Node* destroy, struct Node* head){
	struct Node *next=head;

	if(destroy==head){
		free(destroy);
		return;
	}

	while(next){
		if(next->nextNode==destroy)
			next->nextNode=destroy->nextNode;
		next=next->nextNode;
	}
	free(destroy);
}
