#include<iostream>
using namespace std;


void increasingMaxSumSubsequence(int a[], int n)
{
    int dp[n];
    dp[0] = a[0];
    int maxx = -9999999;
    for(int i=1; i<n; i++)
    {
        int ans=0;
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j])
            {
                int temp = dp[j];
                if(temp>maxx) maxx=temp;
            }
           
            
        }
         cout<<i<<" i "<<maxx<<endl;
        ans = max(maxx+a[i], a[i]);
        dp[i]=ans;
    }
     for(int i=0; i<n; i++)
    {
        cout<<dp[i]<<" ";
    }
}

int longestPalindromicSubsequence(string s, int start, int end)
{
    if(start>end) return 0;
    else if(start==end) return 1;
    else if(s[start]==s[end]) return 2+longestPalindromicSubsequence(s, start+1, end-1);
    else return max(longestPalindromicSubsequence(s,start+1, end), longestPalindromicSubsequence(s, start, end-1));
    
}

void longestIncSubsequence(int a[], int n)
{
    int dp[n+1];
    dp[0]=0;
    dp[1] = 1;
    for(int i=1; i<n+1; i++)
    {
        dp[i]=1;
    }
    //longest increasing subsequence ending at i, so index i in dp array, then index i-1 in a array
    //as dp[0] means nothing available, dp[1] means (one element) till a[0] its available
    for(int i=2; i<n+1; i++)
    {
        int maxx=0;
        for(int j=0; j<i-1; j++)
        {
            if(a[i-1]>a[j])
            {
                cout<<i-1<<"   "<<a[i-1]<<"   "<<a[j]<<endl;
                maxx=dp[j+1]+1;
                cout<<"max "<<maxx<<endl;
                if(dp[i]<maxx) dp[i] = maxx;
            }
            //else dp[i]=1;
        }
        //cout<<dp[i]<<" ";
    }
    for(int i=1; i<n+1; i++)
    {
        cout<<dp[i]<<" ";
    }
}

int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    //longestIncSubsequence(a, 9);
    //increasingMaxSumSubsequence(a,9);
    
    
    string s="neveoddoreening";
    cout<<longestPalindromicSubsequence(s, 0, s.length()-1)<<endl;

    
    return 0;
}
