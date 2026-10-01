class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    set<char> charSet;
    int maxCount = 0;
     int left = 0; int right = 0;
     while(right < s.length()) {
        if(charSet.find(s[right]) == charSet.end()) {
            charSet.insert(s[right]);
            maxCount = max(maxCount , right - left + 1);
            right++;
        }
        else {
            charSet.erase(s[left]);
            left++;
        }
     }
     return maxCount;
    }
};
