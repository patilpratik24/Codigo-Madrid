#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
    	char hex[100]; 
    	int i = 0;

    	while(number!=0)
    	{   
       
        	int temp = number % 16;
        
        	if(temp < 10)
        	{
           	 	hex[i] = temp + 48;
            		i++;
       		}	
        	else
        	{
            		hex[i] = temp + 55;
            		i++;
       	 	}
         
        number = number/16;
    	}
     
    for(int j=i-1; j>=0; j--)
	{       
	 cout << hex[j]<<endl;
	}
}
