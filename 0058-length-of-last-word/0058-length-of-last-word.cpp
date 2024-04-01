class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastWord = "";
        bool spaceFound = false;
        for(int i = 0; i < s.length(); i++){
            //if a space is found reset the lastWord if there are more words after the space
            if(spaceFound && s[i] != ' ')
                lastWord = "";
            //if a space is found set the bool to true to mark it
            if(s[i] == ' ')
                spaceFound = true;
            else{
                spaceFound = false;
                //add each character of the string to the lastword
                lastWord += (s[i]);
            }
                
        }
        return lastWord.length();
    }
};