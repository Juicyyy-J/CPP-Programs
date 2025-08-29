#include <iostream>
using namespace std;
int main() 
{
    char str[200];
    int i =0, len =0, maxLen =0, start=0, maxStart=0;
    cout<<"Enter sentence: ";
    cin.getline(str,200);
    while (true) {
        if(str[i]!=' ' && str[i]!='\0') {
            len++;
        } 
        else 
        {
            if(len>maxLen) 
            {
                maxLen=len;
                maxStart=start;
            }
            len = 0;
            start=i+1;
        }
        if(str[i]=='\0') 
        break;
        i++;
    }
    cout<<"Longest word: ";
    for(i=maxStart;i<maxStart+maxLen;i++)
    {
        cout<<str[i];
    }    
}
