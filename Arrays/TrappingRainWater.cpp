// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n)
    {
        // Code here
        int count = 0;
        int l = 0, r = n-1;
        int lmax = 0, rmax = 0;
        while(l < r)
        {
            lmax = max(lmax, arr[l]);
            rmax = max(rmax, arr[r]);
            count += (lmax < rmax) ? lmax - arr[l++] : rmax - arr[r--];
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends