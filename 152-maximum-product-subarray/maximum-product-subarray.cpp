class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int product = nums[0];
        int negativeproduct = nums[0];
        int maxproduct = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] < 0)
                swap(product, negativeproduct);

            product = max(nums[i], product * nums[i]);
            negativeproduct = min(nums[i], negativeproduct * nums[i]);

            maxproduct = max(maxproduct, product);
        }

        return maxproduct;
    }
};