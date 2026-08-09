class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for(string str:strs)
        {
            output+=to_string(str.size());
            output+="%";
            output+=str;
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;
        string chunk;
        int elem=0;
        int n=s.size();
        int len_chunk=0;
        int len_size=0;
        while(elem<n)
        {
            while(s[elem]!='%')
            {
                len_size++;
                elem++;
            }
            len_chunk=stoi(s.substr(elem-len_size, len_size));
            chunk = s.substr(elem+1, len_chunk);
            output.push_back(chunk);
            elem+=len_chunk+1;
            len_size=0;
            len_chunk=0;
        }
        return output;
    }
};
