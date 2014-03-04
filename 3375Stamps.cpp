#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cn = 0;
    while(t--)
    {
        cn++;
        int req, frn;
        cin>>req>>frn;
        int *a = new int[frn];
        for(int i=0; i<frn; i++)
        {
            cin>>a[i];
        }
        sort(a, a+frn, greater<int>());
        int s=0;
        int f=0;
        
        for(int i=0; i<frn; i++)
        {
            s = s+a[i];
            f++;
            if(s>=req) break;
        }
        if(s<req) cout<<"Scenario #"<<cn<<":"<<endl<<"impossible"<<endl<<endl;
        else  cout<<"Scenario #"<<cn<<":"<<endl<<f<<endl<<endl;
        
    }
    return 0;
}
