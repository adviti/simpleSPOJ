#include<iostream>
#include<queue>
using namespace std;
typedef vector<vector<int> > tree;
tree adjlist;

void bfs()
{
    int levelarr[n+1];
    int bfsarray[n+1];
    
    queue<int> q;
    q.push()
    
    
}









void populateTree()
{
    int nodes;
    cin>>nodes;
    adjlist.assign(nodes+1, tree());
    
    for(int edge=1; edge<n; edge++)
    {
        int head, tail;
        cin>>head>>tail;
        adjlist[head].push_back(tail);
        adjlist[tail].push_back(head);
    }
} 





int getDiameter()
{
    
}




int main()
