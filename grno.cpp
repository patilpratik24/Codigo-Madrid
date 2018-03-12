#include<iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout<<"Enter three numbers: \n";
	cin>>x>>y>>z;
	
	if(x>y && x>z)
	cout<<"The greatest number amongst "<<x<<","<<y<<","<<z<<" is: "<<x<<endl;
	
	else if(y>z)
	cout<<"The greatest number amongst "<<x<<","<<y<<","<<z<<" is: "<<y<<endl;

	else
	cout<<"The greatest number amongst "<<x<<","<<y<<","<<z<<" is: "<<z<<endl;
}
