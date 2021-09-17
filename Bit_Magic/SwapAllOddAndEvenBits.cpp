// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        // Your code here
        return ((n & 0x55555555) << 1) | ((n & 0xAAAAAAAA) >> 1);
		// (n & 0xAAAAAAAA) get value of even position
		// (n & 0x55555555) odd position
		// >> 1 right shift of even bit
		// << 1 left shift of odd bit
		// | combine both even and odd term
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends