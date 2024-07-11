class Solution {
public:
    string reverseParentheses(string s) {
        string output = "";
        //stores index locations of open brackets
        stack <int> pointerStack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                pointerStack.push(i); //push index location of each open bracket
            }
            else if(s[i] ==')'){                
                int start = pointerStack.top();
                pointerStack.pop();
                std::reverse(s.begin() + start + 1, s.begin() + i); //reverse substring between brackets
                //erase open and close brackets
                s.erase(s.begin() + i);
                s.erase(s.begin() + start);
                i -= 2; // Adjust index due to erasure
            }
        }
        return s;
    }
};