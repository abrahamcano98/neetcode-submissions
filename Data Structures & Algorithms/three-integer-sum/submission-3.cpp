class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        int i,j,k;
        sort(nums.begin(), nums.end());
        for(i=0; i<n-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int val=nums[i];
            j=i+1;
            k=n-1;
            while(j<k)
            {
                if(val+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else if(val+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else{
                    vector<int> v={nums[i],nums[j], nums[k]};
                    result.push_back(v);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }

                    while (j < k && nums[k] == nums[k + 1])
                    {
                        k--;
                    }
                }
              
            }
        }
        return result;
    }
};
