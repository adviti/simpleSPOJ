#include<iostream>
#include<cmath>
using namespace std;

typedef unsigned long long int lld;

lld factBig(int n, int r)
{
    lld ans=1;
    if(r>n-r) r = n-r;
    if(r==0) return 1;
    for(int i = 0; i<r; i++)
    {
      
        ans = ans*(n-i)/double(i+1);
    }
    return ans;
}



//lld getAns(lld n, lld k)
//{
    //n = n-k;
    //lld a = n+k-1;
    //lld b = k-1;
    //cout<<fact(a)<<"/("<<fact(b)<<"*"<<fact(n)<<")"<<endl;
    //lld ans = fact(a)/(fact(b)*fact(n));
    //int ct=0;
    //lld temp = 1;
    //if(n>=b)
    //{
        //for(int i=a; i>n; i--)
        //{
            //temp = temp*i;
        //}
        //ans = temp/fact(b);
    //}
    //else
    //{
        //for(int i=a; i>b; i--)
        //{
            //temp = temp*i;
        //}
        //ans = temp/fact(n);
    //}
    
//return ans;
//}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        lld n, k;
        cin>>n>>k;
        cout<<ceil(factBig(n-1, k-1))<<endl;
    }
    return 0;}
