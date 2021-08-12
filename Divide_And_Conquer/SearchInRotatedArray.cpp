// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key)
    {
        //complete the function here
        int mid = l + (h - l)/2;
        if(l > h)
            return -1;
        if(A[mid] == key)
            return mid;
        if(A[l] < A[mid])
        {
            if(A[l] <= key && A[mid] > key)
                search(A, l, mid-1, key);
            else
                search(A, mid+1, h, key);
        }
        else
        {
            if(A[mid] < key && A[h] >= key)
                search(A, mid+1, h, key);
            else
                search(A, l, mid-1, key);
        }
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends