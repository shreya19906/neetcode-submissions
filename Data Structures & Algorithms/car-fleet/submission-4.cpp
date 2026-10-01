class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double, double>> pairs;
        stack<double> st;
        for(int i=0;i<position.size();i++) 
            pairs.push_back(pair<double,double>(position[i],speed[i]));
        sort(pairs.rbegin(), pairs.rend());

        for(auto pair: pairs) {
            st.push((target-pair.first)/pair.second);
            cout<<"size "<<st.size()<<endl;
            if(st.size()>=2) {
                double t1 = st.top(); st.pop();
                double t2 = st.top();
                cout<<"t1 t2 "<<t1<<" "<<t2<<endl;
                if(t1 > t2) {
                    st.push(t1);
                }
            }
       
        }
         return st.size();
        
    }
};
