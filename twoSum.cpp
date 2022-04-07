class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        unordered_map<int,int> seen;
        for(int i=0 ; i<n ; ++i)
        {
            if(seen.count(target-nums[i]))
                return {i,seen[target-nums[i]]};
            else
                seen[nums[i]]=i;
        }
        return {-1,-1};
    }
};