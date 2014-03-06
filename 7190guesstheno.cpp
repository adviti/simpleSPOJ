#include<iostream>
#include<string>
using namespace std;

int getGCD(int a, int b)
{
    //cout<<"gcd for "<<a<<" "<<b<<endl;
    if(a<b) swap(a, b);
    while(b!=0)
    {
        int temp = a;
        a = b;
        b = temp%a;
        //cout<<a<<" "<<b<<endl;
        
    }
    return a;
}


int main()
{
    string s;
    while(true)
    {
        bool isAnsPossible = true;
        long long int ans = 1;
        cin>>s;
        if(s=="*") break;
        else
        {
            
            long long int gcd = 1;
            long long int lcm = 1;
            for(int i=0; i<(int)s.length(); i++)
            {
                int j = i+1;
                if(s[i]=='Y')
                {
                    gcd = getGCD(lcm, j);
                    
                    lcm = lcm*j;
                    lcm = lcm/gcd;
                 
                // cout<<lcm<<" "<<gcdSofar<<endl;
                }
            }
            ans=lcm;
            //ans = lcm/gcdSofar;
            
            for(int i=0; i<(int)s.length(); i++)
            {
                int j = i+1;
                if(s[i]=='N')
                {
                  if(ans%(j)==0) {isAnsPossible = false; break;}
                }
            }
        }
        if(isAnsPossible) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
