class Solution {
public:
    int evaluate(int op1, int op2, string opr) {
        if (opr == "*") {
            return op1 * op2;
        } else if (opr == "/") {
            return op1 / op2;
        } else if (opr == "+") {
            return op1 + op2;
        } else if (opr == "-") {
            return op1 - op2;
        } else {
            // Handle invalid operand
            return 0; 
        }
    }
      bool isOperand(string op) {
        return op!="*" && op!="/" && op!="+" && op!="-";
     }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0;i<tokens.size();+i++)
         {
            if(isOperand(tokens[i]))
                st.push(stoi(tokens[i]));
             else{
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(evaluate(op2,op1,tokens[i]));
             }   
         }

        //  while(st.size() != 1) {
        //     string op1 = st.top();
        //     st.pop();
        //     string op2 = st.top();
        //     st.pop();
        //     string operand = st.top();
        //     st.pop();
        //     st.push(to_string(evaluate(stoi(op1),stoi(op2),operand)));
        //  }
        //  cout<<st.top();
         return (st.top());
    }
};
