#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	int size;
	int top;
	int* ptr;
public:
	stack(int a)
	{
		this->size=a;
		top=-1;
		this->ptr=new int[this->size];
		for(int i=0;i<this->size;i++)
		{
			this->ptr[i]=0;
		}
	}
	bool push(int a)
	{
		if(this->top==size-1)
		{
			return false;
		}
		else
		{
			this->ptr[++top]=a;
			return true;
		}
	}
	bool pop(int& a)
	{
		if(this->top==-1)
		{
			return false;
		}
		else
		{
			a=this->ptr[top--];
			return true;
		}
	}
	void display()
	{
		for(int i=0;i<this->size;i++)
		{
			cout<<this->ptr[i];
		}
	}

};
void main()
{
	stack s(5);
	s.display();
	if(s.push(10))
	{
	cout<<"value of 10 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(150))
	{
	cout<<"value of 150 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(20))
	{
	cout<<"value of 20 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(30))
	{
	cout<<"value of 30 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(40))
	{
	cout<<"value of 40 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(50))
	{
	cout<<"value of 50 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	if(s.push(60))
	{
	cout<<"value of 60 push successfully\n";
	}
	else
	{
		cout<<"stack is full\n";
	}
	int a;
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"\nstack is empty";
	}
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"\nstack is empty";
	}
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"stack is empty";
	}
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"stack is empty";
	}
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"stack is empty";
	}
	if(s.pop(a))
	{
		cout<<"\nvalue poped :"<<a;

	}
	else
	{
		cout<<"stack is empty";
	}

	getch();
}