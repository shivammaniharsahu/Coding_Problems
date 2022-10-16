// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    	
	example
	/*
	given 1 5 4 3 2
	ans=2 swap
	use vector pair
	(1,0) (5,1) (4,2) (3,3) (2,4)
	
	after sorting vector pair
	//(1,0) (2,4)  (3,3) (4,2) (5,1)
	
	// now we want to make original vector
	so use the below code
	//(1,0) (5,1) (4,2) (3,3) (2,4)
	
	
		
	
	*/
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>& nums)
	{
	    // Code here
	    int n=nums.size();
	    vector<pair<int,int>> vp;
	    for(int i=0;i<nums.size();i++)
	    {
	        vp.push_back({nums[i],i});
	    }
	    sort(vp.begin(),vp.end());
	    int swapcount=0;
	    for(int i=0;i<n;i++)
	    {
	        if(vp[i].second==i)
                continue;
            else
            {
                    swapcount++;
                    swap(vp[i],vp[vp[i].second]);
                    i--;//since we need to compare from same position that swapped element is in correcct position or not 
            }
            
	    }
	    
	    return swapcount;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
