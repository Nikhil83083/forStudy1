#include<stdio.h>
#include<malloc.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
void insert_first_doub(struct node** ,int);
void display(struct node*);

int main()
{
	struct node* first = NULL;
	

	insert_first_doub(&first,10);
	insert_first_doub(&first, 20);
	insert_first_doub(&first, 30);
	insert_first_doub(&first, 40);

	display(first);

	return 0;
}

void insert_first_doub(struct node**pphead,int iNo)
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory Allocation Failed");
			return;
	}

	newnode->data = iNo;
	newnode->prev = NULL;

	if (*pphead == NULL)
	{
		newnode->next = NULL;
		*pphead = newnode;
		return;
	}

	newnode->next = *pphead;
	(*pphead)->prev = newnode;
	*pphead = newnode;
}

void display(struct node*phead)
{
	if (phead == NULL)
	{
		printf("Linked List is Empty");
	}
	while (phead != NULL)
	{
		printf("[%d]->",phead->data);
		phead=phead->next;
	}
}