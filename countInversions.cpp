#include<iostream>
using namespace std;

int mergeAndCount(int arr[], int left, int mid, int right)
{
    int inv_count = 0;
    int i = left;
    int j = mid; 
    int k = left; 
    int temp[10];
      while ((i <= mid - 1) && (j <= right))
      {
        if (arr[i] <= arr[j])
        {
          temp[k++] = arr[i++];
        }
        else
        {
          temp[k++] = arr[j++];
     
         /*this is tricky -- see above explanation/diagram for merge()*/
          inv_count = inv_count + (mid - i);
        }
      }
      while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
 
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
   { arr[i] = temp[i];}
 
 
    
    
    return inv_count;
}

int sortAndCount(int arr[], int left, int right)
{
    
    int mid, inv_count = 0;
    if(right>left)
    {
        mid = (right +left)/2;
        inv_count = sortAndCount(arr, left, mid);
        inv_count += sortAndCount(arr, mid+1, right);
        inv_count += mergeAndCount(arr, left, mid+1, right);
    }
    return inv_count;
}


int main()
{
    int a[10] = {23, 67,1, 28, 92, 65, 45, 12, 87 , 34};
    cout<<sortAndCount(a, 0, 9)<<endl;
    for (int i=0; i <= 9; i++)
   { cout<<a[i]<<" ";}
    return 0;
    
}
