class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                result[i + j] += mul;

                result[i + j + 1] += result[i + j] / 10;
                result[i + j] %= 10;
            }
        }
        int k = n1 + n2 - 1;
        while (k >= 0 && result[k] == 0) {
            k--;
        }
        string product;
        while (k >= 0) {
            product += (result[k--] + '0');
        }
        return product;
    }
};