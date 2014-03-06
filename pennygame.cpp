#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
map<string, int> m;
string arr[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
void initializeMap()
{
    for(int i=0; i<8; i++)
    {
        m[arr[i]] = 0;
    }
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        initializeMap();
        int c;
            cin>>c;
            string s;
            cin>>s;
            //c++;
            for(int i=0; i<40; i++)
            {
                string temp = "";
                for(int j=i; j<i+3 && j<40; j++)
                {
                    temp = temp + s[j];
                }
                if(temp.length()==3)
                {
                    for(int k=0; k<8; k++)
                    {
                        if(temp==arr[k])
                            {m[arr[k]]++; break;}
                    }
                }
            }
            cout<<c<<" ";
            for(int k=0; k<8; k++)
            {
                cout<<m[arr[k]]<<" ";
            }
            cout<<endl;
        }
    

return 0;
}
