class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counters(26, 0);
        int left = 0;
        int maxCount = 0;
        int result = 0;
        for(int i =0;i<s.length();i++) {
            counters[s[i]-'A']++;
            maxCount = max(maxCount, counters[s[i]-'A']);
            if((i - left + 1) - maxCount <= k){
                result = max(result, i-left+1);
            } else {
                counters[s[left]-'A']--; 
                left++;
            }
            
        }
        return result;
    }
};
