class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> temp(n,0);
        for(int i =n-2;i>=0; i--) {
            
            int j = i+1;
            while(j < n && temperatures[i] >= temperatures[j])
               j++;
            if(j >= n) temp[i]= 0;
            else temp[i] = j-i;
        }
        return temp;
    }
};
