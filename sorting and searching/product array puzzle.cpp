// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  typedef long long  ll;
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        //create two array left and right
        //an answer will be product of the two array respectrively
        //ex 10  3   5  6   2
    //left   1   10  30 150 900
    //right  180 60  12   2   1    
    //ans    180 600 360 300 900
        
        vector<ll> left(n),right(n),ans;
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<nums.size();i++)
        {
            left[i]=nums[i-1]*left[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=nums[i+1]*right[i+1];
            //cout<<right[i]<<endl;
        }
        for(int i=0;i<n;i++)
        {
        //    cout<<right[i]<<" "<<left[i]<<"\n";
            
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
