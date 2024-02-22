class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int townJudge = -1;
        //if person at given index trusts anyone, bool is set to true
        bool *pTrustSomeone = NULL;
        //dynamically creates an array based on size n, defaults to all false
        pTrustSomeone = new bool[n];
        fill(pTrustSomeone, pTrustSomeone + n, false);
        
        //counts how many people trust person at given index
        int *pIsTrusted = NULL;
        //dynamically creates an array based on size n, defaults to all 0
        pIsTrusted = new int[n];
        fill(pIsTrusted, pIsTrusted + n, 0);
        
        //loops through entire array trust
        //finds if a given person has a trust of anyone and sets their index to true if so
        //counts the amount of people that trust the person at given index
        for (std::vector<int> pair : trust){
            pTrustSomeone[pair[0]-1] = true;
            pIsTrusted[pair[1]-1]++;
        }
        //checks all people to see if any qualify as town judge
        for (int i = 0; i < n; i++){
            //town judge must trust no one and have all peoples trust
            if(!pTrustSomeone[i] && pIsTrusted[i] == n-1){
                townJudge = i+1;
            }
        }
        //delete the dynamically allocated arrays
        delete[] pTrustSomeone;
        delete[] pIsTrusted;
        
        return townJudge;
    }
};