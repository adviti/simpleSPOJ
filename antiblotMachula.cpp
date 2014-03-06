#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;

string stringSum(string s1, string s2)
{
    string s3="";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    int a = s1.length();
    int b = s2.length();


    int i = 0;
    if(a>b)
        {
            while(i<b)
            {
                int u = int(s1[i]) - '0' + int(s2[i]) - '0' + carry;
                carry = u/10;
                s3 = s3+ char(u%10 + '0');
                i++;
            }
            while(i<a)
            {
                int u = int(s1[i]) - '0' + carry;
                carry = u/10;
                s3 = s3+ char(u%10 + '0');
                i++;
            }
            if(carry==1) s3 = s3+char(carry+'0');

        }
    else

        {
            while(i<a)
            {
                int u = int(s1[i]) - '0' + int(s2[i]) - '0' + carry;
                carry = u/10;
                s3 = s3+ char(u%10 + '0');
                i++;
            }
            while(i<b)
            {
                int u = int(s2[i]) - '0' + carry;
                carry = u/10;
                s3 = s3+ char(u%10 + '0');
                i++;
            }
           if(carry==1) s3 = s3+char(carry+'0') ;
        }
    reverse(s3.begin(), s3.end());

    return s3;
    }

string stringSubtract(string s1, string s2)
{
    string s3="";

    int carry = 0;
    bool hasswapped = 0;
    int a = s1.length();
    int b = s2.length();
    if(a<b)
    {
        string temp = s1;
        s1 = s2;
        s2 = temp;
        swap(a, b);
        hasswapped=1;
    }
    if(a==b && s1<s2) swap(s1, s2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(int i=0; i<(int)s2.length(); i++)
    {
        int u = int(s1[i] - '0') - int(s2[i] - '0') + carry;
        if(u<0){ u = u+10; carry = -1;}
        else {carry = 0;};
        s3 = s3 + char(u+'0');
    }
    for(int j=s2.length(); j<(int)s1.length(); j++)
    {
       int u = int(s1[j] - '0')  + carry;
        if(u<0){ u = u+10; carry = -1;}
        else {carry = 0;};
        s3 = s3 + char(u+'0');
    }

    reverse(s3.begin(), s3.end());
    string s4 = "";
    int i = 0;
    while(s3[i]=='0')
    {
        ++i;
       
    }
    
    for(int j=i; j<(int)s3.length(); j++)
    {
       s4 = s4+s3[j]; 
    }
    //cout<<"cdscdcvedvff  "<<s3<<"  dewferfergtrg "<<s4<<endl;
    return s4;
}


bool isAlphaNum(string s)
{
    for(int i=0; i<(int)s.length(); i++)
    {
        if(isalpha(s[i])) {return true;}
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        
        string s1, s2, s3, s4, s5;
        cin>>s1>>s4>>s2>>s5>>s3;
        
        if(isAlphaNum(s1))
        {
            cout<<stringSubtract(s3, s2)<<" + "<<s2<<" = "<<s3<<endl;
        }
        else if(isAlphaNum(s3))
        {
            cout<<s1<<" + "<<s2<<" = "<<stringSum(s1, s2)<<endl;
        }
        else if (isAlphaNum(s2))
        {
            cout<<s1<<" + "<<stringSubtract(s3, s1)<<" = "<<s3<<endl;
        }

    }

    return 0;
}
