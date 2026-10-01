class Solution {
public:
    void solution(string letterComb, string digits, int index, map<char, string> digits_letter_map , vector<string> &ans){
        if(index == digits.length()) {
            ans.push_back(letterComb);
            return;
        }

        for(int i =0;i<digits_letter_map[digits[index]].length(); i++) {
            string comb = letterComb + digits_letter_map[digits[index]][i];
            cout<<comb<<endl;
            solution(comb, digits, index + 1, digits_letter_map ,ans);
            comb.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, string> digit_letter_map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> ans;
        if(digits.length() < 1) return ans;
        solution("", digits, 0, digit_letter_map, ans);
        return ans;
    }
};
