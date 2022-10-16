// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        if(n==1)
        return "";
        if(n==2)
        return "";
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int mx=0,secmx=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mx=max(mx,it->second);
        }
        string ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(mx!=it->second&&secmx<it->second)
            {
                ans=it->first;
                secmx=it->second;
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
