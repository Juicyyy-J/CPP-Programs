#include<iostream>
using namespace std;
int main()
{
    int m,p,m_1,n,k;
    cout<<"Enter number of rows and columns of First Matrix :";
    cin>> n>> m;
    int arr1[n][m];

    cout<<"Enter Elements in First matrix";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>> arr1[i][j]; 
        }
    }

    cout<<"Enter number of rows of second matrix :";
    cin>> m_1>> p;

    if(m_1 != m)
    {
        cout<<"Matrix multiplication isn't possible";
    }

    else
    {
        int arr2[m_1][p];
        cout<<"Enter Elements in Second matrix";
        for(int i=0;i < m_1;i++)
        {
            for(int j=0; j<p; j++)
            {
                cin>>arr2[i][j];
            }
        }
        int arr3[n][p]= {0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<p; j++)
            {
                for(int k=0; k<m; k++)
                {
                    arr3[i][j]+= arr1[i][k] * arr2[k][j]; 
                }
            }
        }

        cout<<"Resultant Matrix :";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<p; j++)
            {
                cout<<arr3[i][j];
            }
            cout<<endl;
        }
    }

}