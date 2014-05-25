#include<iostream>
#include<algorithm>
using namespace std;

//maximum contiguous sum

pair<int, int> kadane(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int maxm = temp[0];
    int max_in = 0;
    for(int i=1; i<n; i++)
    {
        //temp[i], maximum contiguous sum ending at index i.(ith element can either attache to the contiguous series sum just before it, or a
        //new such series could start from itself)
        temp[i] = max(temp[i-1]+arr[i], arr[i]);
        if(temp[i]>maxm) 
        {
            maxm = temp[i]; max_in = i;
        }
    }
    int start_in = 0;
    for(int j=max_in; j>=0; j--)
    {
        if(arr[j]==temp[j])
        {
            start_in = j;
            break;
        }
    }
    return make_pair(start_in, max_in);
}


//given a 2D matrix find a rectangle having max sum.
//algo: take sum of all columns columnwise in a 1D array, apply kadane on it, now take all possible combination
//of rows to get the maximum sum.

int matsumhelper(int** a, int r1, int r2, int col1, int col2)
{
    int maxSum = 0;
    for(int i=r1; i<=r2; i++)
    {
        for(j=col1; j<=col2; j++)
        {
            maxSum+=a[i][j];
        }
    }
   return maxSum; 
}




int maxSumRect(int** arr, int dim1, int dim2)
{
    int colsum[dim2] = {0};
    for(int i=0; i<dim2; i++)
    {
        for(j=0; j<dim1; j++)
        {
            colsum[i] += arr[i][j];
        }
    }
    pair<int, int> p = kadane(colsum, dim2);
    
    int ans=0;
    for(int i=0; i<dim1; i++)
    {
        for(int j=0; j<dim1; j++)
        {
            int max_sum = 0; 
            max_sum = maxsumhelper(a, i, j, p.first, p.second);
            if(ans<max_sum) max_sum = ans;
            
        }
    }
    
  return max_sum;  
    
}



int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    pair<int, int> ans = kadane(a, sizeof(a)/sizeof(a[0]));
        cout<<ans.first<<"  "<<ans.second<<" "<<a[ans.second]<<endl;
    return 0;
}
