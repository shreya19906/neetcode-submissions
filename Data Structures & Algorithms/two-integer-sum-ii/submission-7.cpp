class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0; int j = numbers.size()-1;
         while(i<j) {
            // if(numbers[i] + numbers[j] == target) break;
            // if(numbers[j] >= target) j--;
            // else if(numbers[i] < target) i++;
            int sum = numbers[i]+numbers[j];
            if(sum == target) break;
            else if(sum > target) j--;
            else i++;
         }
         vector<int> ans;
         if(i>=j) return ans;
         ans.push_back(i+1);
         ans.push_back(j+1);
         return ans;

    }
};
