#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void s(int n, int m)
{
    if(n==m) cout<<"1"<<endl;
    else if(n==0 && m!=0) cout<<"0"<<endl;
    else if(m==0 && n!=0) cout<<"0"<<endl;
    
    //int ans = s(n-1, m-1);
    //for(int i=1; i<=n-m; i++)
    //{
        //int temp1 = m%2;
        //ans = ans + s(n-i-1, m-1)&temp1;
        //ans = ans%2;
    //}
    
    
    //int ans = 0;
    //for(int i=0; i<=n-m; i++)
    //{
        //ans = ans + s(n-i-1, m-1)*pow(m, i);
    //}
    else
    {
    if(((n-m)&((m-1)/2))==0) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
    
    
    //return ans;
}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, m;
        cin>>n>>m;
        s(n,m);
    }
    return 0;
}
