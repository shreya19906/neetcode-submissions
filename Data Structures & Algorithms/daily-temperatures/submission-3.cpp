class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> temp(n,0);
        for(int i =n-2;i>=0; i--) {
            
            int j = i+1;
            cout<<" i "<<temperatures[i]<<" j "<<temperatures[j]<<endl;
            while(j < n && temperatures[i] >= temperatures[j])
               j++;
               cout<<"Final j "<<j<<" n "<<n;
               cout<<endl;
            if(j >= n) temp[i]= 0;
            else temp[i] = j-i;
        }
        return temp;
    }
};
