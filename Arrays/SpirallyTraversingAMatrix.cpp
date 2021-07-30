// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int n, int m) 
    {
        // code here 
        vector<int> v;
        int t = 0, b = n - 1, l = 0, r = m - 1;
        while(t <= b && l <= r)
        {
            for(int i = l ; i <= r ; i++)
                v.push_back(matrix[t][i]);
            t++;
            for(int i = t ; i <= b ; i++)
                v.push_back(matrix[i][r]);
            r--;
            if(t <= b)
            {
                for(int i = r ; i >= l ; i--)
                    v.push_back(matrix[b][i]);
                b--;
            }
            if(l <= r)
            {
                for(int i = b ; i >= t ; i--)
                    v.push_back(matrix[i][l]);
                l++;
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends