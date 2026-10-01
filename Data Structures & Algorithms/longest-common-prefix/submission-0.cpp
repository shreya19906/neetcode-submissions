class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string a = strs[0];
        for(int i =0;i<a.size();i++) {
            for(int j =0;j<strs.size();j++)
                if(i < strs[j].size() && a[i]== strs[j][i])
                  {
                    if (j == strs.size()-1)
                     ans = ans + a[i];
                  }
                else
                 return ans;
        }
        return ans;
        
    }
};