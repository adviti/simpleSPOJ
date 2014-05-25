#include<iostream>
using namespace std;

typedef long long int lld;

int main()
{
    lld tc;
    cin>>tc;
    while(tc--)
    {
        lld A, B;
        cin>>A>>B;
        for(lld i=min(A,B)/2; i>1; i--)
        {
            if(A%i==0 && B%i==0)
            {
                A = A/i;
                B = B/i;
            }
        }
        cout<<B<<"  "<<A<<endl;
    }
    return 0;
}
