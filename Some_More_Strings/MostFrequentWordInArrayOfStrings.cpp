// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        unordered_map<string, int> mp;
        int maxCount = 0;
        string maxWord;
        for(int i = 0 ; i < n ; i++)
            maxCount = max(maxCount, ++mp[arr[i]]);
        for(int i = 0 ; i < n ; i++)
        {
            if(mp[arr[i]]-- == maxCount)
                maxWord = arr[i];
        }
        return maxWord;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends