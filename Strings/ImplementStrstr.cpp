// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    //Your code here
    int i = 0, j = 0;
    while(i < s.length())
    {
        while(i < s.length() && j < x.length() && s[i] == x[j])
            i++, j++;
        if(j == x.length())
            return i - x.length();
        else
            j = 0;
        i++;
    }
    return -1;
}