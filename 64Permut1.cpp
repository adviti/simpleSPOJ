#include<iostream>
using namespace std;

int dp[13][99] ;

int permHavingInv(int n, int k)
{
    int permCount = 0;
    if(n==0) return dp[n][k]=0;
    if(k==0) return dp[n][k]=1;
    if(dp[n][k]!=-1) return dp[n][k];
       for(int i=0; i<=k && i<n; i++)
        {
            permCount += permHavingInv(n-1, k-i);
        }
        return dp[n][k] = permCount;
    
}
void initialize()
{
    for(int i=0; i<13; i++)
    {
        for(int j=0; j<99; j++)
        {
            dp[i][j] = -1;
        }
       
    }
}


void display()
{
    for(int i=0; i<13; i++)
    {
        for(int j=0; j<13; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
       
    }
}



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        initialize();
        //display();
        int n, k;
        cin>>n>>k;
        
        cout<<permHavingInv(n, k)<<endl;
    }
return 0;
}
