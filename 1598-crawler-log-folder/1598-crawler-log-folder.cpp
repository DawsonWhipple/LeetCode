class Solution {
public:
    int minOperations(vector<string>& logs) {
        //create a stack to track file steps
        stack <string> logStack;
        for(int i = 0; i < logs.size(); i++){
            //if the current command is return to parent and there is a parent to return to, pop the stack
            if(logs[i] == "../" && !logStack.empty())
                logStack.pop();
            //if already in main directory then continue
            else if(logs[i] == "../")
                continue;
            //if the command is to stay in current directory, move onto next log
            else if(logs[i] == "./")
                continue;
            //for all other commands, push them to the stack as they represent children folders
            else
                logStack.push(logs[i]);
            if(!logStack.empty())
                cout << logStack.top() << '\n';
        }
        int operationsCount = 0;
        //pop the stack until empty, the amount of items remaining represents the amount of operations needed to return to main directory
        while(!logStack.empty()){
            logStack.pop();
            operationsCount++;
        }
        return operationsCount;
    }
};