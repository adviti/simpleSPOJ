#include<iostream>
using namespace std;


int maXX(int a, int b, int c)
{
    int ans = max(a, b);
    return max(ans, c);
}
int maxStones(int **tilearr, int n, int m)
{
    //tilearr = new int* [n];
    //for (int i=0; i < n; i++)
    //tilearr[i] = new int[m];
    
    int dp[n][m];
    int maxm = 0;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0) 
            {
                
                dp[i][j] = tilearr[i][j];
                
            }
            else if(j==0) 
            {
                dp[i][j] = tilearr[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
            }
            else if(j==m-1) 
            {
                dp[i][j] = tilearr[i][j] + max(dp[i-1][j] , dp[i-1][j-1]);
            }
            else 
            {
                dp[i][j] = tilearr[i][j] + maXX(dp[i-1][j] , dp[i-1][j-1], dp[i-1][j+1]);
            }
        }
    }
    maxm = dp[n-1][0];
    for(int j=0; j<m; j++)
    {
        
        
        if(dp[n-1][j]>maxm) 
        {
            
            maxm = dp[n-1][j];
        }
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
        
        int **tilearr;
        tilearr = new int* [n];
        for (int i=0; i < n; i++)
            tilearr[i] = new int[m];
            
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>tilearr[i][j];
            }
        }
        cout<<maxStones(tilearr, n, m)<<endl;
    }
    return 0;
}
