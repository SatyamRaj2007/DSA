class Solution {
public:
    bool divideArray(vector<int>& nums) {

        if (nums.size() % 2 != 0)
            return false;

        vector<int> hash(501, 0);

        for (int x : nums)
            hash[x]++;

        for (int freq : hash) {
            if (freq % 2 != 0)
                return false;
        }

        return true;
    }
};