#include<iostream>
using namespace std;
int main()
{
    int size, sum=0, max=INT8_MIN, ansStart=-1, ansEnd=-1, start;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];
    for(int i=0; i < size; i++)
    {
        cout<<"Enter a number :";
        cin>>arr[i];
    }

    for(int i=0; i<size; i++)
    {
        if(sum==0) 
        start=i;
        
        sum+=arr[i];

        if(sum > max)
        {
            max = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Maximum sum :"<<max<<endl;

    cout<<ansStart<<endl;
    cout<<ansEnd<<endl;
    for(int i=ansStart; i<=ansEnd; i++)
    {
        cout<<arr[i]<<" ";
    }
}