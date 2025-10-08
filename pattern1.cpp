#include<iostream>
using namespace std;
int main()
{
    for(int i=65; i < 65+5 ; i++)
    {
        for(int j=65; j<i+1 ; j++)
        {
            cout<<char(i);
        }
        cout<<endl;
    }
}