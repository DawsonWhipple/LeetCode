class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool found = false;
        //loop through ransomNote
        for(int i = 0; i < ransomNote.length(); i++){
            //loop through magazine
            for(int j = 0; j < magazine.length(); j++){
                //if a letter in magazine is useable, remove it from the list and move onto next ransom letter
                if(magazine[j] == ransomNote[i]){
                    magazine.erase(magazine.begin() + j);
                    found = true;
                    break;
                }
            }
            //if found was never flagged, then the current ransom letter does not exist in magazine
            if(!found)
                return false;
            //reset found
            found = false;
        }
        return true;
    }
};