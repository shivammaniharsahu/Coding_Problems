// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
//         Expected Time Complexity : O(n)
//         Expected Auxilliary Space : O(n)
        unordered_map<ll,ll> mp;
        ll sum=0,count=0;
        mp[0]=1;
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];//prefix sum
            if(mp.find(sum)!=mp.end())//if prefix sum preexit
            {
                count+=mp[sum];//count how many time it has already occure
                mp[sum]++;
            }
            else
            mp[sum]=1;
        }
    
        return count;
    }
        
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
