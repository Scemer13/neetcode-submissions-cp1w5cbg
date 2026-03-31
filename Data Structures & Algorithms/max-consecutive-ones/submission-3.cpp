class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int c=0;
                int j=i;
                while(j<nums.size() && nums[j]==1){
                    j++; c++;
                }
                if(c>count) count=c;
                i = j; // Optimization to skip indices already counted
            }
        }
        if(count<=nums.size()) return count;
        else return nums.size();
    }
};