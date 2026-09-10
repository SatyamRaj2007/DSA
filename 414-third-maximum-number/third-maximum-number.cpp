class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long largest = LLONG_MIN;
        long long secondlargest = LLONG_MIN;
        long long thirdlargest = LLONG_MIN;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == largest ||
               nums[i] == secondlargest ||
               nums[i] == thirdlargest) {
                continue;
            }

            if(nums[i] > largest) {
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > secondlargest) {
                thirdlargest = secondlargest;
                secondlargest = nums[i];
            }
            else if(nums[i] > thirdlargest) {
                thirdlargest = nums[i];
            }
        }

        if(thirdlargest == LLONG_MIN)
            return largest;

        return thirdlargest;
    }
};