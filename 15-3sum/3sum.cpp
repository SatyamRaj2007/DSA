class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int  n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }

            int m1=i+1;
            int m2=n-1;

            while(m1<m2){
                int sum=nums[i]+nums[m1]+nums[m2];

                if(sum==0){
                    ans.push_back({nums[i],nums[m1],nums[m2]});

                    while(m1<m2 && nums[m1]==nums[m1+1])m1++;
                    while(m1<m2 && nums[m2]==nums[m2-1])m2--;

                    m1++;
                    m2--;
                }else if(sum<0){
                    m1++;
                }else{
                    m2--;
                }
            }
        
        }

        return ans;
        
    }
};