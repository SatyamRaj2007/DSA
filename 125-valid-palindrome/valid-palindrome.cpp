class Solution {
public:
    bool isPalindrome(string s) {
        string str1;
        for(char ch:s){
            if(!isalnum(ch)) continue;
            str1.push_back(tolower(ch));
        }

        string str2=str1;
        int start=0;
        int end=str2.size()-1;
        while(start<end){
            swap(str2[start++],str2[end--]);
        }
        return str2==str1;
    }
};