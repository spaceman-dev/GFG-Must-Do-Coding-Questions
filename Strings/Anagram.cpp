// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        // Your code here
        int map[27] = {0};
        if(a.length() != b.length())
            return false;
        for(int i = 0 ; i < a.length() ; i++)
            map[a[i] - 97]++;
        for(int i = 0 ; i < b.length() ; i++)
            map[b[i] - 97]--;
        for(int i = 0 ; i < 27 ; i++)
        {
            if(map[i])
                return false;
        }
        return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends