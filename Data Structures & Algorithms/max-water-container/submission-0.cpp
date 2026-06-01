class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int wtr=0;
        while(l<r){
            int hmin=min(height[l],height[r]);
            int cwtr=hmin*(r-l);
            wtr=max(wtr,cwtr);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return wtr;
    }
};