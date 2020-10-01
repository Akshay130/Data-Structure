#include<iostream>
using namespace std;

// reverse string

int main()
{
    string s;
    int i;
    cout<<"enter string\n";
    cin>> s;
    for (int i = s.length()-1; i >=0; i--)
    {
        cout<<s[i];
    }
    return 0;
}
