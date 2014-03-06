#include<iostream>
#include<cstdio>
using namespace std;

int getNum(int x, int y)
{
    if(x==y or x-y==2)
    {
        if(x%2==0) return (x+y);
        else return x+y-1; 
    }
    else return -1;
}


int main()
{
    int nt;
    scanf("%d", &nt);
    while(nt--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = getNum(x, y);
        if(ans==-1) cout<<"No Number"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
