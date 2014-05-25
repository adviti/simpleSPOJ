#include<iostream>
#include<cstdio>
using namespace std;
//number of words possible with(0,1,2) 
void numWordsPossible(int len)
{
    int dp[4][len];
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(j==0) dp[i][j]=1;
           else dp[i][j]=0;
        }
        
    }
    
    
    
    for(int j=0; j<len; j++)
    {
        for(int i=0; i<3; i++)
        {
            if(j==0) dp[i][j]=1;
            else
            {
                if(i==0) 
                {
                    dp[i][j] = dp[i][j-1] + dp[i+1][j-1];
                    //cout<<dp[i][j-1]<<"   +    "<<dp[i+1][j-1]<<endl;
                    //cout<<i<<"   j="<<j<<"  "<<dp[i][j]<<endl;
                }
                    
                else if(i==1) dp[i][j] = dp[i-1][j-1] + dp[i][j-1] + dp[i+1][j-1];
                else dp[i][j] = dp[i][j-1] + dp[i-1][j-1]; 
            }
        }
    }
    
    
    
    for(int i=0; i<len; i++)
    {
        int sum =0 ;
        for(int j=0; j<3; j++)
        {
           sum = sum+dp[j][i] ;
           //cout<<"sum "<<sum<<"val added   "<<dp[j][i]<<endl;
        }
        dp[3][i] = sum;
        
    }
    cout<<dp[3][len-1]<<endl;
    //for(int i=0; i<4; i++)
    //{
        //for(int j=0; j<len; j++)
        //{
           //cout<<dp[i][j]<<" ";
        //}
        //cout<<endl;
    //}
    
    
}



int main()
{
    int num;
    cin>>num;
    numWordsPossible(num);
    
    return 0;
}
