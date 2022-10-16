// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int solve(int n)
    {
        int c=0;
        while(n!=0)
        {
            if(n%2)
            {
                c++;
            }
            n/=2;
        }
        return c;
    }
    static bool comp(const tuple<int,int,int> &a,const tuple<int,int,int> &b)
    {
        if(get<0>(a)==get<0>(b))
            return get<2>(a)<get<2>(b);
        return get<0>(a)>get<0>(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        vector<tuple<int,int,int>> vp;
        for(int i=0;i<n;i++)
        {
            int count=solve(arr[i]);
            vp.push_back(make_tuple(count,arr[i],i));
        }
        sort(vp.begin(),vp.end(),comp);
        
        for(int i=0;i<n;i++)
        {
            //cout<<get<1>(vp[i])<<" ";
            arr[i]=get<1>(vp[i]);
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
