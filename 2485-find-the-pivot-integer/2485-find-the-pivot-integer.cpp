class Solution {
public:
    int pivotInteger(int n) {
        bool found = false;
        int high_count = 0;
        int low_sum = 0;
        int high_sum = n;
        
        //loop through possible values of x starting from 0
        for(int x = 1; x <= n; x++){
            //add current x to the total sum
            low_sum += x;
            //if the low_sum has surpassed the high_sum, then add another digit to high_sum
            if(high_sum < low_sum){
                n--;
                high_sum += n;
            }
            //if the sums are equal
            if(low_sum == high_sum){
                //and if the values are equal
                if(x == n){
                    return x;
                }
            }
        }
        return -1;
    }
};
