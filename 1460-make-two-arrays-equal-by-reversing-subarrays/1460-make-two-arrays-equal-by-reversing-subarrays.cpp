class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(int i = 0; i < target.size(); i++){
            auto found = find(arr.begin(), arr.end(), target[i]);
            if(found == arr.end())
                return false;
            //if there are duplicates we want to erase one each time its found
            else
                *found = -1;
        }
        return true;
    }
};