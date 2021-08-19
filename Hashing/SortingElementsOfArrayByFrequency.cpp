#include <bits/stdc++.h>
using namespace std;

int comp(pair<int, int> &p1, pair<int, int> &p2)
{
    if(p1.second == p2.second)
        return (p1.first < p2.first);
    return (p1.second > p2.second);
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    unordered_map<int, int> mp;
	    for(int i = 0 ; i < n ; i++)
	    {
	        int a;
	        cin >> a;
	        mp[a]++;
	    }
	    vector<pair<int, int>> v;
	    for(auto i = mp.begin() ; i != mp.end() ; i++)
            v.push_back(make_pair(i->first, i->second));
        sort(v.begin(), v.end(), comp);
        for(auto i = v.begin() ; i != v.end() ; i++)
        {
            for(int j = 0 ; j < i->second ; j++)
                cout << i->first << " ";
        }
        cout << endl;
	}
	return 0;
}