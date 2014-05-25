#include<iostream>
using namespace std;

bool isSubsetSum(int N, int left, int right, int arr[])
{
    if(N==0) return true;
    else if(N!=0 && right<0) return false;
    else
    {
        return isSubsetSum(N, left, right-1, arr) || isSubsetSum(N-arr[right], left, right-1, arr);
    }
}

bool isSubsetSumDP(int N, int left, int right, int arr[])
{
    int dp[N+1][right+2];    //right =  total number of elements available -1 (array index) = m-1; second dim of array =   total number of elements available + none available cases.(m+1)
    
    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<right+2; j++)
        {
           if(i==0) dp[i][j] = 1;
           else if(j==0) dp[i][j] = 0;
           else if (arr[j-1]>i) dp[i][j] = dp[i][j-1];
           else 
           {
               
               {dp[i][j] = dp[i][j-1] || dp[i-arr[j-1]][j-1];}
               
           }
        }
    }
    
    for(int i=0; i<N+1; i++)
    {
        for(int j=0; j<right+2; j++)
        {
            cout<<dp[i][j]<<" ";
    
        }
        cout<<endl;
    }    
    return dp[N][right+1];
}


int main()
{
    int arr[] = {2, 34, 3, 12};
    cout<<isSubsetSum(8, 0, sizeof(arr)/sizeof(arr[0]) - 1, arr)<<endl;
    cout<<isSubsetSumDP(8, 0, sizeof(arr)/sizeof(arr[0])-1, arr )<<endl;
    return 0;
}
 
