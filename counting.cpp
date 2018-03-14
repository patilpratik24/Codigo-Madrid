#include<iostream>
using namespace std;
int main()
{
	int number, count1 = 0,count0 = 0, n;
	cout<<"Enter a number: ";
	cin>>number;
	n = number;
	
	while(n != 0)
	{
		if((n&1) == 1)
		count1++;

		n = n>>1;
	}
	cout<<"There are "<<count1<<" number of 1's in "<<number<<endl;
}

