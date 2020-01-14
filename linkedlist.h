#pragma once
#include<stdio.h>
typedef struct Node
{
	int Data;						//
	struct Node *next;//self referential pointer ---points to a structure of similar type{ struct }

}Node;

//Allocate Memory for Node.

Node* AllocateNewNodeMemory();
//Add node
Node* AddNewNodeatBeginning(Node *);
Node* AddNewNodeatEnd(Node *);
Node* AddNewNodeatBetween(Node *);

//Delete node

Node* DeleteNodeatBeginning(Node *);
Node* DeleteNodeatEnd(Node *);
Node* DeleteNodeatBetween(Node *);

//Display

void DisplayLinkedList(Node *);
Node* Reverse(Node *);



//void FreeNodeMemory(Node);
