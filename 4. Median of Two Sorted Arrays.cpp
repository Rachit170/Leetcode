class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int total = nums1.size();
        if (total % 2 == 1)
            return static_cast<double>(nums1[total / 2]);
        else {
            int m1 = nums1[total / 2];
            int m2 = nums1[total / 2 - 1];
            return (static_cast<double>(m1) + static_cast<double>(m2)) / 2.0;
        }
    }
};
