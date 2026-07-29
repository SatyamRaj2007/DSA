class Solution {
public:
    int maxVowels(string s, int k) {
        int n =s.size();
        vector<int>nums;
        deque<int>dq;
        for(int i=0;i<n;i++){
            nums.push_back(s[i]);
        }

        int count=0;

        for(int i=0;i<k;i++){
            dq.push_back(nums[i]);
            if(nums[i]==97||nums[i]==101||nums[i]==105||nums[i]==111||nums[i]==117) {
                count++;
            }
        }
        int maxcount=count;

        for(int i=0;i<n-k;i++){
            int removed=dq.front();
            dq.pop_front();
            if(removed==97||removed==101||removed==105||removed==111||removed==117) {
                count--;
            }

            int added = nums[i + k];
            dq.push_back(added);
            if(added==97||added==101||added==105||added==111||added==117) {
                count++;
            }
            maxcount=max(maxcount,count);
        }

        return maxcount;
    }
};