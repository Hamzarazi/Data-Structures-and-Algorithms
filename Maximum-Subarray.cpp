class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int csum=0 , maxsum=INT_MIN , n=nums.size();
        for(int i=0 ; i<n ; ++i)
        {
            csum=max(csum+nums[i] , nums[i]);
            maxsum=max(csum , maxsum);
        }
        return maxsum;
    }
};