// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
  public:
    void genIpRec(vector<string> &res, string s, string ip, int ind, int count)
    {
        if(s.length() == ind && count == 4)
        {
            ip.pop_back();
            res.push_back(ip);
            return;
        }
        ip += s.substr(ind, 1) + '.';
        genIpRec(res, s, ip, ind+1, count+1);
        ip.erase(ip.end()-2, ip.end());
        if(s.length() < ind + 2 || s[ind] == '0')
            return;
        ip += s.substr(ind, 2) + '.';
        genIpRec(res, s, ip, ind+2, count+1);
        ip.erase(ip.end()-3, ip.end());
        if(s.length() < ind + 3 || stoi(s.substr(ind, 3)) > 255)
            return;
        ip += s.substr(ind, 3) + '.';
        genIpRec(res, s, ip, ind+3, count+1);
        ip.erase(ip.end()-4, ip.end());
    }
    vector<string> genIp(string &s)
    {
        // Your code here
        vector<string> res(s.length());
        string ip = "";
        genIpRec(res, s, ip, 0, 0);
        return res;
    }

};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        for (auto &u : str) {
            cout << u << "\n";
        }
    }
}  // } Driver Code Ends