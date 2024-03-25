class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>answer;
        
        int n = size(nums);
        
        for(int i=0;i<n;i++){
            //get absolute value of nums[i] to use as an index reference
            int x = abs(nums[i]);
            //if the value at the index x is negative, then it has been found before, therefore its a repeat
            if(nums[x-1]<0){
                //add repeats to return array
                answer.push_back(x);
            }
            //if the value has not been found before, set the value at index to a negative to indicate it was found once
            nums[x-1] *= -1;
        }
        return answer;
    }
};