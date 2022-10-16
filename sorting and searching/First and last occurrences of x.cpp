// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    int beg=0,end=n-1,first=0,last=0;
    int mid;
    while(beg<=end)
    {
        mid=end-(end-beg)/2;
        if(arr[mid]==x)
        {
            first=x;
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
     beg=0,end=n-1;
     mid;
    while(beg<=end)
    {
        mid=end-(end-beg)/2;
        if(arr[mid]==x)
        {
            last=x;
            beg=mid+1;
        }
        else if(arr[mid]>x)
        {   
            end=mid-1;
        }
        
    }
    return {first,last};
}

