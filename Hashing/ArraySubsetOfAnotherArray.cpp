// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) 
{
    set<int> s;
    for(int i = 0 ; i < n ; i++)
        s.insert(a1[i]);
    int count = 0;
    for(int i = 0 ; i < m ; i++)
    {
        if(s.find(a2[i]) != s.end())
            count++;
    }
    return count == m ? "Yes" : "No";
}