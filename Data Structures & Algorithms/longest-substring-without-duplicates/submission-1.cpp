class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 1) return 0;
        int left = 0;
        int len = 0;
        unordered_set<char> set;
        for(int i =0;i<s.length();i++) {
            while(set.find(s[i]) != set.end()) {
                set.erase(s[left]);
                left++;
               
            } 
            set.insert(s[i]);
            len = max(len, i - left + 1);
        }
        return len;
    }
};
