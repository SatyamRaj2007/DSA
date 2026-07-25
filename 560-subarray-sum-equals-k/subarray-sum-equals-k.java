class Solution {
    public int subarraySum(int[] nums, int k) {
      int i = 0;
      int res = 0;
      while(i<nums.length){
        int sum = nums[i];
        int j = i+1;
        if(sum==k){
            res++;
        }
        while(j<nums.length){
            sum = sum + nums[j];
            if(sum==k){
                res++;
            }
            j++;
        }
        i++;
      } 
      return res; 
   }

}
