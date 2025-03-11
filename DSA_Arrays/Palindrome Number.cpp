class Solution {
    public:
        bool isPalindrome(int X) {
            int dummy = X;
            int Y = 0;
    
            while (X > 0) {
                int digit = X % 10;
    
                if (Y > INT_MAX / 10 || (Y == INT_MAX / 10 && digit > 7)) {
                    return false;
                }
    
                Y = Y * 10 + digit;
                X = X / 10;
            }
    
            return dummy == Y;
        }
    };