#include<iostream>
using namespace std;


int maXX(int a, int b, int c)
{
    int ans = max(a, b);
    return max(ans, c);
}
int maxStones(int tilearr[][5], int n, int m)
{
    int dp[n][m];
    int maxm = 0;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0) dp[i][j] = tilearr[i][j];
            if(j==0) dp[i][j] = tilearr[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
            else dp[i][j] = tilearr[i][j] + maXX(dp[i-1][j] , dp[i-1][j-1], dp[i-1][j+1]);
        }
    }
    for(int j=0; j<m; j++)
    {
        maxm = dp[n-1][0];
        if(dp[n-1][j]>maxm) maxm = dp[n-1][j];
    }
    return maxm;
}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<maxStones(a, n, m)<<endl;
    }
    return 0;
}
