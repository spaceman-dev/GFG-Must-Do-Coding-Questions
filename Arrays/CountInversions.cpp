// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long A[], long long start, long long mid, long long end)
    {
        long long arr1[mid - start + 1], arr2[end - mid];
        for(long long i = 0 ; i < mid - start + 1 ; i++)
            arr1[i] = A[start + i];
        for(long long i = 0 ; i < end - mid ; i++)
            arr2[i] = A[mid + i + 1];
        long long count = 0;
        long long i = 0, j = 0, k = start;
        while(i < mid - start + 1 && j < end - mid)
        {
            if(arr1[i] <= arr2[j])
                A[k++] = arr1[i++];
            else
            {
                A[k++] = arr2[j++];
                count += mid - start + 1 - i;
            }
        }
        while(i < mid - start + 1)
            A[k++] = arr1[i++];
        while(j < end - mid)
            A[k++] = arr2[j++];
        return count;
    }
    long long mergesort(long long A[], long long start, long long end)
    {
        if(start >= end)
            return 0;
        long long mid = (start + end) / 2;
        return mergesort(A, start, mid) + mergesort(A, mid + 1, end) + merge(A, start, mid, end);
    }
    long long int inversionCount(long long A[], long long n)
    {
        // Your Code Here
        return mergesort(A, 0, n-1);
    }
};
// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends