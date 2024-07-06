class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        //std::accumulate is equivilant to summing all values in the array (5 + 1 + 5)
        k %= accumulate(begin(chalk), end(chalk), 0l);
        for (int i = 0; i < chalk.size(); ++i)
            if ((k -= chalk[i]) < 0)
                return i;
        return 0;
        //my original solution which took too long to compute large k values
//         int index = 0;
//         while(k){
//             //if there is insufficient chalk for the current student break the loop
//             if(chalk[index] > k)
//                 break;
//             //decrement k by the amount of chalk the current student will use
//             k -= chalk[index];
            
//             //if there are more students then increment the index
//             if(index < chalk.size() -1)
//                 index++;
//             //if there are no more students reset the index
//             else
//                 index = 0;
//         }
//         return index;
    }
};