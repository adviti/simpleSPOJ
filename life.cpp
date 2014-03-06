#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int sc;
    while(scanf("%d",&sc))
    {
        if(sc==42) break;
        printf("%d\n", sc);
    }
    return 0;
}
