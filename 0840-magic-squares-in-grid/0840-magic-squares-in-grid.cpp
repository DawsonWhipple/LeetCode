#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int magicSquares = 0;
        
        if(grid.size() < 3 || grid[0].size() < 3) //grid is too small for a magic square
            return 0;

        for (int i = 0; i < grid.size() - 2; i++) {
            for (int j = 0; j < grid[0].size() - 2; j++) {
                if (isMagic(grid, i, j)) {
                    magicSquares++;
                }
            }
        }
        return magicSquares;
    }

private:
    bool isMagic(vector<vector<int>>& grid, int x, int y) {
        vector<int> count(16, 0); // To count numbers and check uniqueness
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = grid[x + i][y + j];
                if (num < 1 || num > 9 || count[num]) {
                    return false;
                }
                count[num] = 1;
            }
        }
        
        int sum = grid[x][y] + grid[x][y+1] + grid[x][y+2];
        
        for (int i = 0; i < 3; i++) {
            if ((grid[x + i][y] + grid[x + i][y + 1] + grid[x + i][y + 2] != sum) ||
                (grid[x][y + i] + grid[x + 1][y + i] + grid[x + 2][y + i] != sum)) {
                return false;
            }
        }
        
        if ((grid[x][y] + grid[x + 1][y + 1] + grid[x + 2][y + 2] != sum) ||
            (grid[x][y + 2] + grid[x + 1][y + 1] + grid[x + 2][y] != sum)) {
            return false;
        }
        
        return true;
    }
};
