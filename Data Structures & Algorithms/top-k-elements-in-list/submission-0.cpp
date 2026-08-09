class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output(k);
        unordered_map<int,int> freq;
        for(int num:nums)
        {
            freq[num]+=1;
        }
        vector<pair<int,int>> vec_freq(freq.begin(), freq.end());
        sort(vec_freq.begin(), vec_freq.end(), [] (const auto&a, const auto&b){
            return a.second>b.second;});
        for(int i=0; i<k; i++)
        {
            output[i]=vec_freq[i].first;
        }
        return output;
        
    }
};
