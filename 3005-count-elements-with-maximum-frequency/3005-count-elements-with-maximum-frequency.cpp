class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //create a new vector that stores frequency of appereance for each index
        vector<int> myVector;
        //this is acceptable within the scope as it was stated that '1 <= nums[i] <= 100'
        myVector.assign(101, 0);

        //determines the frequency of all digits
        for (int i = 0; i < nums.size(); i++){
            myVector[nums[i]]++;
        }
        //determines the maximum frequency of any digit
        int max = 0;
        for (int i = 0; i < myVector.size(); i++){
            if(myVector[i] > max){
                max = myVector[i];
            }
        }
        //determines how many digits are at the maximum frequency
        int count = 0;
        for (int i = 0; i < myVector.size(); i++){
            if(myVector[i] == max){
                count++;
            }
        }
        //return the maximum frequency * the number of digits that have that frequency
        return count*max;
    }
};