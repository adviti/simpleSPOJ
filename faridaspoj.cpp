#include<iostream>
using namespace std;

typedef long long int lld;

int getMaxCoins(int arr[], int n)
{
    if(n==0) return 0;
    if(n==1) return arr[0];
    else
    {
        return max(arr[n-1] + getMaxCoins(arr, n-2), getMaxCoins(arr, n-1));
    }
}

lld getMaxCoinsDP(lld arr[], lld n)
{
    lld dp[n+1];
    dp[0] = 0;
    dp[1] = arr[0];
    
    for(int i=2; i<n+1; i++)
    {
        dp[i] = max(arr[i-1]+dp[i-2], dp[i-1]);
    }
    return dp[n];
}

int main()
{
    int tc;
    cin>>tc;
    int j=1;
    while(j<=tc)
    {
        lld n;
        cin>>n;
        lld arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        //cout<<"Case "<<j<<": "<<getMaxCoins(arr, n)<<endl;
        cout<<"Case "<<j<<": "<<getMaxCoinsDP(arr, n)<<endl;
        j++;
    }
    return 0;
}
