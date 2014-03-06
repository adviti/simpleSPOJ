#include<iostream>
#include<cstdio>
using namespace std;

int getFact(int n)
{
    if(n<=1){ return 1;}
    else{ return n*getFact(n-1);}
}

int main()
{
    int numT;
    int t;
    scanf("%d", &numT);

    while(numT--)
    {
        scanf("%d", &t);
        printf("%d\n", getFact(t));
    }
    return 0;
}
