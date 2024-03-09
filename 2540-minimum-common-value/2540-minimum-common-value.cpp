class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //loop through first array
        for(int i = 0; i < nums1.size(); i++){
            //loop through second array
            for(int j = 0; j < nums2.size(); j++){
                //the first occurence of the arrays sharing an integer will be the minimum
                //this is because the arrays are already sorted in non-decreasing order
                if(nums1[i] == nums2[j]){
                    return nums1[i];
                }
                else if(nums1[i] < nums2[j]){
                    break;
                }
            }
        }
        //if no like integers are found between the two arrays
        return -1;
    }
};