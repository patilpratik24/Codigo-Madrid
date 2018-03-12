#include<iostream>
using namespace std;

class evenodd{
	private:
	int num;
	
	public:
	void get_data()
	{
		cout<<"Enter a number: ";
		cin>>num;
	}

	void with_mod()
	{
		if(num%2 == 0)
		cout<<"\nEven!\n";
		
		else
		cout<<"\nOdd!\n";
	}

	void without_mod()
	{
		if((num)&1 == 0)
		cout<<"\nEven!";

		else
		cout<<"\nOdd!";
	}
};

int main()
{
	int ch, conti;
	evenodd obj;
	
	do{
	obj.get_data();
	cout<<"\nEnter your choice:\n1.)With mod\n2.)Without mod\n";
	cin>>ch;
	
		switch(ch)
		{
			case 1: 
			obj.with_mod();
			break;

			case 2:
			obj.without_mod();
			break;

			default:
			cout<<"\nPlease enter a valid choice\n";
			break;
		}
		cout<<"\nDo you want to test another number?(Enter 1 for yes): ";
		cin>>conti;
	}
	while(conti==1);


















}
