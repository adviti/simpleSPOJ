#include<iostream>
#include<cstdio>
#include<map>
#include<queue>
#include<vector>
using namespace std;
typedef long long int lld;

map<lld, lld> m;
queue<lld> q;
vector<lld> v;

void generate_no(lld limit)
{
    lld num = 1;
    q.push(num);
    lld temp=0;
    while(!q.empty() && temp<=limit)
    {
        temp = q.front();
        v.push_back(temp);
        q.push(temp*10);
        q.push((temp*10)+1);
        q.pop();
    }
}

int binarySearch(lld num, lld first, lld last)
{
    lld mid = (first+last)/2;
    if(first==last) return v[first];
    else if(v[mid]<num) return binarySearch(num, mid+1, last);
    else return binarySearch(num, first, mid-1);
}


int main()
{
    lld tc, n;
    scanf("%lld", &tc);
    generate_no(11111111112);
    while(tc--)
    {
        scanf("%lld", &n);
        if(m[n]!=0) printf("%lld", m[n]);
        else 
        {
            lld ans = binarySearch(n, 0, v.size()-1);
            m[n] = ans;
            printf("%lld", ans);
        }
        
    }
    return 0;
}
