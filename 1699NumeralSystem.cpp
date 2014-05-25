#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstdio>
#include<map>
using namespace std;

map<char,int> m;

int typeString(string s)
{
    int ans = 0;
    if(isdigit(s[0]))
    {
        int i=0;
        while(i+1<(int)s.length())
        {
            int temp = int(s[i] - '0')*m[s[i+1]];
            ans = ans + temp;
            i = i+2;
        }
        if(s[i])
        {
            ans = ans + m[s[i]];
        }
    }
    else
    {
        ans = m[s[0]];
        if(isdigit(s[0]))
        {
            int i=1;
            while(i+1<(int)s.length())
            {
                int temp = int(s[i] - '0')*m[s[i+1]];
                ans = ans + temp;
                i = i+2;
            }
            if(s[i])
            {
                ans = ans + m[s[i]];
            }
        }
    }
    return ans;
}

//string getMCXIfromNum(int num)
//{
    
//}

int main()
{
    
    m['m'] = 1000;
    m['x'] = 100;
    m['c'] = 10;
    m['i'] = 1;
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        string s1, s2, strres;
        cin>>s1;
        cin>>s2;
        //cout<<typeString(s1)<<endl;
        //cout<<typeString(s2)<<endl;
    }
    
return 0;
}
