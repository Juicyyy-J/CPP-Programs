#include<iostream>
using namespace std;
int main()
{
    int base,pow,res=1;
    cout<<"\nEnter Base: ";
    cin>>base;
    cout<<"\nEnter power: ";
    cin>>pow;
    for(int i=pow;i>0;i--)
    {
        res*=base;
    }
    cout<<res;

}