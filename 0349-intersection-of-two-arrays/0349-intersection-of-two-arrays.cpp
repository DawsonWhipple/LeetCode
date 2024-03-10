class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {        
        //create sets for each array
        //allows for using the insert command to only insert unique elements
        set<int> nums1Set(nums1.begin(), nums1.end());;
        set<int> nums2Set(nums2.begin(), nums2.end());;
        //the set of intersected elements
        set<int> intersectionSet;
        
        //check which values from one of the arrays are contained in both sets
        //only need to do one check since we are looking for the intersection
         for(int i = 0; i < nums1.size(); i++){
            if(nums1Set.count(nums1[i]) && nums2Set.count(nums1[i])){
                intersectionSet.insert(nums1[i]);
            }
        }
        //convert the set back to the proper return type of a vector
        vector<int> intersectionVector(intersectionSet.begin(), intersectionSet.end());
        return intersectionVector;
    }
};