class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2);
        unordered_map<int,int> seen_nums;
        int n=nums.size();
        int reciprocal=0;
        int val=0;
        for(int i=0; i<n; i++)
        {
            val=nums[i];
            reciprocal=target-val;
            if (seen_nums.contains(reciprocal))
            {
                output[0]=seen_nums[reciprocal];
                output[1]=i;
                return output;
            }
            else
            {
                seen_nums[val]=i;
            }
        }
    }
};
