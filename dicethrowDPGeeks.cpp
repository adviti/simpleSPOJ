#include<iostream>
using namespace std;

int findWays(int coins, int faces, int sm)
{
    if(coins==0 or faces==0) return 0;
    if(sm==0) return 0;
    
    int table[coins+1][sm+1];
    memset(table, 0, sizeof(table));
    
    for(int i=1; i<sm; i++)
    {
        table[1][j] = 1;
    }
    
    for(int i=2; i<n+1; i++)
    {
        for(int j=0; j<=m && j<=x; j++)
        {
           for(int k=1; k<=x; k++)
           {
               table[i][j] += table[i-1][j-k];
           } 
        }
    }
    return table[n][x];
    
}




int main()
{
    
return 0;
}
