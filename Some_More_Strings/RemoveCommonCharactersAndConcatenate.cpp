// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string s = "";
        int map1[26] = {0}, map2[26] = {0};
        for(char c : s2)
            map1[c - 'a']++;
        for(char c : s1)
        {
            if(map1[c - 'a'] == 0)
                s += c;
        }
        for(char c : s1)
            map2[c - 'a']++;
        for(char c : s2)
        {
            if(map2[c - 'a'] == 0)
                s += c;
        }
        return s.length() == 0 ? "-1" : s;
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends