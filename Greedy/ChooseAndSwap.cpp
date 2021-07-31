// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a)
    {
        // Code Here
        set<char> s;
        for(char c : a)
            s.insert(c);
        for(int i = 0 ; i < a.length() ; i++)
        {
            s.erase(a[i]);
            if(s.empty())
                break;
            if(*s.begin() < a[i])
            {
                char prev = a[i], replace = *s.begin();
                for(int j = 0 ; j < a.length() ; j++)
                {
                    if(a[j] == prev)
                        a[j] = replace;
                    else if(a[j] == replace)
                        a[j] = prev;
                }
                break;
            }
        }
        return a;
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends