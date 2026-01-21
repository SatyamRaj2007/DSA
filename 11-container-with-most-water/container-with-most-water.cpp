class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxwater=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int currentwater=w*ht;
            maxwater=max(maxwater,currentwater);

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }

        }
        return maxwater;
    }
};