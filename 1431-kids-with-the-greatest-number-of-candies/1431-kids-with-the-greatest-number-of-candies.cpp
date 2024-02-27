class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //create return bool vector
        vector<bool> result;
        //return vector is of the same size as given vector, all values default to true
        result.assign(candies.size(), true);

        //loop through all entries in given array
        for(int i = 0; i < candies.size(); i++){
            //'give' all extra candies to current kid
            candies[i] += extraCandies;
            //compare if current kid has the most candies
            for(int j = 0; j < candies.size(); j++){
                
                //if any kid has more candies than current, assign false
                if(candies[i] < candies[j]){
                    result[i] = false;
                    break;
                }
            }
            //remove extra candies from current kid
            candies[i] -= extraCandies;
        }
        return result;
    }
};