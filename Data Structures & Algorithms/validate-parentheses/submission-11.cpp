class Solution {
public:
    bool isOpenBracket(char s) {
        return s == '{' || s == '(' || s=='[';
    }
    bool isValidPair(char s, char t) {
        return (s == '{'  && t == '}') || (s=='[' && t==']') || (s=='(' && t==')');
    }
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0;i<s.length(); i++)
        {
            if(isOpenBracket(s[i]))
                st.push(s[i]);
            else if(st.empty() && !isOpenBracket(s[i])) return false;
              else if(!st.empty() && isValidPair(st.top(), s[i]))
                st.pop();
                else return false;
              
        }
        return st.empty();
    }
};
