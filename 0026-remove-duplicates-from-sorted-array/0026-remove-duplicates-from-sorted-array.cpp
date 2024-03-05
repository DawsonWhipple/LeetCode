#include <vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1; i < nums.size(); i++){
            //if a value is found twice, shift current index and leave k index the same
            //This will prevent identical values from being counted more than once
            if(nums[i] != nums[i - 1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};