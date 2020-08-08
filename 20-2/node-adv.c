#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* nextNode;
	struct Node* prevNode;
};
struct Node* CreateNode(int);
struct Node* InsertNode(struct Node*, int);
void DestroyNode(struct Node*, struct Node*);
void PrintNodeFrom(struct Node*);
int CountNode(struct Node*);
int SearchNode(struct Node*, struct Node*);
int main()
{
	struct Node* node1=CreateNode(100);
	struct Node* node2=InsertNode(node1, 200);
	struct Node* node3=InsertNode(node2, 300);
	struct Node* node4=InsertNode(node2, 400);

	PrintNodeFrom(node1);
	printf("%d\n",SearchNode(node1, node3));
	return 0;
}

struct Node* CreateNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

	newNode->data=data;
	newNode->prevNode=NULL;
	newNode->nextNode=NULL;

	return newNode;
}

struct Node* InsertNode(struct Node* currentNode, int data){
	struct Node* afterNode = CreateNode(data);

	afterNode->prevNode=currentNode;
	if(currentNode->nextNode)
	currentNode->nextNode->prevNode=afterNode;

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
void PrintNodeFrom(struct Node* from){
	while(from){
		printf("prev : %p\ncurrent : %p\nnext : %p\ndata : %d\n",from->prevNode, from, from->nextNode, from->data);
		printf("-----------------------------------------\n");
		from=from->nextNode;
	}
}
int CountNode(struct Node* head){
	int cnt=0;
	while(head){
		cnt++;
		head=head->nextNode;
	}
	return cnt;
}
int SearchNode(struct Node* head, struct Node *search){
	while(head){
		if(head==search)
			return head->data;
		head=head->nextNode;
	}
}
