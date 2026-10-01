class Solution {
public:
    void merge(vector<int> & nums, int left, int right, int mid) {
        vector<int> leftArr, rightArr, ans;

        for(int i =left;i<=mid;i++)
            leftArr.push_back(nums[i]);

        for(int i =mid+1;i<=right;i++)
            rightArr.push_back(nums[i]);
        int l = 0, r=0;
    
        
        while(l < leftArr.size() && r < rightArr.size()) {
            if(leftArr[l] <= rightArr[r])
                {
                    ans.push_back(leftArr[l]);
                    l++;
                }
                else {
            
                    ans.push_back(rightArr[r]);
                    r++;
                }
        }
        while(l < leftArr.size()) {
            ans.push_back(leftArr[l]);
            l++;
        }
        while(r < rightArr.size()) {
            ans.push_back(rightArr[r]);
            r++;
        }
        for(int i = 0;i<ans.size();i++)
        nums[i+left]=ans[i];
    }

    void sort(vector<int> &nums, int left, int right) {
        if(left>=right) return;
        
        int mid = left + (right-left)/2;
        sort(nums, left, mid);
        sort(nums, mid+1, right);
        merge(nums, left, right, mid);
    }
    void sortColors(vector<int>& nums) {
        sort(nums, 0, nums.size()-1);
    }
};