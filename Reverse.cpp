#include<iostream>

using namespace std;
void reverse()
{
	int num;

	cout << "Enter Number";
	cin >> num;
	int rem = 0, rev = 0;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	cout << rev;

}
int main()
{
	reverse();
	return 0;
}