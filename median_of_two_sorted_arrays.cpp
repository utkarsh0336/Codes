class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        int ind = (len+1)/2;
        int cnt = 0,i = 0,j = 0;
        double med,nextmed;
        if(len % 2 == 0){
            while(cnt<ind){
                if(nums1[i] <= nums2[j]){
                     med = nums1[i];
                    nextmed = min(nums1[i+1],nums2[j]);
                    cnt++;
                    i++;
                   
                }
                else{
                     med = nums2[j];
                    nextmed = min(nums2[i+1],nums1[i]);
                    cnt++;
                    j++;
                   
                }
            }
            return (med + nextmed)/2;
        }
        else{
            while(cnt < ind){
                if(nums1[i] <= nums2[j]){
                    med = nums1[i]; 
                    cnt++;
                    i++;                   
                }
                else{
                    med = nums2[j];
                    cnt++;
                    j++;                   
                }
            }
            return med;
        }
    }
};