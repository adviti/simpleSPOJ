#include<iostream>
#include<map>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;



//int main()
//{
    //string s1, s2;
    //while(true)
    //{
        
        //cin>>s1;
        //cin>>s2;
        //int as1[27] = {0};
        //int as2[27] = {0};
        //string res = "";
        //for(int i=0; i<(int)s1.length(); i++)
        //{
            
            //int temp = int(s1[i] - '0' - 48);
            //as1[temp] = as1[temp] + 1;
        //}
        //for(int i=0; i<(int)s2.length(); i++)
        //{
            //int temp = int(s2[i] - '0' - 48);
            //as2[temp] = as2[temp] + 1;
        //}
        //for(int i=1; i<27; i++)
        //{
            //if(as1[i]!=0)
            //{
                
                    //as1[i] = min(as1[i], as2[i]); 
                
            //}
        //}
        
        //for(int i=1; i<27; i++)
        //{
            //if(as1[i]!=0)
            //{
                //int temp = as1[i];
                //while(temp)
                //{
                    //res = res+char(i+'0'+ 48);
                    //temp--;
                //}
            //}
        //}
        //cout<<res<<endl;
    //}
    
    //return 0;
//}


int main()
{
    string s1, s2;
    while(getline(cin, s1))
    {
        getline(cin, s2);
        if(s1!="")
        {
        map<char, pair<int, int> > m;
        map<char, pair<int, int> >::iterator it;
    
        string res = "";
        for(int i=0; i<(int)s1.length(); i++)
        {
            
            
            (m[s1[i]].first)++;
        }
        for(int i=0; i<(int)s2.length(); i++)
        {
            
            (m[s2[i]].second)++;
        }
        
        for(it = m.begin(); it!=m.end(); ++it)
        {
          int temp = min((it->second).first, (it->second).second);
          //cout<<temp<<" ";
          while(temp--)
          {
              
              res = res + it->first;
          }  
        }
        cout<<res<<endl;
    }
    else break;
    }
    
    return 0;
}

