class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       //if the strings are equal to each other no matter which way they are appended, there must be a gcd
        if (str1 + str2 == str2 + str1){
            //find the gcd using the gcd command
            return str1.substr(0,gcd(size(str1), size(str2)));
        }
        //else there is a difference between the strings, therefore no gcd
        else{
            return "";
        }
    }
};