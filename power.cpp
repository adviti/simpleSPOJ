#include<iostream>
#include<iomanip>
#include<sys/time.h>
#include<cstdio>

using namespace std;

const int NO_OF_ITERATIONS = 1000000;

int pwNaive(int a, int b)
{
    int ans=1;
    if(b==0) return 1;
    if(b==1) return a;
    
    for(int i=0; i<b; i++)
    {
        ans = ans*a;
        
    }
return ans;
}

int pwRecur(int a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==1) return a*pwRecur(a*a, (b-1)/2);
    if(b%2==0) return pwRecur(a*a, b/2);
}

int pwIter(int a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int ans=1;
    while(b)
    {
        if(b%2==1) 
        {
            ans = ans*a;
        }
        a = a*a;
        b = b/2;
    }
    return ans;
}

int pwIterOptimized(int a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int ans=1;
    while(b)
    {
        if(b&1) 
        {
            ans = ans*a;
        }
        a = a*a;
        b = b>>1;
    }
    return ans;
}
void timeIt(int(*f)(int , int ), int a, int b)
{
    timeval t1, t2, t;
    double TotalTimeTaken = 0.0;
    double TimeTaken = 0.0;
    for(int i=0; i<NO_OF_ITERATIONS; i++)
    {
        gettimeofday(&t1, NULL);
        f(a, b);
        gettimeofday(&t2, NULL);
        timersub(&t2, &t1, &t);
        TimeTaken = t.tv_sec + t.tv_usec/1000000.0;
        TotalTimeTaken += TimeTaken;
    }
    TotalTimeTaken = TotalTimeTaken/NO_OF_ITERATIONS;
    printf("TimeTaken: %.9f\n", TotalTimeTaken);
    }
int main()
{
    
   //cout<<pwNaive(2,5)<<endl;
   //cout<<pwRecur(2,5)<<endl;
    //cout<<pwIter(2,5)<<endl;

    timeIt(pwNaive, 3, 20);
    timeIt(pwRecur, 3, 20);
    timeIt(pwIter, 3, 20);
    timeIt(pwIterOptimized, 3, 20);
    //cout<<pwIterOptimized(2,5)<<endl;
    
    return 0;}
