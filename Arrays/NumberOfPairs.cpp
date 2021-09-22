// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution
{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
        //Your code here
        /*
            Courtesy of Abhay Kumar:
            X^Y>Y^X
            =>Ylog(X)>Xlog(Y)
            =>log(X)/X > log(Y)/Y (We just have to find the number of pairs that satisfies this, if the array given was of long double type, then we could have just changed X[i] to log(X[i])/X[i] for each i, and similarly for Y, and rest was easy binary search).
            Graph of y=log(x)/x is lowest at 1, then increasing upto e(~2.71828), then decreasing.
            So the integer value at which it will be maximum is 3, and 2nd max at 2 and 4.
            So, for each i < n
            if X[i]==1, no possible value of log(Y[i])/Y[i] can be smaller than log(1)/1, so we just continue.
            we will add number of 1's in Y, for each of the below cases (because log(Y[i])/Y[i] will be minimum at Y[i]=1).
            if X[i]>3, we just have to check number of values greater than X[i] in Y (as the graph is decreasing for x>=e)
            if X[i]==2, we will change change X[i] to 4 (we can treat X[i]=2 as same as X[i]=4 because log(2)/2 = log(4)/4), and do the same as stated above (for X[i]>3).
            if X[i]==3, we do the same thing what we did for X[i]>3, but we will also add number of values in Y which is equal to 2 (because, obviously).
        */
        long long res = 0;
        sort(Y, Y + N);
        int k = 0, l = 0;
        for(int i = 0 ; i < N ; i++)
        {
            k += (Y[i] == 1);
            l += (Y[i] == 2);
        }
        for(int i = 0 ; i < M ; i++)
        {
            if(X[i] == 1)
                continue;
            if(X[i] == 2)
                X[i] = 4;
            else if(X[i] == 3)
                res += l;
            res += k + (Y + N - upper_bound(Y, Y + N, X[i]));
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends