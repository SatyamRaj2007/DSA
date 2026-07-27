class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int Max1=INT_MIN;
        int Max2=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            Max1=max(Max1,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(Max1==nums[i]){
                count++;
            }
        }
        if(count>1){
            Max2=Max1;
        }else{
            for(int i=0;i<n;i++){
                if(Max1==nums[i]){
                    continue;
                }else{
                    Max2=max(Max2,nums[i]);
                }
            }
        }

        int ans=(Max1-1)*(Max2-1);

        return ans;
    }
};