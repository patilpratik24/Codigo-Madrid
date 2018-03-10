#include<iostream>
using namespace std;

int main()
{
	int num, rem, rev = 0;
	cout<<"Enter a number: ";	
	cin>>num;

	cout<<"\nThe reverse of "<<num<<" is: ";
	do
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num = num/10;
	}
	while(num != 0);
	cout<<rev<<endl;
}
