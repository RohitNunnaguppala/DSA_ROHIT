class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merge(m+n);
        int i=0;
        int j=0;
        int k=0;

        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                merge[k++]=nums1[i++];
            }
            else{
                merge[k++]=nums2[j++];
            }
        }

        while(i<m){
            merge[k++] = nums1[i++];
        }

         while (j < n) {
            merge[k++] = nums2[j++];
        }

        for (int l = 0; l < m + n; l++) {
            nums1[l] = merge[l];
        }
    }
};
