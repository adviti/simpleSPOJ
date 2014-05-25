#include<iostream>
#include<cmath>

//binary number and basis concept, 
//with what powers of two 7 can we made {1, 2, 4}
//12 {1, 2, 4, 8}

using namespace std;

int main()
{
    
    while(true)
    {
        int bar_len;
        cin>>bar_len;
        if(bar_len==0) break;
        int x = log2(bar_len);
        cout<<x<<endl;
    }
    
    return 0;
}
