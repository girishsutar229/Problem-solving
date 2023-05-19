//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <algorithm>

class Solution {
public:
    int findSwapValues(int A[], int n, int B[], int m) {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++) {
            sumA += A[i];
        }
        for (int i = 0; i < m; i++) {
            sumB += B[i];
        }

        // If the difference between the sums is odd, no swap is possible
        if ((sumA - sumB) % 2 != 0) {
            return -1;
        }

        int target = (sumA - sumB) / 2;
        std::sort(A, A + n);
        std::sort(B, B + m);

        int i = 0, j = 0;
        while (i < n && j < m) {
            int diff = A[i] - B[j];
            if (diff == target) {
                return 1;  // Pair found
            } else if (diff < target) {
                i++;
            } else {
                j++;
            }
        }

        return -1;  // Pair not found
    }
};


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends