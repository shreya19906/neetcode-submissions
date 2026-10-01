class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length() < s1.length()) return false;
        vector<int> m1(26,0), m2(26,0);
        for(auto i: s1)
         {
            m1[i -'a'] = m1[i-'a']+1;;
         }
         int left = 0;
        for(int i =0;i<s2.length(); i++) {

           m2[s2[i]-'a'] = m2[s2[i]-'a']+1;;
            if(m1==m2) return true;
            if((i-left + 1) >= s1.length()) {
                m2[s2[left]-'a'] = m2[s2[left]-'a']-1;
                left++;
            }
        } 
        return false;
    }
};
