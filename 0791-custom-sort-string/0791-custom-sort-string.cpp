#include <string>
class Solution {
public:
    string customSortString(string order, string s) {
        string result = "";
        //create a hash map to store the occurences of all characters in s
        unordered_map<int,int> s_map;
        //store all values of s within the hash map
        for(auto &curr_char : s){
            s_map[curr_char]++;
        }
        //iterate through the order array and see if any chars are equal to the current char in the hash map
        for(auto &curr_order : order){
            if(s_map.find(curr_order) != s_map.end())
                //add the order char to result and erase it from the hash map
                result.append(s_map[curr_order], curr_order);
                s_map.erase(curr_order);
        }
        //append any remaining chars that weren't found in order to the hash map
        for(auto &it : s_map){
            result.append(it.second,it.first);
        }
        return result;
    }
};