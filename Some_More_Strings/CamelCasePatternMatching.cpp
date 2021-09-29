// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string ToUpper(string s)
    {
        string res;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                res.push_back(s[i]);
        }
        return res;
    }
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) 
    {
        // code here
        vector<pair<string, string>> v;
        for(int i = 0 ; i < Dictionary.size() ; i++)
            v.push_back({ToUpper(Dictionary[i]), Dictionary[i]});
        vector<pair<string, int>> pos;
        for(int i = 0 ; i < Dictionary.size() ; i++)
        {
            if(v[i].first.substr(0, Pattern.size()) == Pattern)
                pos.push_back({v[i].first, i});
        }
        sort(pos.begin(), pos.end());
        vector<string> res;
        for(int i = 0 ; i < pos.size() ; i++)
            res.push_back(Dictionary[pos[i].second]);
        return res;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends