class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int secondsTaken = 0;
        while(true){
            //person at front of queue has bought a ticket
            tickets.front()--;
            //another second has elapsed
            secondsTaken++;
            //if the person still wants to buy more tickets, move them to the back of the queue
            if(tickets.front() > 0)
                tickets.emplace_back(tickets.front());
            //if person k is at the beginning of the queue
            if(k == 0){
                //and if they have no more tickets they want to buy, then break the loop
                if(tickets.front() == 0)
                    break;
                else
                    //otherwise move the tracker for person k to the end of the line
                    k = tickets.size()-1;
            }
            //person k moves up in the queue
            k--;
            //erase the front member of the queue
            tickets.erase(tickets.begin());
        }
        return secondsTaken;
    }
};