class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int l=0;
        int res=0;
        for(int r=0;r<s.length();r++){
            while (a.find(s[r]) != a.end()) {
                a.erase(s[l]);
                l++;
            }
            a.insert(s[r]); 
            res=max(res,r-l+1);
        }
        return res;
    }
};
