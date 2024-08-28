#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

void insert_last_singly(struct node**,int);
void display(struct node*);

int main(void)
{
	struct node *first = NULL;

	insert_last_singly(&first, 10);
	insert_last_singly(&first, 20);
	insert_last_singly(&first, 30);
	insert_last_singly(&first, 40);
	insert_last_singly(&first, 50);
	insert_last_singly(&first, 60);

	display(first);
	return 0;
}

void insert_last_singly(struct node**pphead, int iNo)
{
	struct node* newnode = NULL;
	struct node* temp;

	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory Allocation Failed");
		return;
	}
	newnode->data = iNo;
	newnode->next = NULL;
   
	if (*pphead == NULL)
	{
		*pphead = newnode;
		return;
	}

	temp = *pphead;

	while (temp->next != NULL)
	{
		temp = temp->next;
	
	}
	
	temp->next = newnode;
}
void display(struct node*phead)
{

	if (phead == NULL)
	{
		printf("Linked List Is Empty");
		return;
	}
	while(phead!=NULL)
	{
		printf("[%d]->", phead->data);
		phead = phead->next;
	}
}