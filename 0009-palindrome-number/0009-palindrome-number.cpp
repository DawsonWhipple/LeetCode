class Solution {
public:
    bool isPalindrome(int x) {
        bool isPalindrome = true;
        //convert int x to a string in order to compare individual digits
        std::string xString = std::to_string(x);
        //n will check starting from end of string (right to left)
        int n = xString.length();
        
        //loops through the first half of the string, comparing xString[i] to xString[n-i]
        for (int i = 0; i <= xString.length()/2; i++){
            //if xString[i] equals xString[n-i], continue and check next set
            if (xString[i] == xString[n-1]){
                //decrement rightside counter, both counters will meet in the middle
                n--;
            }
            //if one set is incorrect no need to check the rest
            else{
                isPalindrome = false;
                break;
            }
        }

        return isPalindrome;
    }
};