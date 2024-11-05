class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge = nums1;
        merge.insert(merge.end(), nums2.begin(), nums2.end());
       
        sort(merge.begin(), merge.end());
        
        int totsize = merge.size();
        if (totsize % 2 == 0) {
            return (merge[totsize/2 - 1] + merge[totsize/2]) / 2.0;
        } else {
            return merge[totsize / 2];
        }
    }
};