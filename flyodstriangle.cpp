#include <iostream>
using namespace std;

int main()
{
    	int n,a = 1;
    
    	cout<<"Enter the number of rows: "; 
	cin >> n;
    
    	for (int i = 1; i <= n; i++)
    	{
        	for (int c = 1; c <= i; c++)
        	{        
		    	cout<<a; 
		    	a++; 
        	}
         cout << endl;
    	}    
    return 0;
}
