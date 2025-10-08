#include<iostream>
using namespace std;
int main()
{
    int n=1,l;
    cout<<"Enter the number of lines :";
    cin>>l;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
}