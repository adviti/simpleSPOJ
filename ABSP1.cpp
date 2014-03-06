#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  
  while(t--)
  {
      int n;
      int s;
      cin>>n;
      long long int myset[n+10];
      for(int i=0; i<n; i++)
      {
          cin>>s;
          myset[i] = s;
      }
      long long int plus = 0;
      long long int minus = 0;
      for(int j=0; j<n; j++)
        {
            plus += myset[j]*(n-j-1);
            minus += myset[j]*j;
        }
        cout<<abs(plus - minus)<<endl;
  }


  return 0;
}
