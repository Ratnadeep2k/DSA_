class Solution {
public:
    string stringHash(string s, int k) {
    int n = s.length();
    int num_substrings = n / k;
    string result = "";

    for (int i = 0; i < num_substrings; ++i) {
        int sum = 0;

        // Calculate the sum of hash values for the current substring
        for (int j = 0; j < k; ++j) {
            sum += (s[i * k + j] - 'a');
        }

        // Find the remainder when sum is divided by 26
        int hashedChar = sum % 26;

        // Convert the remainder to a character and append to result
        result += (char)('a' + hashedChar);
    }

    return result;
    }
};