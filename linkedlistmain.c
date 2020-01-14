#include<stdio.h>
#include "linkedlist.h"

int main()
{
	int choice=0;
	char ch=' ';
	Node *HEAD = NULL;
	Node *TAIL = NULL;
	do
	{
		printf("\n\n1. Add NewNode at the beginning of the list");
		printf("\n2. Add NewNode at the end of the list");
		printf("\n3. Add NewNode at the between of the list");
		printf("\n4. Delete Node at the beginning of the list");
		printf("\n5. Delete Node at the end of the list");
		printf("\n6. Delete Node at the between of the list");
		printf("\n7. Display The List");
		scanf_s("%d", &choice);
		switch (choice)
		{
			case 1: 
				if (HEAD == NULL)
				{
					TAIL=HEAD = AddNewNodeatBeginning(HEAD);
				}
				else
				{
					HEAD = AddNewNodeatBeginning(TAIL);
				}

				
				break;
			case 2:
				if (HEAD == NULL)
				{
					TAIL = HEAD = AddNewNodeatEnd(HEAD);
				}
				else
				{
					TAIL = AddNewNodeatEnd(TAIL);
				}
			break;
			case 3:
				TAIL = AddNewNodeatBetween(HEAD);
				break;
			case 4:
				HEAD = DeleteNodeatBeginning(HEAD);
				break;
			case 5:
				TAIL = DeleteNodeatEnd(HEAD);
				break;
			case 6:
				HEAD = DeleteNodeatBetween(HEAD);
						//sprintf("\nHello");
				break;
			case 7:DisplayLinkedList(HEAD);
				break;
			case 8:
				/*TAIL = HEAD;
					HEAD=Reverse(HEAD);*/
				break;
			default :
				break;

		}

		printf("\nEnter your Choice y/n:");
		scanf_s("%c", &ch);
		scanf_s("%c", &ch);
	} while (ch=='Y' || ch == 'y');

	return 0;


}