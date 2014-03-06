#include<iostream>
#include<stack>
using namespace std;

int N=5;
int grid[5][5] =
{
    {1, 0, 0, 0,1},
    {1, 0, 1, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 1, 0, 1}
};
int dirx[4] = {1,-1,0, 0};
int diry[4] = {0, 0, 1, -1};

void fillGrid()
{
    int n;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>n;
            grid[i][j] = n;
        }
    }
    
}

bool isValidPosition(int x, int y)
{
    if(x<0 or x>=N or y<0 or y>=N ) return false;
    else return true;
}


