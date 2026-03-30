class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mer;
        mer.insert(mer.end(),nums1.begin(),nums1.end());
        mer.insert(mer.end(),nums2.begin(),nums2.end());
        sort(mer.begin(),mer.end());
        double a;
        int n=mer.size();
        if(n%2==1){
            a=mer[n/2];
        }
        else{
            a=(mer[n/2-1]+mer[n/2])/2.0;
        }
        return a;
    }
};
