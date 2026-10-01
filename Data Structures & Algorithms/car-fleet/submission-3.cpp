class Solution {
public:
    void printStack (stack<double> st) {
        stack <double> pt = st;
        while(pt.size()) {
            cout<<" "<<pt.top()<<" ";
            pt.pop();
        }
        cout<<endl;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
      stack<double> st;
      vector<pair<double,double>> posPair;
      for(int i =0;i<position.size();i++)
        posPair.push_back(pair<double,double>(position[i], speed[i]));
      sort(posPair.rbegin(), posPair.rend() );
    
      for(auto it: posPair) {
        st.push((target - it.first)/it.second);
        if(st.size()>=2) {
            printStack(st);
            double n1 = st.top();
            st.pop();
            double n2 = st.top();
            if(n1 <= n2) {} else st.push(n1);
             printStack(st);
        }
      }
      return st.size(); 
    }
};
