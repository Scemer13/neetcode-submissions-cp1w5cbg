class Solution {
public:
    int climbStairs(int n) {
        double r5=sqrt(5);
        double phi=(1+r5)/2;
        double psi=(1-r5)/2;
        n++;
        return round((pow(phi,n)-pow(psi,n))/r5);
    }
};
