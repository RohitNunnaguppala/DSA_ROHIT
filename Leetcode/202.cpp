class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1) {
            int current = n;
            int sum = 0;
            while (current != 0) {
                int digit = current % 10;
                sum += digit * digit;
                current /= 10;
            }
            if (seen.find(sum) != seen.end()) {
                return false; 
            }
            seen.insert(sum);
            n = sum;
        }

        return true; 
    }
};
