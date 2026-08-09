class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int len=1;
        int curr_len=1;
        if(n==0)
        {
            return 0;
        }
        int prev=nums[0];
        for(int i=1; i<n; i++)
        {
            
            if((nums[i]-prev)==1)
            {
                curr_len++;
                len=max(len, curr_len);
            }
            else if((nums[i]-prev)>1)
            {
                len=max(len, curr_len);
                curr_len=1;
            }
            prev=nums[i];
        }
        return len;
        
    }
};
