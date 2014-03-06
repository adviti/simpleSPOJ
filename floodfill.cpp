#include<iostream>
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

void getSize(int x, int y, int &size_till_now)
{
   
        grid[x][y] =-2;
        
        for(int i=0; i<4; i++)
        {
            if(isValidPosition(x+dirx[i],y+diry[i]))
            {
                if(grid[x+dirx[i]][y+diry[i]]==1)
                {
                    size_till_now++;
                  getSize( x+dirx[i], y+diry[i], size_till_now);
                }
            }  
        }
   
}

int main()
{
    int no_connected_comp = 0;
    int size_comp = 0;
    int startx = 0;
    int starty = 0;
    int endx = 0;
    int endy = 0;
    
    fillGrid();
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            
            
            if(grid[i][j]==1)
            {
                
                no_connected_comp++;
                size_comp = 1;
                getSize(i,j, size_comp);
            cout<<"comp size of" <<no_connected_comp<<" componet= "<<size_comp<<endl;
            }
            
            
        }
    }
    cout<<"no. of connected components= "<<no_connected_comp<<endl;
    return 0;
}
