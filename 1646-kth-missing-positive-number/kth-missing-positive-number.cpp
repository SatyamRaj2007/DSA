class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int missing = nums[mid] - (mid + 1);

            if (missing < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return k + start;
    }
};