#include<iostream>
using namespace std;

int main()
{
	int totalsteps, x, y, daysrequired = 0, temp = 0, t = 0;
	
	cout<<"Enter the total number of steps: ";
	cin>>totalsteps;
	
	cout<<"\nEnter number of steps climed in a day: ";
	cin>>x;
	
	cout<<"\nEnter number of steps descended: ";
	cin>>y;

	for(int temp=0; temp<totalsteps; )
	{
		temp = t + x;
		t = temp - y;
		daysrequired++;

		if(temp == totalsteps)
		break;
	}
	

	cout<<"\nTotal number of days required = "<<daysrequired<<endl;
}
