#include<iostream>
using namespace std;



int f1(int n)
{
    int cont = 0;
     for(int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            if(i*j>n)
                break;
            cont++;    
        }
    }
    return cont;
}

int main()
{
    long long int r;
    cin>>r;
    cout<<f1(r)<<endl;
    return 0;}
