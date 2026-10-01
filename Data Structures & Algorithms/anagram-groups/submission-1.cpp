class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
       map<string, vector<string>> mp;
       for(string str: strs) {
          vector<int> v(26, 0);
         for(auto st: str){
            cout<<st-'a'<<" ";
           v[st-'a'] +=v[st-'a']++;
         }
         cout<<endl<<endl;
         string s;
         for(auto it : v)
           s = s + to_string(it);
        cout<<s<<endl;
         mp[s].push_back(str);
       }
       for(auto it: mp) {
        ans.push_back(it.second);
       }
       return ans;
      
    }
};
