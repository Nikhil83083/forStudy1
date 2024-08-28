#include<iostream>

using namespace std;
class Student
{
	int **p;
	int Student_count;
	int Subject_count;
	string *names;
	int i, j;
	

 public:
	float sum;
	Student(int a, int b)
	{
		sum = 0;
		Student_count = a;
		Subject_count = b;
		
		p = new int* [Student_count];

		for (i = 0; i < Subject_count; i++)
		{
			p[i] = new int[Subject_count];
		}
		names = new string[Student_count];
		setData();
	}
	void setData()
	{
		for( j=0;j<Student_count;j++)
		{
			cout << "Enter Name For Student " << j + 1<<endl;
			cin >> names[j];
			for ( i = 0; i < Subject_count; i++)
			{
				cout << "Enter Marks For Sub" <<i+1<< endl;
				cin >> p[j][i];
			}
			
		}
		
	}
	void getData()
	{
		float average = 0;
		j = 0;
		for (j = 0; j < Student_count; j++)
		{
			cout << "Name of Student is :\t" << names[j] << endl;
			for (i = 0; i < Subject_count; i++)
			{
				cout << "Marks For sub\t" << i + 1 << "\t" << p[j][i] << endl;
				sum = sum + p[j][i];
			}
			cout << endl;
			average = sum / Subject_count;
			cout << "Average for Student " << j + 1 << "\t:"<<average;
			cout << endl;
			cout << endl;
			sum = 0;
		}
		
	
	}
	
	
	~Student()
	{
		for (i = 0; i < Subject_count; i++)
		{
			delete p[i];
		}
		delete[]p;
		delete[]names;
		cout << "In destructor";
	}
};
int main()
{
	Student S1(2,2);
	S1.getData();
	
	return 0;
}