#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int x, y, z;
    string s;
    while(true)
    {
        cin>>s;
        if(s=="00e0") break;
        x = s[0];
        y = s[1];
        z = s[3];
        
        long long int numT = 10*x+y;
       // numT = pow(numT, int(z-'0'));
        cout<<int(z-'0')<<endl;
        cout<<numT<<endl;
    }
    
    return 0;
}
