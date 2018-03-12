#include<iostream>
using namespace std;

int main()
{
	
	int n,nu,num=0,rem;
	cout<<"Enter a number: ";
	cin>>n;
	nu=n;
	while(nu != 0)
	{
		rem = nu % 10;
		num = num + rem* rem* rem;
		nu = nu / 10;
	}
	if(num == n)
	{
		cout<<"Armstrong number.\n";
	}
	else
	{
		cout<<"Not an armstrong number,\n";
	}
	return 0;
}
