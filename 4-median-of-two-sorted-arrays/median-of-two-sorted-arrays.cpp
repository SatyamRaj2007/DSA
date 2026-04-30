class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        int i=0, j=0;
        int n1=0;
        int m1=0;

        for(int a=0;a<=(n+m)/2;a++){
            m1=n1;

            if(i<n && j<m){
                if(nums1[i]<=nums2[j]){
                    n1=nums1[i++];
                }else{
                    n1=nums2[j++];
                }
            }else if(i<n){
                n1=nums1[i++];
            }else{
                n1=nums2[j++];
            }

        }

        if((n+m)%2==1){
            return(double)n1;
        }

        return (n1+m1)/2.0;
    }
};