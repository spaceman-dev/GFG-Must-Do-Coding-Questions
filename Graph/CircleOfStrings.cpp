// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    int isCircle(int N, vector<string> A)
    {
        // code here
        unordered_map<char, int> mp, mp1, mp2;
        for(int i = 0 ; i < A.size() ; i++)
        {
            mp[A[i][0]]++;
            if(A[i][0] == A[i][A[i].length()-1])
                mp1[A[i][0]]++;
            mp2[A[i][A[i].length()-1]]++;
        }
        for(int i = 0 ; i < A.size() ; i++)
        {
            if(mp[A[i][0]] != mp2[A[i][0]])
                return 0;
            if(mp[A[i][0]] == mp1[A[i][0]])
                return mp[A[i][0]] == A.size() ? 1 : 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends