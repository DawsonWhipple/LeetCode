class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highestWealth = 0;
        int currentWealth = 0;
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                currentWealth += accounts[i][j];
            }
            if(currentWealth > highestWealth){
                highestWealth = currentWealth;
            }
            currentWealth = 0;
        }
        return highestWealth;
    }
};