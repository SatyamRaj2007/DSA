class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.size();
        string str1;
        string str2;
        for(int i=0;i<n;i++){
            if(!isalnum(s[i])) continue;
            if(s[i]>='A'&& s[i]<='Z'){
                s[i]=s[i]+32;
            }
            str1.push_back(s[i]);
        }
        str2=str1;
        int start=0;
        int end=str2.size()-1;
        while(start<end){
            swap(str2[start++],str2[end--]);
        }

        if(str2==str1) return true;
        return false;
    }
};