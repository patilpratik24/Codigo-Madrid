#include <iostream>
using namespace std;

int main()
{
    char c;

    cout <<"Enter an alphabet: ";
    cin >>c;

   
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	cout <<c<< " is a vowel.\n";
    else
        cout <<c<< " is a consonant.\n";

    return 0;
}
