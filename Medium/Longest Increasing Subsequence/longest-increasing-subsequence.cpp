//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        if(n == 0) return 0;
       vector<int>temp;
       temp.push_back(a[0]);
       int len = 1;
       for(int i=1; i<n; i++){
           if(a[i] > temp.back()){
               temp.push_back(a[i]);
               len++;
           }
           else{
               int index = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin();
               temp[index] = a[i];
           }
       }
       return len;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends