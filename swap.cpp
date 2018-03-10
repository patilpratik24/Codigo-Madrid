#include<iostream>
using namespace std;
int main()
{
	int x, y, temp;
	cout<<"Enter two numbers:\n";
	cin>>x>>y;
	cout<<"\nBefore swapping : x = "<<x<<" and y = "<<y<<endl;
	
	temp = x;
	x = y;
	y = temp;
	
	cout<<"\nAfter swapping : x = "<<x<<" and y = "<<y<<endl;

	
	
	
}
