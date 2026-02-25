class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int best = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            int l = i + 1, r = n - 1;

            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                int diff = target - sum;

                if (abs(diff) < abs(target - best))
                    best = sum;

                if (diff > 0) ++l;
                else if (diff < 0) --r;
                else return target;
            }
        }
        return best;
    }
};