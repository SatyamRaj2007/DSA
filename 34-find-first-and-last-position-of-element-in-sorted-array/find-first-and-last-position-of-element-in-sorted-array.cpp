class Solution {
public:
    int firstoccurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans=mid;
                end = mid - 1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        return ans;
    }
    int lastoccurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       /*
        int n=nums.size();
        vector<int>ans(2 , -1);

        int start=0;
        int end=n-1;
        int Sindex=0;
        int index=0;
        int Lindex=0;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                index=mid;
                end = mid - 1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else(nums[mid]>target){
                end=mid-1;
            }
        }
        */
        vector<int>finalans;
        finalans.push_back(firstoccurence(nums,target));
        finalans.push_back(lastoccurence(nums,target));
        
        return finalans;
        
    }
};