#include<iostream>
using namespace std;

int allPosPaths(int dim1, int dim2)
{
    
     if(dim1==1 or dim2==1) return 1;
    
    return (allPosPaths(dim1 - 1, dim2) + allPosPaths(dim1, dim2-1));
}

int allPosPathsDynamic(int dim1, int dim2)
{
    int dp[dim1][dim2];
    
    for(int i=0; i<dim1; i++)
    {
        for(int j=0; j<dim2; j++)
        {
            if(i==0 or j==0) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[dim1-1][dim2-1];
}


int main()
{
    cout<<allPosPathsDynamic(3, 3)<<endl;
    return 0;
}
