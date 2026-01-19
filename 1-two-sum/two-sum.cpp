class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            // Check if required value already exists
            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            // Store current value with its index
            mp[nums[i]] = i;
        }

        return {}; // never reached (guaranteed one solution)
    

    }
};