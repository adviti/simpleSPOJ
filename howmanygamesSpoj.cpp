#include<iostream>
#include<cmath>
using namespace std;

int getGames(double n)
{
    int ans=1;
    double temp = n - floor(n);
    cout<<temp<<endl;
    while(temp<1)
    {
       temp = temp*ans;
           cout<<temp<<endl;

       ans++;
    }
    return ans;
}



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        double n;
        cin>>n;
        cout<<getGames(n)<<endl;
    }
    
    
return 0;
}
