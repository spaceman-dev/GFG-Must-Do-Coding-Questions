// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char, int> mp1;
	    unordered_map<int, int> mp2;
	    for(auto c : s)
	        mp1[c]++;
	    for(auto it : mp1)
	        mp2[it.second]++;
	    if(mp2.size() > 2)
	        return false;
	    if(mp2.size() == 1)
	        return true;
	    int count = 0;
	    for(auto it : mp2)
	    {
	        if(it.second > 1)
	            count = it.first;
	    }
	    for(auto it : mp2)
	    {
	        if(it.second == 1 && it.first == 1)
	            return true;
	        else if(it.first == count + 1)
	            return true;
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}


  // } Driver Code Ends