class Solution {
public:
    bool isClosingBracket(char s) {
        return s == '}' || s == ']' || s==')';
    }

    bool isValidPairOfBracket(char s, char t) {
        return (t == '{' && s == '}') || (t == '[' && s == ']') || (t =='(' && s == ')');
    }
    bool flag = false;

    bool isValid(string s) {
        stack<char> st;
        if(isClosingBracket(s[0])) return false;
        for(int i =0;i< s.length();i++) {
            if(!isClosingBracket(s[i])) {flag=true; st.push(s[i]);}
            else if(isClosingBracket(s[i]) && st.size() && isValidPairOfBracket(s[i], st.top())) {
                st.pop();
            }
            else if (isClosingBracket(s[i]) &&  st.size() && !isValidPairOfBracket(s[i], st.top())) return false;
        }
        if(flag && st.size() == 0) return true; return false;
    }
    
};
