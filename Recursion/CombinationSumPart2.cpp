// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    void recCombinationSum(vector<int> &A, int N, int B, int i, vector<vector<int>> &res, vector<int> &v)
    {
        if(B < 0)
            return;
        if(B == 0)
        {
            res.push_back(v);
            return;
        }
        for(int j = i ; j < N ; j++)
        {
            if(A[j] != A[j-1] || j == i)
            {
                v.push_back(A[j]);
                recCombinationSum(A, N, B - A[j], j+1, res, v);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int> &A, int N, int B)
    {
        // code here
        vector<int> v;
        vector<vector<int>> res;
        sort(A.begin(), A.end());
        recCombinationSum(A, N, B, 0, res, v);
        return res;
    }
};
// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N, x, B;
        cin>>N;
        vector<int> A;
        for(int i = 0;i < N;i++)
        {
            cin>>x;
            A.push_back(x);
        }
        cin>>B;
        
        Solution ob;
        vector<vector<int>> result;
        result = ob.combinationSum(A, N, B);
        
        if(result.size() == 0)
        cout<<"Empty"<<endl;
        else{
            for(int i = 0;i < result.size(); i++){
                cout<<"(";
                for(int j = 0; j < result[i].size();j++){
                    cout<<result[i][j];
                    if(j < result[i].size() - 1)
                    cout<<" ";
                }
                cout<<")";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends