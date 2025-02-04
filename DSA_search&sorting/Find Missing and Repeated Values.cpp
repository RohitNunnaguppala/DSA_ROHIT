#include <bits/stdc++.h>
using namespace std;

vector<int> findRepeatingAndMissing(vector<vector<int>>& grid) {
    int sz = mat.size();                        
    unordered_set<int> seen;                      
    int tot = 0;                                  
    int expSum = (sz * sz * (sz * sz + 1)) / 2;     
    int dup = -1;                                 
    
    for (int i = 0; i < sz; ++i) {
        for (int j = 0; j < sz; ++j) {
            int val = mat[i][j];
            tot += val;
            if (seen.count(val)) {                
                dup = val;
            }
            seen.insert(val);
        }
    }
    
    int mis = expSum - tot + dup;
    return {dup, mis};
}

int main() {
    vector<vector<int>> grid1 = {{1, 3}, {2, 2}};
    vector<vector<int>> grid2 = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    
    vector<int> result1 = findRepeatingAndMissing(grid1);
    vector<int> result2 = findRepeatingAndMissing(grid2);
    
    cout << "Result 1: [" << result1[0] << ", " << result1[1] << "]" << endl;
    cout << "Result 2: [" << result2[0] << ", " << result2[1] << "]" << endl;
    
    return 0;
}
