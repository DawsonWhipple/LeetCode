class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalBottles = numBottles;
        while(numBottles / numExchange){
            totalBottles++;
            numBottles -= numExchange - 1;
            numExchange++;
        }
        return totalBottles;
    }
};