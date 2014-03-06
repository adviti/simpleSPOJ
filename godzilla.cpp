#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int getMax(int a[], int n)
{
    int Max = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>Max) Max = a[i];
    }
    return Max;
}
void getWinner(int mg[], int g[], int smg, int sg)
{
    int Maxmg = getMax(mg, smg);
    int Maxg = getMax(g,sg);
    
    
    if(Maxmg<=Maxg)
    {
        cout<<"Godzilla"<<endl;
    }
    else
        cout<<"MechaGodzilla"<<endl;
    
}





int main()
{
    int nt, sg, smg;
    
    scanf("%d", &nt);
    
    while(nt--)
    {
       scanf("%d %d", &sg,  &smg);
       int g[sg];
       int el;
       int mg[smg];
       
       for(int i=0; i<sg; i++)
       {
           scanf("%d", &el);
           g[i] = el;
       }
       for(int i=0; i<smg; i++)
       {
           scanf("%d", &el);
           mg[i] = el;
       }
       getWinner(mg, g, smg, sg);
    }
    
    return 0;
}
