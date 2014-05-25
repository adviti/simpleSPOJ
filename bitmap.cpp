#include<iostream>
#include<queue>
using namespace std;

int dirx[8] = {0, 0, 1, 1, -1, -1, 1, -1};
int diry[8] = {-1, 1, -1, 1, 1, -1, 0, 0}

void getInput(int dim1, int dim2, int arr[dim1][dim2])
{
    int arr[dim1][dim2];
    for(int i=0; i<dim1; i++)
    {
        for(int j=0; j<dim2; j++)
        {
            cin>>arr[i][j];
        }
    }
}

int bfs()




int main()
{
    int tc;
    while(tc--)
    {
        int dim1, dim2;
        cin>>dim1>>dim2;
        getInput(dim1, dim2, arr);
        queue<int> q;
        for(int i=0; i<dim1; i++)
        {
            for(int j=0; j<dim2; j++)
            {
                for(int k=0; k<8; k++)
                {
                    
                }
            }
        }
        
        
        
        
        
    }
return 0;
}

