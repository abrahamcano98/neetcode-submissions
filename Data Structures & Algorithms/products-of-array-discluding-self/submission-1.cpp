//Prefix: [1,1,2, 8]
//Suffix: [48,24,6,1]
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        for(int i=0; i<n; i++)
        {
            int n=nums.size();
            vector<int> res(n);
            vector<int> pref(n);
            vector<int> suff(n);
            pref[0]=1;
            suff[n-1]=1;
            for(int i=1; i<n; i++)
            {
                pref[i]=nums[i-1]*pref[i-1];
            }
            for(int i=n-2; i>=0; i--)
            {
                suff[i]=suff[i+1]*nums[i+1];
            }
            for(int i=0; i<n; i++)
            {
                nums[i]=suff[i]*pref[i];
            }
            return nums;

        }
        
        
    }
};
