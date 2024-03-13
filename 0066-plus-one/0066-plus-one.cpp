class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size() - 1;
        while(true){
            //if a digit is a 9, then that value is set to 0 and the next one in line is incremented by 1
            if(digits[length] == 9){
                //if the value in index 0 is 9, then change the value to 1 and append 0 to the end of the array
                if(length == 0){
                    digits[length] = 1;
                    length = digits.size();
                    digits.push_back(0);
                    break;
                }
                else{
                    digits[length] = 0;
                    //length is used to count which index we are looking at
                    length--;
                }
            }
            //if not an edge case, simply increment by 1
            else {
                digits[length]++;
                break;
            }   
        }
        return digits;
    }
};