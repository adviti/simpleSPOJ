#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef vector<pair<int, int> > vp;
typedef pair<int, int> p;


int getmaxActCount(vp arr)
{
    int cn = 1;
    
    p lastpairtaken = arr[0];
    for(int i=1; i<(int)arr.size(); i++)
    {
        int endtime = lastpairtaken.second;
        if(endtime<=arr[i].first)
        {
            cn++;
            lastpairtaken = arr[i];
        }
    }
    return cn;
}


bool myfunction (p slot1 ,p slot2)
{
return (slot1.second < slot2.second);
}



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int activities;
        cin>>activities;
        vp arr;
        for(int i=0; i<activities; i++)
        {
            //p slot;
            int a, b;
            cin>>a>>b;
            arr.push_back(p(a, b));
        }
        sort(arr.begin(), arr.end(), myfunction);
        int ans = getmaxActCount(arr);
        cout<<ans<<endl;
        
    }

return 0;
}
