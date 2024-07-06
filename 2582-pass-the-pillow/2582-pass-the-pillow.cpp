class Solution {
public:
    int passThePillow(int n, int time) {
        stack<int> timeStack;
        bool push = true;
        int index = 1;
        
        //loop until end of time
        while (time){
            time--;
            //if the stack is currently empty then we need to push new index counts
            if (timeStack.empty())
                push = true;
            //if the stack is currently full then we need to pop back indexes
            if (timeStack.size() >= n-1)
                push = false;
            //push the current index after one increment of time has passed
            if (push){
                index++;
                timeStack.push(index);
            }
            //pop back to previous index after one increment of time
            else{
                index--;
                timeStack.pop();
            }
        }
        //the top of the stack is the found index
        if(!timeStack.empty())
            return timeStack.top();
        return 1;
    }
};