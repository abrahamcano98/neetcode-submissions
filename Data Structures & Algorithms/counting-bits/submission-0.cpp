class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);
        for(int i=0; i<n+1; i++)
        {
            result[i]=countbit(i);
        }
        return result;
    }
    int countbit(int x)
    {
        int result=0;
        for(int i=0; i<32; i++)
        {
            result+=(x>>i)&1;
        }
        return result;
    }
};
