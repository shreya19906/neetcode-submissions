class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        for(char c: s)
            count[c - 97]++;
        for(char c: t)
            count[c - 97]--;
        for(auto it: count)
            if(it) return false;
        return true;    
    }
};
