#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter a number :";
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    int arr2[max+1]={0};
    for(int i=0;i<size;i++)
    {
        arr2[arr[i]]++;
    }

    int maxfreq=0, minfreq=size;
    for (int i = 0; i < max+1; i++)
    {
        if(arr2[i] !=0)
        {
            if(arr2[i] > maxfreq)
            {
                maxfreq = arr2[i];
            }        

            if(arr2[i] < minfreq)
            {
                minfreq = arr2[i];
            }
        }
    }    
for (int i = 0; i < max+1 ; i++)
{
    /* code */
    if(arr2[i] == maxfreq)
    {
        cout<<"Maximum frequency :"<<i<<endl;
    }

     if(arr2[i]== minfreq)
        {
            cout<<"Minimum frequency :"<<i<<endl;
        }
}

    
}