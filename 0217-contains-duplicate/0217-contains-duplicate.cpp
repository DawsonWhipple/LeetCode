class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //sort the numbers in the given array
        sort(nums.begin(), nums.end());
        //search through now sorted array
        for(int i = 0; i < nums.size()-1; i++){
            //only need to check adjcent ints for duplicates now that array is sorted
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};