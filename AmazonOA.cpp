//The developers at Amazon employ several algorithms for encrypting passwords. In one algorithm, the developers aim to encrypt palindromic passwords. Palindromic passwords are ones that read the same forward and backward. The algorithm rearranges the characters to have the following characteristics: It is a rearrangement of the original palindromic password. It is also a palindrome. Among all such palindromic rearrangements, it is the lexicographically smallest. Given the original palindromic password that consists of lowercase English characters only, find the encrypted password. A string sis considered to be lexicographically smaller than the string t of the same length if the first character in s that differs from that in tis smaller. For example, "abcd" is lexicographically smaller than "abdc" but larger than "abad" Note that the encrypted password might be the same as the original password if it is already lexicographically smallest. Example The original password is password = "babab". This can be rearranged to form abbba, which is both a rearrangement of the original password and the lexicographically smallest palindrome. It satisfies all the requirements so return the string abbba.
string findEncryptedPassword(string password){
    // Write your code here
    int n = password.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        freq[password[i]-'a']++;
    }
    string res = "";
    char mid = ' ';
    for(int i=0;i<26;i++){
        if(freq[i]%2==1){
            mid = i+'a';
            freq[i]--;
            break;
        }
    }
    for(int i=0;i<26;i++){
        while(freq[i]>0){
            res += (char)(i+'a');
            freq[i] -= 2;
        }
    }
    string ans = res;
    reverse(res.begin(),res.end());
    if(mid!=' '){
        ans += mid;
    }
    ans += res;
    return ans;
}