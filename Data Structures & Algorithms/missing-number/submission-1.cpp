class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        uint32_t sum=0;
        uint32_t expect_sum=n*(n+1)/2;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
        }
        return expect_sum-sum;
    }
};
