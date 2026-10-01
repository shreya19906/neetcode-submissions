class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(); int n2 = nums2.size();
        int total = n1+n2;
        vector<int> A, B;
        if(n1 < n2)
           { A = nums1; B = nums2;}
        else
            {A = nums2; B = nums1;}
        int half = (total+1)/2;
        int high = A.size(); int low = 0;
        while(true) {
            int i = (low + high)/2;
            int Aleft = i > 0 ? A[i-1] : INT_MIN;
            int Aright = i < A.size() ? A[i]: INT_MAX;
            int j = half - i;
            int Bleft = j > 0 ? B[j-1] : INT_MIN;
            int Bright = j < B.size() ? B[j]: INT_MAX;
            cout<<"i "<<i<<" j "<<j<<endl;
            if(Aleft <= Bright && Aright >= Bleft) {
                if(total%2) return max(Aleft, Bleft);
                else return static_cast<double>(max(Aleft, Bleft) + min(Aright, Bright))/2;
            } else if (Aright < Bleft) low = i + 1;
            else
              high = i - 1;
                    
            
        }
    }
};
