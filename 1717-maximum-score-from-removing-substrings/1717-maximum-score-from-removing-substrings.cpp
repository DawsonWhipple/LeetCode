class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int maxPoints = 0;
        string highPriority = "ab";
        string lowPriority = "ba";
        //determine whether x or y is worth more, adjust accordinlgy
        if(x < y){
            swap(x, y);
            swap(highPriority, lowPriority);
        }
        //process the string looking for the highPriority substring and then the low priority substring
        maxPoints += process(s, highPriority[0], highPriority[1], x);
        maxPoints += process(s, lowPriority[0], lowPriority[1], y);
        
        return maxPoints;
    }
private:
    int process(string& s, char first, char second, int points){
        stack<char> charStack;
        int score = 0;
        for(char c : s){
            //if top of stack plus current char is equal to the substring we are looking for, add points and pop
            if(!charStack.empty() && charStack.top() == first && c == second){
                charStack.pop();
                score += points;
            }
            //push non-substring chars to the stack
            else
                charStack.push(c);
        }
        // Use a temporary buffer to build the remaining string
        string temp;
        while (!charStack.empty()) {
            temp += charStack.top();
            charStack.pop();
        }

        // Reverse the buffer since stack unwinds it in reverse order
        reverse(temp.begin(), temp.end());
        s = temp;
        return score;
    }
};