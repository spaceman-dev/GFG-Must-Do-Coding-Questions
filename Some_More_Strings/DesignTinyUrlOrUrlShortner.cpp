// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	// Function to generate a short url from integer ID
	string idToShortURL(long long int n) 
	{
	    // code here
	    string res;
	    while(n)
	    {
	        int dig = n % 62;
	        n /= 62;
	        if(dig < 26)
	            res += dig + 'a';
	        else if(dig < 52)
	            res += dig - 26 + 'A';
	        else
	            res += dig - 52 + '0';
	    }
	    reverse(res.begin(), res.end());
	    return res;
	}

};

// { Driver Code Starts.

long long shortURLtoID(string);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        auto url = ob.idToShortURL(n);
        auto id = shortURLtoID(url);
        cout << url << "\n" << id << "\n";
    }
    return 0;
}

// Function to get integer ID back from a short url
long long int shortURLtoID(string shortURL) {
    long long int id = 0; // initialize result

    // A simple base conversion logic
    for (int i = 0; i < shortURL.length(); i++) {
        if ('a' <= shortURL[i] && shortURL[i] <= 'z')
            id = id * 62 + shortURL[i] - 'a';
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
            id = id * 62 + shortURL[i] - 'A' + 26;
        if ('0' <= shortURL[i] && shortURL[i] <= '9')
            id = id * 62 + shortURL[i] - '0' + 52;
    }
    return id;
}  // } Driver Code Ends