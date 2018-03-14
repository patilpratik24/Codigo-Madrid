#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;

	if((number&(number-1)) == 0)
	cout<<"2's Power! :)\n";
	
	else
	cout<<"Not 2's Power :(\n";

	
}
