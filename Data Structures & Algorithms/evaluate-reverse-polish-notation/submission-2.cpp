class Solution {
public:
    bool isOperator (string s) {
        return s == "-" || s== "+" || s=="*" || s=="/";
    }

    int evaluate(int op1, int op2, string op) {

        if(op == "+") {
            return op1+op2;
        } else if(op == "-") {
             return op2 - op1;
        }
        else if(op == "*") {
             return op1 * op2;
        }
        else if(op == "/") {
             return floor(op2 / op1);
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i = 0 ;i < tokens.size();i++) {
            if(isOperator(tokens[i])) {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                string eval = to_string(evaluate(stoi(op1), stoi(op2), tokens[i]));
                st.push(eval);
            } else 
                st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};
