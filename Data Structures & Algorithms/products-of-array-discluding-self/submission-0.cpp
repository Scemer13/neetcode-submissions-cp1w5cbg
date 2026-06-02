class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int a=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i) a*=nums[j];
            }
            res.push_back(a);
        }
        return res;
    }
};
