#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, n, position, bits;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<"\nEnter the position from which the bits are to be toggeled: ";
	cin>>position;
	cout<<"\nEnter the number of bits that are to be toggeled: ";
	cin>>bits;
	
	n = pow(2,position-1);

	
		for(int i=0; i<bits; i++)
		{
			number = number | n;
			n = n >> 1;
		}
		
	
	cout<<number<<endl;

	
}
