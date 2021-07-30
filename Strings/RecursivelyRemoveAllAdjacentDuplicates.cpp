// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s)
    {
        // code here
        stack<char> st;
        bool flag = 1;
        while(flag && s.length())
        {
            flag = 0;
            int i = 0;
            while(i < s.length())
            {
                if(st.empty() || st.top() != s[i])
                    st.push(s[i]);
                else
                {
                    flag = 1;
                    while(!st.empty() && s[i] == st.top())
                        i++;
                    st.pop();
                    st.push(s[i]);
                }
                i++;
            }
            s = "";
            while(!st.empty())
            {
                s.push_back(st.top());
                st.pop();
            }
            reverse(s.begin(), s.end());
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends