#include<iostream>
using namespace std;

bool isBeehive(int n)
{
    int k=1;
    int i=0;
    while(k<n)
    {
      k = k + 6*i; 
      i++;
      if(k==n) return true;  
    }
    return false;
}

int main()
{
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        else
        {
            int ans = isBeehive(n);
            if(ans==1) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
    }
    return 0;
}
