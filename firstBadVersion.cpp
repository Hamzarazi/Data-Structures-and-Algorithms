class Solution {
public:
    int firstBadVersion(int n) 
    {
        int l=0 , r=n , mid , ans;
        while(l <= r)
        {
            mid=l+(r-l)/2;
            if(isBadVersion(mid))
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