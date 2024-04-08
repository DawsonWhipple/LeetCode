class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        bool wasUpdated = true;
        //loop until the stacks don't update on a single iteration
        while(wasUpdated){
            wasUpdated = false;
            for(int i = 0; i < sandwiches.size(); i++){
                //if top elements of each stack are identical, pop from both stacks
                if(students.front() == sandwiches.front()){
                    students.erase(students.begin());
                    sandwiches.erase(sandwiches.begin());
                    //continues to loop until the stacks do not get updated in a single iteration
                    //this means that no students took the top sandwich
                    wasUpdated = true;
                }
                else{
                    //move student from front of queue to back of queue
                    students.emplace_back(students.front());
                    students.erase(students.begin());
                }
                
            }   
        }
        return students.size();
    }
};