class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int curr = 0;
        int right = nums.size() - 1;

        while (curr <= right) {
            if (nums[curr] != 0) {
                swap(nums[left], nums[curr]);
                left++;
            }
            curr++;
        }
    }
};