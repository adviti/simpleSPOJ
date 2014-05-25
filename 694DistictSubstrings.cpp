#include<iostream>
#include<cstdio>
#include<string>
#include<set>
using namespace std;


int main()
{
    int tc;
    
    scanf("%d", &tc);
    
    while(tc--)
    {
        string s;
        cin>>s;
        set<string> stringset;
        int n = s.length();
        stringset.insert(s);
        for(int len=1; len<=n-1; len++)
        {
            for(int j=0; j<=n-len; j++)
            {
                string substr = "";
                int k = j+len;
                int p=j;
                while(p<k)
                {
                    substr = substr+s[p];
                    p++;
                }
                //cout<<substr<<endl;
                stringset.insert(substr);
            }
        }
        cout<<stringset.size()<<endl;
    }
    

return 0;
}
