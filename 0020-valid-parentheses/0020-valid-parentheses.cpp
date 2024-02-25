class Solution {
public:
    bool isValid(string s) {
        //create a stack to store each char of the string
        std::stack<char> myStack;
        //holds the current char being examined
        char temp;
        //holds the top char in the stack
        char top;
        
        //loops through the entire string
        for(int i = 0; i < s.length(); i++){
            temp = s[i];
            //if the stack is empty, pushes current char
            if(myStack.empty()){
                myStack.push(temp);
            }
            else{
                //stores the current top char in the stack
                top = myStack.top();
                //compares the possible combinations of parentheses, if any are true pops from the stack
                //this indicates that they are appearing in the correct order
                if((temp == ')' && top == '(') ||
                   (temp == '}' && top == '{') ||
                   (temp == ']' && top == '[')){
                    myStack.pop();
                }
                //pushes the char if it doesn't meet the pop condition and moves on
                else{
                    myStack.push(temp);
                }
            }
        }
        //if the stack is empty it means there was a correct match for each open parenthese in the correct order
        if(myStack.empty()){
            return true;
        }
        //any chars still in the stack indicates that the string failed
        else{
            return false;
        }
    }
};