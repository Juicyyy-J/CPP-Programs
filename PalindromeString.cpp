#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    bool isPalindrome = true;
    
    cout<<"Enter a string :";
    getline(cin,str);
    int n=str.length();
    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-1-i])
        {
            isPalindrome=false;
            break;
        }        
    }
    if(isPalindrome)
    cout<<"String is Palindrome";
    else
    cout<<"String is not Palindrome";
}