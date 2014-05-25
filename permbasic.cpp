#include<iostream>
#include<vector>
using namespace std;

void printSol(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int visited[6]={0};
void dfs(int level, int depth, vector<int> v)
{
    if(level>=depth) {printSol(v); 
    return;}
    
    for(int i=1; i<6; i++)
    {
        if(!visited[i])
       { v.push_back(i); visited[i]=1;
      // printSol(v);
       
        dfs(level+1, depth, v);
        visited[i]=0;
        v.pop_back();
        }
    }
}

int main()
{
    vector<int> v;
    dfs(0, 5, v);
    return 0;
}

