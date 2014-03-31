#include<iostream>
using namespace std;

int rowSum[3]={0};



int main()
{
    int bin1[3], bin2[3], bin3[3];
    int a;
    
    while(cin>>a)
    {
        unsigned int total_cost = (1<<31);
        char s[3] = {'B', 'G', 'C'};
        bin1[0] = a;
        cin>>bin1[1];
        cin>>bin1[2];
        cin>>bin2[0];
        cin>>bin2[1];
        cin>>bin2[2];
        cin>>bin3[0];
        cin>>bin3[1];
        cin>>bin3[2];
        rowSum[0] = bin1[0] + bin1[1] + bin1[2];
        rowSum[1] = bin2[0] + bin2[1] + bin2[2];
        rowSum[2] = bin3[0] + bin3[1] + bin3[2];
        //cout<<rowSum[0]<<" "<<rowSum[1]<<" "<<rowSum[2]<<endl;
        int cur_cost = 0;
        int j, k, i;
        int p, q, r;
        string res="", empty="";
        string perf_res = "ZZZ";
        for(i=0; i<3; i++)
        {
            //cout<<"i->"<<i<<" ";
            
            int i_cost = rowSum[0] - bin1[i];
            //cout<<"currcost leve1 "<<i_cost<<" "<<i<<endl;
            for(j=0; j<3; j++)
            {
                if(j!=i)
                {
                    //cout<<"j->"<<j<<" ";
                    int j_cost = (rowSum[1] - bin2[j]);
                    //cout<<"currcost leve2 "<<j_cost<<" "<<j<<endl;
                    for(k=0; k<3; k++)
                    {
                        if(k!=i && k!=j)
                        {
                            //cout<<"k->"<<k<<endl;
                            int k_cost = (rowSum[2] - bin3[k]);
                            //cout<<"currcost leve3 "<<k_cost<<" "<<k<<endl;
                            cur_cost = i_cost + j_cost + k_cost;
                            //cout<<i<<" "<<j<<" "<<k<<" "<<cur_cost<<endl;
                            
                            if(cur_cost<=total_cost)
                            {
                                
                                
                                //cout<<"regerge"<<endl;  
                                p=i;
                                q=j;
                                r=k;
                                res = empty + s[p] + s[q] + s[r];
                                if(cur_cost==total_cost && res>perf_res) perf_res = perf_res;
                                else perf_res = res;
                                
                                total_cost = cur_cost;
                                //cout<<"res    "<<res<<endl;
                                
                                
                            }
                            
                        }
                    }
                }
            }
        }
      
      
      cout<<perf_res<<" "<<total_cost<<endl;  
            
    }
    
    return 0;

}
