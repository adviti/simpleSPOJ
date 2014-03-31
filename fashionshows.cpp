#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int getMaxSum(int n, int b[], int g[])
{
    int ans=0;
    sort(b, b+n);
    sort(g, g+n);
    for(int i=0; i<n; i++)
    {
        ans = ans + b[i]*g[i];
    }
    return ans;
}

int main()
{
    int tc;
    cin>>tc;
    int n, k;
    while(tc--)
    {
        cin>>n;
        int g[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>k;
            g[i] = k;
        }
        for(int i=0; i<n; i++)
        {
            cin>>k;
            b[i] = k;
        }
        
        int ans = getMaxSum(n, g, b);
        cout<<ans<<endl;
        
    }
    return 0;
}


