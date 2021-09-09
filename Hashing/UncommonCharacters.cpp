// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int map1[26] = {0};
            int map2[26] = {0};
            for(char c : A)
                map1[c - 'a']++;
            for(char c : B)
                map2[c - 'a']++;
            string res = "";
            for(int i = 0 ; i < 26 ; i++)
            {
                if(map1[i] != 0 && map2[i] == 0)
                    res += (i + 'a');
                else if(map1[i] == 0 && map2[i] != 0)
                    res += (i + 'a');
            }
            return res.length() ? res : "-1";
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends