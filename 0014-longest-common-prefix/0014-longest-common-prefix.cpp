class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //string stores the longest currently found common prefix, starts equal to first string
        std::string commonPrefix = strs[0];
        //loop through all string in array
        for (auto string : strs){
            //compares each char in current string to each char in commonPrefix
            for (int i = 0; i < string.length(); i++){
                //once a char is found to not match, the remaining chars in commonPrefix are erased
                if(commonPrefix[i] != string[i]){
                    commonPrefix.erase(i);
                    break;
                }
            }   
            //checks if the common prefix is longer than the current string and the current string would be a commonPrefix
            if(string.length() < commonPrefix.length()){
                commonPrefix = string;
            }
        }
        return commonPrefix;
    }
};