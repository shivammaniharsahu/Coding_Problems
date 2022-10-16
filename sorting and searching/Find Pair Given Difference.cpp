// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends

//2 3 5 5 20 80
//80-2=78
//80-3=77
//20-2=18
//20 50 70 80 90
//
bool findPair(int arr[], int n, int no){
    //code
    //method 1
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        int sum=arr[i]+no;
        if(mp.find(sum)!=mp.end())
        return 1;
    }
    return 0;
    // sort(arr,arr+n);
    // int i=0,j=n-1;
    
    // while(i<j)
    // {
    //     diff=arr[j]-ar[i];
    //     if(diff==no)
    //     return 1;
    //     if(diff>no)
    //     {
                     
    //     }
    //     else
    //     {
            
    //     }
    // }
    //return 0;    
    
}
