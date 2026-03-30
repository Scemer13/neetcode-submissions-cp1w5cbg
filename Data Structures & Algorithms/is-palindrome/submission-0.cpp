class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        for(char a:s){
            if(isalnum(a)) c+=tolower(a);
        }
        return c==string(c.rbegin(),c.rend());
    }
};
