void subseq(string s, vector<string> &ans, int i, string str) {
    if (i == s.length()) {
        ans.push_back(str);
        return;
    }
    subseq(s, ans, i + 1, str + s[i]);
    subseq(s, ans, i + 1, str);
}

vector<string> generateSubsequences(string s)
{
    // Write your code here.
     string str = "";
    vector<string> ans;
    subseq(s,ans,0,str);
    return ans;
}