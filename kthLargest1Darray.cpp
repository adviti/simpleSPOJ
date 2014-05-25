#include<iostream>
using namespace std;

int helper(int a[], int n, int left, int right)
{
    int pivot = a[right];
    int i= left-1;
    
    for(int j=left; j<right; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[right]);
    
    return i+1;
}

int getkthSmall(int a[], int n, int left,int right, int k)
{
    int p = helper(a, n, left, right);
    
    if(p==k-1) return a[p];
    else if(p<k-1) return getkthSmall(a, n, p+1, right, k-p);
    else return getkthSmall(a, n, left, p-1, k);
}

int main()
{
    int a[10] = {1, 5, 12, 2, 8, 90, 23, 4, 51, 7};
    int j = helper(a, 10, 0, 9);
    cout<<j<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<getkthSmall(a, 10, 0, 9, 6)<<endl;
    return 0;
}
