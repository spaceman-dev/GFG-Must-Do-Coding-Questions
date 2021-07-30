// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here
        string arr[s.length()];
        int j = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '.')
                j++;
            else
                arr[j] += s[i];
        }
        s = "";
        for(int i = j ; i > 0 ; i--)
            s += arr[i] + ".";
        s += arr[0];
        return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends