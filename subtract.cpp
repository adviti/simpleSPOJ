#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

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
    
    
    return s3;
   

}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    cout<<stringSubtract(s1, s2)<<endl;
    return 0;}
