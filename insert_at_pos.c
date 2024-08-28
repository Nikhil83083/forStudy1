#include<stdio.h>
#include<malloc.h>


struct node
{
	int data;
	struct node* next;
};

void insert_at_pos(struct node**,int,int);
void insert_first(struct node**,int);
void insert_last(struct node**, int);
int count_nodes(struct node*);
void display(struct node*);

int main(void)
{
	struct node* first = NULL;

	insert_first(&first,20);
	insert_first(&first,10);
	insert_last(&first,60);
	insert_last(&first,70);

	insert_at_pos(&first,40,3);
	insert_at_pos(&first, 50, 4);

	display(first);
	return 0;
}

void insert_first(struct node**pphead,int iNo)
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory Allocation Failed");
		return;
	}
	newnode->data = iNo;

	if (*pphead == NULL)
	{
		newnode->next = NULL;
		*pphead = newnode;
		return;
	}
	newnode->next = *pphead;
	*pphead = newnode;
}

int count_nodes(struct node*phead)
{
	int count=0;

	while (phead != NULL)
	{
		count++;
		phead = phead->next;
	}
	return count;
}


void insert_last(struct node** pphead, int iNo)
{
	struct node* newnode = NULL;
	struct node* temp = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory Allocation Failed");
		return;
	}
	newnode->data = iNo;
	newnode->next = NULL;
    if (*pphead==NULL)
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
		printf("linked list empty");
		return;
	}
	else
	{
		while (phead!=NULL)
		{
			printf("[%d]->",phead->data);
			phead = phead->next;
		}
	}
}
void insert_at_pos(struct node**pphead,int iNo,int pos)
{
	int count = count_nodes(*pphead);
	int ipos = 0;

	if (pos > count || pos < 0)
	{
		printf("Invalid Position");
		return;
	}
	if (pos == 1)
	{
		insert_first(pphead, iNo);
		return;
	}
	else if (pos == count + 1)
	     {
		     insert_last(pphead, iNo);
		     return;
	     }
	else
	{
		struct node* newnode = NULL;
		struct node* temp = NULL;

		newnode = (struct node*)malloc(sizeof(struct node));
		if (newnode == NULL)
		{
			printf("Memory Allocation Failed");
			return;
		}
		newnode->data = iNo;
		temp = *pphead;
		count = 1;

		while (count < pos-1)
		{
			temp = temp->next;
			count++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}

}