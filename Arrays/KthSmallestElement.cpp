// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    // Method used is Random Quick Sort Partitioning called Quick Select
    int partition(int arr[], int l, int r)
    {
        int i = l - 1;
        int pivot = l + (rand() % (r - l + 1));
        swap(arr[pivot],arr[r]);
        int temp = arr[r];
        for(int j = l ; j < r ; j++)
        {
            if(arr[j] < temp)
            {
                 i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[r]);
        return i+1;
    }
    int kthSmallest(int arr[], int l, int r, int k)
    {
        //code here
        while(l <= r)
        {
            int pivot = partition(arr, l, r);
            if(pivot == k - 1)
                return arr[pivot];
            else if(pivot > k - 1)
                r = pivot - 1;
            else
                l = pivot + 1;
        }
        return -1;
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends