class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start=0,end=nums.size()-1,mid,next,prev;
        int n=nums.size(),ans;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
        {
            return (nums[0]>nums[1])?nums[1]:nums[0];
        }
        while(start<=end)
        {
            mid=(end-(end-start)/2)%n;
            next=(mid+1)%n;
            prev=(mid-1+n)%n;
            if(nums[mid]<=nums[next]&&nums[mid]<=nums[prev])
            {
                ans=nums[mid];
                break;
                
            }
            else if(nums[mid]<=nums[end])
            {
                end=mid-1;
            }
            else if(nums[start]<=nums[mid])
            {
                start=mid+1; 
            }   
        }
        return ans;
        
        
    }
};
