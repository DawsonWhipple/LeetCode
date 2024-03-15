class Solution {
public:
    int climbStairs(int n) {
       if (n == 0 || n == 1) {
            return 1;
        }
        //Fibonacci sequence
        int previous = 1, current = 1;
        for (int i = 2; i <= n; i++) {
            int temp = current;
            current = previous + current;
            previous = temp;
        }
        return current;
    }
};