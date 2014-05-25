#include<iostream>
#include<string>
using namespace std;

int main()
{
    while(true)
    {
        int col;
        cin>>col;
        if(col==0) break;
        string s;
        cin>>s;
        int row = s.length()/col;
        char a[row][col];
        int k=0;
        for(int i=0; i<row; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<col; j++)
                {
                    a[i][j] = s[k];
                    k++;
                }
            }
            else
            for(int j=col-1; j>=0; j--)
                {
                    a[i][j] = s[k];
                    k++;
                }
        }
        
        //for(int i=0; i<row; i++)
        //{
            //for(int j=0; j<col; j++)
            //{
                //cout<<a[i][j]<<" ";
            //}
            //cout<<endl;
        //}
        
        //cout<<endl;
        string ans = "";
        
        for(int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                ans = ans+a[j][i];
            }
            //cout<<endl;
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}
