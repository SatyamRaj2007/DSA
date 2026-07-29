class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {

        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        
        if(sum>=k*threshold){
                count++;
            }

        for(int i=0;i<n-k;i++){
            int newsum=sum-nums[i]+nums[i+k];
            if(newsum>=k*threshold){
                count++;
            }
            sum=newsum;
        }

        return count;
        
    }
};