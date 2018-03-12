#include <iostream>
using namespace std;

int main()
{
     int n,number,rem,rev = 0;

     cout<<"Enter a number: ";
     cin>>number;

     n = number;

     do
     {
         rem = number % 10;
         rev = (rev * 10) + rem;
         number = number / 10;
     } 
	while (number != 0);


     if (n == rev)
         cout<<"Palindrome";
     else
         cout<<"Not Palindrome";

    return 0;
}
