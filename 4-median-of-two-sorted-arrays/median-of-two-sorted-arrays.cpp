class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        int m1 = 0, m2 = 0;

        // Traverse till middle of merged array
        for (int count = 0; count <= (n + m) / 2; count++) {
            m2 = m1;

            if (i < n && j < m) {
                if (nums1[i] <= nums2[j]) {
                    m1 = nums1[i++];
                } else {
                    m1 = nums2[j++];
                }
            }
            else if (i < n) {
                m1 = nums1[i++];
            }
            else {
                m1 = nums2[j++];
            }
        }

        // If total length is odd
        if ((n + m) % 2 == 1) {
            return (double)m1;
        }

        // If total length is even
        return (m1 + m2) / 2.0;
    }
};
