class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> arr(26,0);
       for(char c: s)
        arr[c-97] = arr[c-97]+1;

        for(char c: t)
        arr[c-97] = arr[c-97]-1;

        for(int a: arr)
            if(a!=0)
            return false;

        return true   ;
    }
};
