// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

bool comp(val v1, val v2)
{
    return v2.second > v1.second;
}
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
    //Your code here
    sort(p, p+n, comp);
    int j = 0, count = 1;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        if(p[i+1].first > p[j].second)
        {
            count++;
            j = i+1;
        }
    }
    return count;
}