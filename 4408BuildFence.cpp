#include<iostream>
#include<cstdio>

using namespace std;
const double PI = 3.141592653;
int main()
{
    long long int l;
  
    while(cin>>l)
    {
        if(l==0) break;
        else
        {
        double ans = 0;
        ans = (l*l)/(2.0*PI);
        //cout<<"answer "<<ans<<endl;
        printf("%.2f\n", ans);
    }
    }
    return 0;
    }
