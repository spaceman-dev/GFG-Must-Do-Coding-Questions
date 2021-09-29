#include <bits/stdc++.h>
using namespace std;
string stringIgnorance(string str)
{
    bool hash[256] = {0};
    string res;
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(isalpha(str[i]))
        {
            if(hash[tolower(str[i])] == 0)
            {
                res += str[i];
                hash[tolower(str[i])] = 1;
            }
            else
                hash[tolower(str[i])] = 0;
        }
        else
        {
            if(hash[str[i]] == 0)
            {
                res += str[i];
                hash[str[i]] = 1;
            }
            else
                hash[str[i]] = 0;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin, str);
        cout << stringIgnorance(str) << endl;
    }
    return 0;
}