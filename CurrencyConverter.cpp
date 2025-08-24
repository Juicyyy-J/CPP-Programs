#include <iostream>
using namespace std;
int main()
{
    int amt;
    cout<<"\nEnter the amount:";
    cin>>amt;
    int notes[10]={2000,500,200,100,50,20,10,5,2,1};
    int count[10]={0};

    for(int i=0;i<10;i++)
    {
        if(amt>=notes[i])
        {
            count[i]=amt/notes[i];
            amt=amt%notes[i];
        }
    }
    cout<<"\nCurrency Counts"<<endl;
    for(int i=0;i<10;i++)
    {
        if(count[i]!=0)
        {
            cout<<notes[i]<<":"<<count[i]<<endl;
        }
    }
    return 0;
}
