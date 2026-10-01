class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(int i =0;i<s.length();i++) {
            if(isalnum(s[i]))
             st = st + s[i];
        }
        cout<<st;
        int i = 0; int j = st.length() -1;
        cout<<endl;
        while(i < j ) {
            if(tolower(st[i])!= tolower(st[j])) {
                cout<<" "<<st[i]<<" "<<st[j]<<endl;
                return false;
            }
            i++;
            j--;
        };
       return true;
    }
};
