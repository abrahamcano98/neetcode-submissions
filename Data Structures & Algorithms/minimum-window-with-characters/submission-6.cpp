class Solution {
public:
    string minWindow(string s, string t) {
        string result = "";
        int expected = 0;
        int best_l=0;
        int best_r=0;
        int size=0;

        unordered_map<char, int> hash_t;

        for (int i = 0; i < t.size(); i++)
        {
            hash_t[t[i]]++;
        }

        unordered_map<char, int> hash_window = hash_t;

        int l = 0;

        for (int r = 0; r < s.size(); r++)
        {
            if (hash_t.count(s[r]))
            {
                if (hash_window[s[r]] > 0)
                {
                    expected++;
                }

                hash_window[s[r]]--;
            }

            while (expected == t.size())
            {
                
                if(size==0 || (r-l+1)<size)
                {
                    best_l=l;
                    best_r=r;
                    size=best_r-best_l+1;
                }

                if (hash_t.count(s[l]))
                {
                    hash_window[s[l]]++;

                    if (hash_window[s[l]] > 0)
                    {
                        expected--;
                    }
                }

                l++;
            }
        }
        result=s.substr(best_l, size);
        return result;
    }
};