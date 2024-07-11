// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        while (true) {
            int num = (rand7() - 1) * 7 + rand7(); // This generates a number between 1 and 49 (inclusive)
            if (num <= 40) { // Accept only numbers between 1 and 40 (inclusive)
                return 1 + (num - 1) % 10; // Map the numbers to 1 to 10 (inclusive)
            }
            // If the number is greater than 40, repeat the process
        }
        //seemingly correct but does not create an even distribution
        // num += rand7();
        // num *= 10;
        // num /= 7;
        // return num;
    }
};