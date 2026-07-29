class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double average = 0;

        for (int i = 0; i < k; i++) {
            average += (double)nums[i] / k;
        }
        double storemax = average;
        for (int i = 0; i < n - k; i++) {
            double newaverage =
                average - (double)nums[i] / k
                        + (double)nums[i + k] / k;
            storemax = max(storemax, newaverage);
            average = newaverage;
        }

        return storemax;
    }
};