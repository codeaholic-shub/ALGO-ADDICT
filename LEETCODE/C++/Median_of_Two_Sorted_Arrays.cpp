class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        int i = 0 , j = 0,k = 0;
        vector<int> nums;
        int sum = 0;
        while(k < n && i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                nums.push_back(nums1[i]);
                i++;
                k++;
            }else{
                nums.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        if(i < nums1.size()){
            while(i < nums1.size()){
                nums.push_back(nums1[i]);
                i++;
                k++;
            }
        }
        if(j < nums2.size()){
            while(j < nums2.size()){
                nums.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        if(n%2 != 0){
            double x = (double)nums[n/2];
            return x;
        }else{
            double x1 = (double)nums[n/2 -1];
            double x2 = (double)nums[n/2];
            return (x1 + x2)/2.0;
        }
    }
};
