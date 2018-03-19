#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int sum=0,i;
	string s;
	cout<<"Enter a string: ";	
	getline(cin,s);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] >= 48 && s[i] <= 57)
		sum=sum+s[i]-48;
	}

	cout<<"Sum is:"<<sum<<endl;
	
}
	
