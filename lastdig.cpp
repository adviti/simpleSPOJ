#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef vector<int> v;
map<int, v> r;
int g(int a, int b)
{int l = a%10;
int cl = r[l].size();
        int pl = b%cl;
        if (pl==0) pl+=cl;
        return r[l][cl-1];
}
void im()
{
        for(int i=0; i<10; i++)
        {
            r[i] = v(); r[i].push_back(i);
                int t=i*i;
                while(t%10!=i)
                {
                    r[i].push_back(t%10);
                    t*=i;
                }
        }
}

int main()
{
    int nt;
    im();
    cin>>nt;
    while(nt--)
    {
        int a, b;
        cin>>a>>b;
        int n=g(a, b);
        cout<<n<<"\n";
    }
}
