class Solution {
public:
    //puts all characters to lowercase
    //removes all characters that aren't aplhanumeric
    string cleanString(const string& str){
        string result = ""; 

        for (char ch : str) { 
            //only add alphanumeric to the clean string
            ch = tolower(ch);
            //ASCII values 97-122 = lowercase letters, 48-57 = numbers 0-9
            if((ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57))
                // Convert each character to lowercase using tolower 
                result += ch; 
        }
        return result; 
    }
    
    bool isPalindrome(string s) {
        stack<char> myStack;
        //set all chars to lower and remove non-alphanumeric
        s = cleanString(s);
        //store all chars in the string into the stack
        for(int i = 0; i < s.size(); i++){
            myStack.push(s[i]);
        }
        //compare the chars of the string with the now reversed chars of the stack
        for(int i = 0; i < s.size(); i++){
            //only pop from the stack if the compared values are identical
            if(s[i] == myStack.top())
                myStack.pop();
        }
        //an empty stack means that the string is a palindrome
        if(myStack.empty())
            return true;
        else
            return false;
    }
};