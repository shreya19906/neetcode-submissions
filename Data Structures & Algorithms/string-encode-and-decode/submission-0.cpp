class Solution {
public:
    string separator = "01";
    string encode(vector<string>& strs) {
       string encodeString;
       for(auto st: strs) {
           for(auto chr: st) {
              encodeString = encodeString + chr + chr;
           }
           encodeString = encodeString + separator;
       } 
       cout<<encodeString;
       return encodeString;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        vector<string> ans;
        int i = 0; int size = s.length();
        while(i < size) {
            string decoded;
            while(s[i] != '0') {
               decoded = decoded + (s[i]);
               i++;
            }
            int count = 0;
            while(s[i] == '0'){ count++; i++;}
             if(count%2 == 1) {
                while(--count) decoded = decoded + '0';
             }
             strs.push_back(decoded);
             i++;      
        }

        for(auto it: strs) {
            string st;
            for(int i =0; i< it.length(); i=i+2)
             st = st + it[i];
             ans.push_back(st);
        }

      return ans;
    }
};
