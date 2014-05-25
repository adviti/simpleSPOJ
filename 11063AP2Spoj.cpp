#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a, b, c;
        cin>>a>>b>>c;
        long long int t = 0;
        long long int d = 0;
        long long int temp = a+b;
        if(c%temp==0) t= 2*(c/temp);
        else  t= 2*(c/temp) + 1;
        cout<<t<<endl;
        if(t!=5)
        {
            d = (b-a)/(t-5);
        }
        long long int fterm = a - 2*d;
        cout<<fterm<<" ";
        for(int i=2; i<=t; i++)
        {
            fterm = fterm + d;
            cout<<fterm<<" ";
        }
    }
return 0;
}
