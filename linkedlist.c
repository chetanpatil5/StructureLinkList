#include<stdio.h>
#include "linkedlist.h"

//Allocate Memory for Node.

Node* AllocateNewNodeMemory()
{
	Node *nn = (Node *)malloc(sizeof(Node));
	printf("\nEnter the node value : \n");
	scanf_s("%d", &nn->Data);

	nn->next = NULL;
	return nn;
}
//Add node
Node* AddNewNodeatBeginning(Node *head)
{
	if (head == NULL)
	{
		head = AllocateNewNodeMemory();
		return head;
	}
	else
	{
		Node *newnode = AllocateNewNodeMemory();
		newnode->next = head;
		return newnode;
	}
	
}
Node* AddNewNodeatEnd(Node *tail) 
{
	if (tail == NULL)
	{
		tail = AllocateNewNodeMemory();
		return tail;
	}
	else
	{
		Node *newnode = AllocateNewNodeMemory();
		tail->next = newnode;
		return newnode;
	}
}
Node* AddNewNodeatBetween(Node *head) 
{
	if (head == NULL)
	{
		head = AllocateNewNodeMemory();
		return head;
	}
	else
	{
		int pos=0;
		printf("\nEnter then Position at which want to insert element:");
		scanf_s("%d", &pos);
		int i = 1;
		Node *temp;
		temp = head;
		Node *newnode = AllocateNewNodeMemory();
		while (temp != NULL)
		{
			i++;
			if (i == pos)
				break;
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;

		while (temp != NULL)
		{
			temp = temp->next;
		}
		return temp;
		
	}

	

}

//Delete node

Node* DeleteNodeatBeginning(Node *head) 
{
	Node *temp;
	temp = head;
	if (head == NULL)
	{
		printf("\nNo nodes to be deleted");
	}
	else
	{
		head = head->next;
	}
	return head;
}
Node* DeleteNodeatEnd(Node *head) 
{
	Node *temp;
	temp = head;
	if (head == NULL)
	{
		printf("\nNo nodes to be deleted");
	}
	else
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NULL;
	}
	return temp;
}
Node* DeleteNodeatBetween(Node *head) {
	int pos = 0;
	Node *temp;
	temp = head;
	if (head == NULL)
	{
		printf("\nNo nodes to be Deleted");
	}
	else
	{
		printf("\nEnter the position to be Deleted");
		scanf_s("%d",&pos);
		
		int i = 0;
		while (temp != NULL)
		{
			i++;
			if (pos == i-1)
				break;
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}
	return head;
}

Node* Reverse(Node *head);
//{
//	Node *temp = head;
//	Node *nxt = NULL;
//	Node *prev = NULL;
//
//	while (temp != NULL)
//	{
//		nxt = temp->next;
//		temp->next = prev;
//		prev = temp;
//		temp = nxt;
//	}
//	return prev;
//
//}

//Display

void DisplayLinkedList(Node *head) 
{
	Node *temp;
	temp = head;
	while (temp!= NULL)
	{
		printf("%d", temp->Data);
		temp = temp->next;
	}
}
