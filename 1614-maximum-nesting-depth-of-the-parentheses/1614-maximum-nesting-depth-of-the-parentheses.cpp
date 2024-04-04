class Solution {
public:
    int maxDepth(string s) {
        //stores the current depth of VPS
        int depth = 0;
        //stores the largest found depth of VPS
        int maxDepth = 0;

        for(int i = 0; i < s.length(); i++){
            //increase depth if an open parenthesis is found
            if(s[i] == '(')
                depth++;
            //decrese depth if a closed parenthesis is found
            else if(s[i] == ')'){
                depth--;
            }
            //compare current depth to max found depth
            if(depth > maxDepth)
                maxDepth = depth;
        }
        return maxDepth;
    }
};