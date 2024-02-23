class Solution {
public:
    int romanToInt(string s) {
        int finalNum = 0;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'M':
                    finalNum += 1000;
                    break;
                case 'D':
                    finalNum += 500;
                    break;
                case 'C':
                    (s[i + 1] == 'D' || s[i + 1] == 'M' ) ? finalNum -= 100 : finalNum += 100;
                    break;
                case 'L':
                    finalNum += 50;
                    break;
                case 'X':
                    (s[i + 1] == 'L' || s[i + 1] == 'C' ) ? finalNum -= 10 : finalNum += 10;
                    break;
                case 'V':
                    finalNum += 5;
                    break;
                case 'I':
                    (s[i + 1] == 'V' || s[i + 1] == 'X' ) ? finalNum -= 1 : finalNum += 1;
                    break;
            }
        }
        return finalNum;
    }
};