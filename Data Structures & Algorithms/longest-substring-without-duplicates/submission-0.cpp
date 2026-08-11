class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int l=0;
        int n=s.size();
        int max_len=0;
        for (int r=0; r<n; r++)
        {
            while(window.count(s[r]))
            {
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            max_len=max(max_len, r-l+1);
        }
        return max_len;
    }
};
