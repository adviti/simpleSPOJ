#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int f;
    cin>>f;
    set<int> ffset;
    set<int> fset;
    set<int> result;
    while(f--)
    {
        int fn, ffnNo;
        cin>>fn>>ffnNo;
        fset.insert(fn);
        for(int i=0; i<ffnNo; i++)
        {
            int ffn;
            cin>>ffn;
            ffset.insert(ffn);
        }
    }
    set_difference(ffset.begin(), ffset.end(), fset.begin(), fset.end(), inserter(result, result.end()));
    cout<<result.size()<<endl;
return 0;
}
