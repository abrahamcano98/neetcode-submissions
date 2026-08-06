class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagrams;
        vector<vector<string>> result;
        for(string s:strs)
        {
            string key=s;
            sort(key.begin(),key.end());
            anagrams[key].push_back(s);
        }
        for(auto& [key,value]:anagrams)
        {
            result.push_back(value);
            
        }
        return result;
    }
};
