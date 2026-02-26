class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;

        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> freq(maxi + 1, 0);
        for (int num : nums) {
            freq[num]++;
        }
        vector<int> freqCount(n + 1, 0);
        for (int i = 0; i <= maxi; i++) {
            if (freq[i] > 0) {
                freqCount[freq[i]]++;
            }
        }
        for (int num : nums) {
            if (freqCount[freq[num]] == 1) {
                return num;
            }
        }

        return -1;
    }
};