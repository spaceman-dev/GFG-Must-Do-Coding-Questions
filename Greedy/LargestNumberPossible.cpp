// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S)
    {
        // code here
        if((N > 1 && S == 0) || N * 9 < S)
            return "-1";
        string res = "";
        for(int i = 0 ; i < N ; i++)
        {
            if(S >= 9)
            {
                res += "9";
                S -= 9;
            }
            else
            {
                res += to_string(S);
                S = 0;
            }
        }
    }
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends