class Solution {
public: 
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxleft(n,0), maxright(n,0);
        for(int i =1;i<n;i++)
         if(height[i-1] > maxleft[i-1]) maxleft[i] = height[i-1];
         else
          maxleft[i] = maxleft[i-1];
          
        for(int i = n-2;i>=0 ;i--)
         if(height[i+1] > maxright[i+1]) maxright[i] = height[i+1];
         else
          maxright[i] = maxright[i+1];

         for(auto num: maxleft)
         cout<<" "<<num;
         cout<<endl;

         for(auto num: maxright)
         cout<<" "<<num; 

        int sum = 0;
         for(int i =0;i<n;i++)
         {
            int trap = min(maxleft[i], maxright[i]) - height[i];
            if(trap > 0) sum = sum + trap;
         }
         return sum;
     }
};
