class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> myStack;
        for(int i = 0; i < s.length(); i++){
            //add the index value the parenthesis was found at to the stack
            if(s[i] == '(')
                myStack.push(i);
            else if(s[i] == ')'){
                //pop the stack, in this case it will be the index of the last '('
                if(!myStack.empty())
                    myStack.pop();
                //if the stack is empty, then the current ')' has no prior '('
                else
                    //decrement i because when erasing a char all remaining will be shifted left by one
                    //if i isn't decremented then a char will be skipped
                    s.erase(s.begin() + i--);
            }
        }
        //if the stack is not empty after searching the string
        //then there was atleast 1 '(' without a following ')'
        while(!myStack.empty()){
            s.erase(myStack.top(), 1);
            myStack.pop();
        }
        return s;
    }
};