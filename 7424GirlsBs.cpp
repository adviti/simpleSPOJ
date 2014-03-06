#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int G, B;
    while(true)
    {
        cin>>G;
        if(G==-1) break;
        cin>>B;
        if(G<B) swap(G, B);
        int ans = 1;
        if (G==0 and B==0) ans = 0;
        else if (G==B) ans=1;
        else
        {
                ans = (G+B)/(B+1);
        } 
        
        cout<<ans<<endl;
        
    }
    return 0;
}
