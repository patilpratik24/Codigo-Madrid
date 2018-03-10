#include<iostream>
using namespace std;

int main()
{
	int num;
	int flag = 0;
	cout<<"Enter a number: ";
	cin>>num;

	for(int i=2; i<=num/2; i++)
	{
		if(num%i == 0)
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
