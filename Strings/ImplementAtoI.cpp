// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    /*You are required to complete this method */
    int atoi(string str)
    {
        //Your code here
        int i = str[0] == '-' ? 1 : 0, res = 0;
        for( ; i < str.length() ; i++)
        {
            
            if(str[i] < '0' || str[i] > '9')
                return -1;
            else
                res = (res * 10) + (str[i] - '0');
        }
        return str[0] == '-' ? -res : res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends