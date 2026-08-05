class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        int n=s.size();
        int n2=t.size();
        if(n!=n2)
        {
            return false;
        }
        for(int i=0; i<n; i++)
        {
            freq1[s[i]]+=1;
            freq2[t[i]]+=1;
        }
        for (const auto& [key,value]:freq1)
        {
            if(freq2.contains(key)!=true || freq2[key]!=value)
            {
                return false;
            }
        }
        return true;
        
    }
};
