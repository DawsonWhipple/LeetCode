class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        //use s.length()-1 to account for the NULL char at the end of the string
        for(int i = 0; i < s.length()-1; i++){
            sum += abs(s[i]-s[i+1]);
        }
        return sum;
    }
};