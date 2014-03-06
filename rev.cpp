#include<iostream>
#include<cstdio>
using namespace std;

int reverseof(int n)
{
    int newNum = 0;
    int var = 0;
    while(n!=0)
    {
        var = n%10;
        n = n/10;
        newNum = newNum*10 + var;
    }
    return newNum;
}

int main()
{
    int numT, num1, num2;
    scanf("%d", &numT);
    while(numT--)
    {
        scanf("%d %d", &num1, &num2);
        int ans = reverseof(reverseof(num1)+reverseof(num2));
        printf("%d\n", ans);
    }
    return 0;
}

