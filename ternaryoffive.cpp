#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5;
    cout<<"\nEnter 5 numbers"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    (num1>num2)?((num1>num3)?(num1>num4)?(num1>num5)?cout<<num1:cout<<num5  
    :(num4>num5)?cout<<num4:cout<<num5  
    :(num3>num4)?(num3>num5)?cout<<num3:cout<<num5  :(num4>num5)?cout<<num4:cout<<num5)        
    
 :  ((num2>num3)?(num2>num4)?(num2>num5)?cout<<num2:cout<<num5 
 :(num4>num5)?cout<<num4:cout<<num5 
 :(num3>num4)?(num3>num5)?cout<<num3:cout<<num5
 :(num4>num5)?cout<<num4:cout<<num5);
}