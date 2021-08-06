// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    // Code here
		    queue<char> q;
		    int hash[26];
		    memset(hash, 0, sizeof(hash));
		    string res = "";
		    for(auto it : A)
		    {
		        q.push(it);
		        hash[it - 97]++;
		        while(!q.empty())
		        {
		            if(hash[q.front() - 97] > 1)
		                q.pop();
		            else
		                break;
		        }
		        res += q.empty() ? '#' : q.front();
		    }
		    return res;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends