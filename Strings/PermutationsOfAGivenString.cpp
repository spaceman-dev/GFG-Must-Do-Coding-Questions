// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void permute(string &S, int n, vector<string> &v)
	    {
	        if(n == S.length() - 1)
	        {
	            v.push_back(S);
	            return;
	        }
	        for(int i = n ; i < S.length() ; i++)
	        {
	            swap(S[n], S[i]);
	            permute(S, n+1, v);
	            swap(S[n], S[i]);
	            
	        }
	        return;
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v;
		    permute(S, 0, v);
		    sort(v.begin(), v.end());
		    return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends