#include<iostream>
using namespace std;

class Employee
{
	int id;
	char name[20];
	double sal;
public:

	Employee()
	{
		

		id=101;
		strcpy(this->name,"Not geiven");
		sal=1000.00;
	}
	Employee(int i,char* nm,double s)
	{
		

		id=i;
		strcpy(this->name,nm);
		sal=s;
	}
	void setId(int a)
	{
		this->id=a;
	}
	void setName(char* name )
	{
		strcpy(this->name,name);
	}

	void setSal(double s)
	{
		this->sal=s;
	}

	char* getName()
	{
		return this->name;
	}
	int getId()
	{
		return this->id;
	}
	double getSal()
	{
		return this->sal;
	}
	virtual void display()
	{
		cout <<"\n Name is : "<<name;
		cout <<"\n Id is :  "<< id;
		cout <<"\n salary is : "<<sal;

	}
	virtual double calSal()
	{
		return sal;
	}
};//class emp ends here

class SaleManager :public  Employee//1st step
{
	double incentive;
	int target;
public:

	SaleManager():Employee()//2nd step
	{
		
		incentive=-991;
		target=99;
	}
	SaleManager(int i,char* nm,double s,int t,double in)
		:Employee(i,nm,s)//2nd step
	{
		
		this->target=t;
			this->incentive=in;
	}
	void display()
	{
		Employee::display();//3rd step;
		cout <<"\n incentive is : "<<this->incentive;
		cout <<"\n target is : "<<this->target;
	}
	void setIncentive(double in)
	{
		this->incentive=in;
	}
	void setTarget(int t)
	{
		this->target=t;
	}
	int getTarget()
	{
		return this->target;
	}
	double getIncentive()
	{
		return this->incentive;
	}
	double calSal()
	{
		return this->getSal()+incentive;
	}
};//class SalesManager ends here

class Admin :public Employee
{
	double allowance;

public:
	Admin():Employee()
	{
		this->allowance=10;
	}
	Admin(int myid,char* n,double mysal,double a)
		:Employee(myid,n,mysal)
	{
		this->allowance=a;
	}
	void setallowance(double al)
	{
		this->allowance=al;
	}
	double getallowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout <<"\n allownace is : "<<this->allowance;
	}
	double calSal()
	{
		return this->getSal()+allowance;
	}
};//class Admin ends here

void main()
{
	Employee * ep;//Generic pointer 
	
	Employee e1(101,"Sachin",20999);//object of Employee
	ep=&e1;
	ep->display();
	cout << "\ncalculated salary of emp is :"<<ep->calSal();
	cout <<"\n\n ";
		
	SaleManager s1(109,"virat",3400,56,666);
	ep=&s1;
	ep->display();
	cout << "\ncalculated salary of salman is :"<<ep->calSal();
	cout <<"\n\n ";

		
	Admin a1(107,"Anil",3333,3400);
	ep=&a1;
	ep->display();
	cout << "calculated salary of admin is :"<<ep->calSal();

	cout <<"\n\n \n\n";

}