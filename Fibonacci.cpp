#include<iostream>
using namespace std;
int main()
{
    int num,a=0,b=1,sum=0;
    cout<<"Enter the nth Fibonacci number: ";
    cin>>num;
    if(num==0)
    cout<<"0"<<endl;
    else if(num == 1)
    cout<<"1";
    else
    {
    for(int i=2; i<=num; i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<sum;
    }
}    