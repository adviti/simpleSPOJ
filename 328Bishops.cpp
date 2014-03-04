#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{string s;

    while( cin>>s)
    {
        string fnl="";
        int carry = 0;
       if((int(s[0])-'0'==1 || int(s[0])-'0'==0)&&s.length()==1) cout<<int(s[0])-'0'<<endl;
       else
       {
       for(int i = s.length()-1; i>=0; i--)
       {
         int u = 2*(int(s[i])-'0')+carry; 
         
         carry = u/10;
         //cout<<char(u%10+'0')<<endl;
         fnl = fnl + char(u%10+'0');
         //cout<<fnl<<endl;
       }
       if(carry==1) fnl = fnl+char(carry+'0') ;
       reverse(fnl.begin(), fnl.end());
       //cout<<fnl<<endl;
       string mfnl="";
       int i = fnl.length()-1;
       int u = (int(fnl[i])-'0') -2;
       if(u>=0) {fnl[i] = char(u+'0'); cout<<fnl<<endl;}
       else
       {
           carry = -1;
           mfnl = mfnl + char(u+10+'0');
           //cout<<mfnl<<endl;
           i = i-1;
           while(i>=0)
           {
               u = (int(fnl[i])-'0')+carry;
               if(u<0)
               {
                   mfnl = mfnl+char(u+'0'+10);
                   carry=-1;
               }
               else
               {
                   mfnl = mfnl+char(u+'0');
                   carry=0;
               }
               i--;
           }
          reverse(mfnl.begin(), mfnl.end()); 
          
          if(mfnl[0] - '0' == 0) cout<<mfnl.substr(1)<<endl;
          else cout<<mfnl<<endl;
      }
       }
       
    }
    return 0;
}
