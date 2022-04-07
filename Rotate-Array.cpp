class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int n=nums.size();
        int l=0 , r=n-1 , mid , ans;
        while(l <= r)
        {
            mid=l+(r-l)/2;
            if(target <= nums[mid])
            {
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};