// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution 
{
  public:
    /*
        The idea is to generate all even length and odd length palindromes and keep track of the longest palindrome seen so far.
        To generate odd length palindrome, Fix a center and expand in both directions for longer palindromes, i.e. fix i (index) as the center and two indices as i1 = i+1 and i2 = i-1
        Compare i1 and i2 if equal then decrease i2 and increase i1 and find the maximum length. 
        Use a similar technique to find the even-length palindrome.
        Take two indices i1 = i and i2 = i-1 and compare characters at i1 and i2 and find the maximum length till all pairs of compared characters are equal and store the maximum length.
    */
    string longestPalin (string S) 
    {
        // code here
        if(S.length() == 1)
            return S.substr(0, 1);
        int maxLength = 0;
        int ind = 0, l = 0, r = S.length() - 1;
        for(int i = 1 ; i < S.length() ; i++)
        {
            l = i-1, r = i; // even length
            while(l >= 0 && r < S.length() && S[l] == S[r])
                l--, r++;
            l++, r--;
            if(S[l] == S[r] && r - l + 1 > maxLength)
            {
                ind = l;
                maxLength = r - l + 1;
            }
            l = i-1, r = i+1; // odd length
            while(l >= 0 && r < S.length() && S[l] == S[r])
                l--, r++;
            l++, r--;
            if(S[l] == S[r] && r - l + 1 > maxLength)
            {
                ind = l;
                maxLength =  r - l + 1;
            }
        }
        if(maxLength == 1)
            return S.substr(0, 1);
        return S.substr(ind, maxLength);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends