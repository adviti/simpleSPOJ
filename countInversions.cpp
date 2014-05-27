#include<iostream>
using namespace std;

typedef long long int lld;
//right+1 = size of array
int mergeAndCount(lld arr[], lld left, lld mid, lld right)
{
    lld inv_count = 0;
    lld i = left;
    lld j = mid; 
    lld k = left; 
    lld temp[right+1];
      while ((i <= mid - 1) && (j <= right))
      {
        if (arr[i] <= arr[j])
        {
          temp[k++] = arr[i++];
        }
        else
        {
          temp[k++] = arr[j++];
     
        
          inv_count = inv_count + (mid - i);
        }
      }
      while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  
  while (j <= right)
    temp[k++] = arr[j++];
 
  
  for (i=left; i <= right; i++)
   { arr[i] = temp[i];}
 
 
    
    
    return inv_count;
}

int sortAndCount(lld arr[], lld left, lld right)
{
    
    lld mid, inv_count = 0;
    if(right>left)
    {
        mid = (right +left)/2;
        inv_count = sortAndCount(arr, left, mid);
        inv_count += sortAndCount(arr, mid+1, right);
        inv_count += mergeAndCount(arr, left, mid+1, right);
    }
    return inv_count;
}

int simplensquare(int n, int arr[])
{
    
    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout<<arr[i]<<"  "<<arr[j]<<endl;
            if(arr[i]>arr[j]) {cout<<" derfre"<<endl;ans = ans+1; }
            
        }
    }
    return ans;
}

int main()
{
    
    int tc;
    cin>>tc;
    while(tc--)
    {
        lld n;
        cin>>n;
        lld arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        lld ans = sortAndCount(arr, 0, n-1);
        cout<<ans<<endl;
        cout<<ans<<endl;
    }
    
    
    
    //int a[10] = {23, 67,1, 28, 92, 65, 45, 12, 87 , 34};
    //cout<<sortAndCount(a, 0, 9)<<endl;
    ////cout<<simplensquare(10, a)<<endl;
    //for (int i=0; i <= 9; i++)
   //{ cout<<a[i]<<" ";}
    return 0;
    
}
