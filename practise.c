#include<stdio.h>
#include<malloc.h>

//static int no = 1;

struct node
{
	int data;
	struct node* next;
};

void insert_first(struct node**, int);
void display(struct node*);
void middle(struct node*);

int main(void)
{

	struct node* first = NULL;
	insert_first(&first, 70);
	insert_first(&first, 60);
	insert_first(&first, 50);
	insert_first(&first, 40);
	insert_first(&first, 30);
    insert_first(&first, 20);
	insert_first(&first, 10);
	middle(first);
	

	 display(first);

	//


	return 0;
}
void middle(struct node*phead)
{
	struct node* temp = phead;
	if(phead!=NULL)
	{ 
		temp = phead;
	}
	while (phead != NULL)
	{
		printf("[%d]->",phead->data);
		phead = phead->next;
	}

}

void insert_first(struct node** pphead, int no)
{
	struct node* newnode = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory Allocation FAILED");
		return;
	}

	newnode->data = no;

	no++;
	if (*pphead == NULL)
	{
		newnode->next = NULL;
		*pphead = newnode;
		return;
	}

	newnode->next = *pphead;
	*pphead = newnode;
}


void display(struct node* phead)
{
	
	if (phead == NULL)
	{
		printf("Enter some Data First in linked_list");
	}
	struct node* temp = phead;

	while (phead!=NULL && temp!=NULL && phead->next != NULL)
	{
		
		phead = phead->next->next;
		//printf("\n%d middle\n", phead->data);
		temp = temp->next;
		
	}
	printf("%d middle",temp->data);
	
}


