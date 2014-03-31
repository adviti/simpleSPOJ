#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int r;
        cin>>r;
        int streetno[r];
        for(int i=0; i<r; i++)
        {
            cin>>streetno[i];
        }
        sort(streetno, streetno + r);
        //int median_index = r/2;
        int vito_street = streetno[r/2];
        long long int ans = 0;
        for(int i=0; i<r; i++)
        {
            ans = ans + abs(vito_street - streetno[i]);
        }
         
        cout<<ans<<endl;
    }
    return 0;
}
