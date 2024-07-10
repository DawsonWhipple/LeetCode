class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int pointer1 = 0, pointer2 = 0;
        //there are two possible paths in each array that may split when a common element is found
        //whichever path is larger at the split is the one that should be chosen for the final max path
        long path1 = 0, path2 = 0;
        //modulus two be taken before returning the final sum
        long mod = 1e9 + 7;
        //continue looping until both pointers have reached the end of their respective arrays
        while(pointer1 < nums1.size() || pointer2 < nums2.size()){
            //if at the end of array 2 and not 1, or current value in array 1 is less than current value in array 2
            if(pointer1 < nums1.size() && (pointer2 == nums2.size() || nums1[pointer1] < nums2[pointer2])){
                //increment first path
                path1 += nums1[pointer1];
                pointer1++;
            }
            //same as above but for opposite array
            else if(pointer2 < nums2.size() && (pointer1 == nums1.size() || nums1[pointer1] > nums2[pointer2])){
                path2 += nums2[pointer2];
                pointer2++;   
            }
            //if a common element is found, determine which path up to that point has had a larger sum
            else{
                //set both paths equal to the largest path and add the common element
                path1 = path2 = max(path1, path2) + nums1[pointer1];
                pointer1++;
                pointer2++;
            }
        }
        return (max(path1, path2) % mod);
    }
};