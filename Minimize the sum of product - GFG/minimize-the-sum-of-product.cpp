//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        
        long long int minSum = 0;
        
        // Calculate the sum of products of elements from a and b.
        for (int i = 0; i < n; i++) {
            minSum += static_cast<long long int>(a[i]) * static_cast<long long int>(b[i]);
        }
        
        return minSum;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, i;
         cin>>n;
         int a[n], b[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         for(i=0;i<n;i++)
         cin>>b[i];
         Solution ob;
         cout<< ob.minValue(a, b, n) <<endl;
     }
	
	return 0;
}
// } Driver Code Ends