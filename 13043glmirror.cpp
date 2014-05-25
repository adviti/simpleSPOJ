#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int tc;
    string s;
    bool ismagical = 1;
    scanf("%d", &tc);
    while(tc--)
    {
        ismagical = 1;
        cin>>s;
        int i=0;
        int j = s.length()-1;
        //cout<<"j "<<j<<endl;
        while(i<=j)
        {
            //cout<<s[i]<<"  "<<s[j]<<endl;
          if(s[i]!=s[j]) {ismagical = 0; break;}
          i++; j--;  
        }
        if(ismagical==1) printf("YES\n");
        else printf("NO\n");
    }
return 0;
}
