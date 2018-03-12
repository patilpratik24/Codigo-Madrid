#include<iostream>
using namespace std;

int main()
{
	int number;
	int flag = 0;
	cout<<"Enter a number: ";
	cin>>num;

	for(int i=2; i<=number/2; i++)
	{
		if(number%i == 0)
		{
			flag = 1;
			break;
		}
		
		
		
	}
	if(flag == 1)
	cout<<"\nNot Prime\n";
	
	else
	cout<<"\nPrime\n";	
}
