Was not able to complete this one on this attempt within a reasonable amount of time. The following is as far as I got on my attempt. Succesfully sorted everything except for chars that were not found in order array.


#include <string>
class Solution {
public:
    string customSortString(string order, string s) {
        //counter for the number of repeat letter there are in string s
        int repeat_letter_count = 0;  
        string customString = s;
        int letter_count = 0;
        bool letter_match = false;
        int letter_match_counter = 0;
        
//         for (int i = 0; i <= s.length() ; i++){
//             letter_match = false;
//             for(int j = 0; j < order.length(); j++){
//                 if(s[i] == order[j]){
                    
//                     char temp;
//                     //customString.append(s[index_s]);
//                     //temp = customString[letter_count];
//                     customString[letter_count] = s[i];
//                     s[i] = temp;
//                     letter_count++;
//                     letter_match = true;
//                     break;
//                 }
//             }
//             if(!letter_match){
//                 customString[s.length() - letter_match_counter - 1];
//                 letter_match_counter++;
//             }
//         }
        
        //iterate through the given order string
        for(int index_order = 0; index_order < order.length(); index_order++){
            //iterate through the given s string, once per order iteration
            for(int index_s = index_order; index_s <= s.length(); index_s++){
                //cout << s << '\n';
                //if the current index value of order = the current index value of s
                if(order[index_order] == s[index_s]){
                    cout << "MATCH" << order[index_order] << ":" << s[index_s] << '\n';

                    //swap s value at index_s to index_order + repeat_letter_count
                    //adjust the index according to how many repeated letters there have been in string s
                    char temp;
                    //customString.append(s[index_s]);
                    temp = customString[letter_count];
                    customString[letter_count] = s[index_s];
                    s[index_s] = temp;
                    //checks if the current sorted letter is equal to the previous sorted letter
                    // if(letter_count > 0 && customString[letter_count - 1] == s[index_s]){
                    //     //incriments repeat count so the calculation above can
                    //     letter_count++;
                    //     cout << letter_count;
                    // }
                    // temp = s[index_order + repeat_letter_count];
                    // s[index_order + repeat_letter_count] = s[index_s];
                    // s[index_s] = temp;
                    letter_count++;
                }
            }
        }
        return customString;
    }
};
