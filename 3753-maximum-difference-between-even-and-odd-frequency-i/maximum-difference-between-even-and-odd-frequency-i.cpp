class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>c;
        for(char ch:s){
            ++c[ch];
        }
        int max_a1=1, min_a2=s.size();

        for(const auto & [_,value]:c){
            if(value%2==1){
                max_a1=max(max_a1,value);
            }else{
                min_a2=min(min_a2,value);
            }
        }
        return max_a1-min_a2;
    }
};