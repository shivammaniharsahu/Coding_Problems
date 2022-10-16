// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int binarySearch(int ar[],int l,int h,int key)
    {
        int mid;
        while(l<=h)
        {
            mid=h-(h-l)/2;
            if(ar[mid]==key)
             return mid;
             else if(ar[mid]<key)
             {
                 l=mid+1;
             }
             else
             {
                 h=mid-1;
             }
             
        }
        return -1;
    }
  
    int search(int nums[],int l,int h,int key)
    {
         int start=l,end=h,mid,next,prev;
        int n=h+1,ans;
        if(n==1&&nums[0]!=key)
            return -1;
            
        if(n==1&&nums[0]==key)
            return 0;
        if(n==2)
        {
            if(nums[0]==key)
                return 0;
            if(nums[1]==key)
                return 1;
            return -1;
        }
        while(start<=end)
        {
            mid=(end-(end-start)/2)%n;
            // next=(mid+1)%n;
            // prev=(mid-1+n)%n;
            if(nums[mid]==key)
                return mid;
            else if(nums[mid]<=nums[end])
            {
                if(key>=nums[mid]&&key<=nums[end])
                {
                    start=mid+1;
                }
                else
                    end=end-1;
            }
            else if(nums[start]<=nums[mid])
            {
                if(key>=nums[start]&&key<nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }   
        }
        
        return -1;
    }
    
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends
