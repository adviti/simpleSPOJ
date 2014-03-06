#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        c++;
        long long int r;
        cin>>r;
        double ans = 0;
        ans = double(4*r*r + 0.25);
        printf("Case %d: %.2f\n", c, ans);
    }
    return 0;
    }
