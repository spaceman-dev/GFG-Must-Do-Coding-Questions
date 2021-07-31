// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int symbolValue(char c)
{
    if(c == 'I')
        return 1;
    if(c == 'V')
        return 5;
    if(c == 'X')
        return 10;
    if(c == 'L')
        return 50;
    if(c == 'C')
        return 100;
    if(c == 'D')
        return 500;
    if(c == 'M')
        return 1000;
}
int romanToDecimal(string &str)
{
    // code here
    int res = 0;
    for(int i = 0 ; i < str.length() - 1 ; i++)
    {
        if(symbolValue(str[i+1]) <= symbolValue(str[i]))
            res += symbolValue(str[i]);
        else
            res -= symbolValue(str[i]);
    }
    res += symbolValue(str[str.length() - 1]);
    return res;
}