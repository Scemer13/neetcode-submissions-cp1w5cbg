class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        // output[i/2] gives bits of the shifted number
        // (i % 2) adds 1 if the current number is odd
        output[i] = output[i >> 1] + (i & 1);
    }
    
    return output;
    }
};
