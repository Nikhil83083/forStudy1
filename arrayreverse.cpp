#include<iostream>
using namespace std;

void display(int*);
void reverse();
int main()
{
	reverse();
	return 0;
}
void reverse()
{
	int arr[10];
	int len = 9;
	cout << "Enter elements for array" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	display(arr);
	for (int i = 0; i < 10 / 2; i++)
	{
		arr[i] = arr[i] + arr[len];
		arr[len] = arr[i] - arr[len];
		arr[i] = arr[i] - arr[len];
		len--;
	}
	cout << endl;
	display(arr);

}
void display(int* b)
{
	for (int i = 0; i < 10; i++)
	{
		cout << b[i]<<" ";
	}
}

