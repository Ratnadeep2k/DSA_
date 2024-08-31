class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
         // Convert the numbers to strings and pad with leading zeros
    string s1 = to_string(num1);
    string s2 = to_string(num2);
    string s3 = to_string(num3);
    
    // Ensure all strings are 4 characters long by padding with '0'
    s1 = string(4 - s1.length(), '0') + s1;
    s2 = string(4 - s2.length(), '0') + s2;
    s3 = string(4 - s3.length(), '0') + s3;
    
    // Find the minimum digit at each position
    string key = "";
    for (int i = 0; i < 4; ++i) {
        char min_digit = min({s1[i], s2[i], s3[i]});
        key += min_digit;
    }
    
    // Remove leading zeros
    int result = stoi(key);  // stoi will automatically remove leading zeros and convert to int
    
    return result;
    }
};