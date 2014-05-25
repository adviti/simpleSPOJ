#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int lld;

int  main()
{
    lld num, n;
    scanf("%lld", &num);
    scanf("%lld", &n);
    lld ans = n;
    num = num-1;
    while(num--)
    {
        scanf("%lld", &n);
        ans = ans^n;
    }
    printf("%lld", ans);
    return 0;
    
}
