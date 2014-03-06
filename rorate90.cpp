#include<iostream>
using namespace std;
//if given matrix is a square matrix then inplace, else have to construct a new one.
const int n=3;
void rotate(int a[][n], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
           
            int temp = a[i][j];
            a[i][j]=a[i][n-j-1];
            a[i][n-j-1]= temp;
        }
    }
    
}
void display(int a[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}
        };
         display(a);
         cout<<"after 90 rotation"<<endl;
        rotate(a, 3);
        display(a);
        return 0;
}

