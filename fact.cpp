#include<iostream>
#include<cstdio>
using namespace std;

int countZero(int n)
{
    int ans = 0;
    int var = 0;
    int divisor = 5;
    
    while(n>=divisor)
    {
        ans = ans + n/divisor;
        divisor = divisor * 5;
    }
    return ans;
}

int main()
{
    int numT;
    scanf("%d", &numT);
    int t;

    while(numT--)
    {
        scanf("%d", &t);
        printf("%d\n", countZero(t));
    }
    return 0;
}

