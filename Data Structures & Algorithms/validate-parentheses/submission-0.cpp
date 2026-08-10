class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map;
        map[')']='(';
        map['}']='{';
        map[']']='[';
        stack<char> stack_c;
        for(char c:s)
        {
            if((c == '(') || (c == '{') || (c == '['))
            {
                stack_c.push(c);
            }
            else{
                if(stack_c.empty() || map[c]!=stack_c.top())
                {
                    return false;
                }
                else{
                    stack_c.pop();
                }
                
            }
        }
        return stack_c.empty();
        
    }
};
