class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //store the lowest possible buying price
        int buy = prices[0];
        //store max found profit
        int profit = 0;
        //loop through entire array
        for(int i = 0; i < prices.size(); i++){
            //if current index buy price is less then lowest previous, save current index price
            if(prices[i] < buy){
                buy = prices[i];
            }
            //if the difference in price between current and lowest found prices is greater than current profit, save to current profit
            if(prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
        }
        //return max found profit
        return profit;
    }
};