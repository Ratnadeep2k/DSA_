#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'findMaximumBalancedShipments' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY weight as parameter.
 */

int findMaximumBalancedShipments(vector<int> weight) {
    int n=weight.size();
    int ans=0;
    int prev=-1;
    bool f=0;
    for(int i=n-1;i>=0;i--)
    {
        if(prev==-1) { prev=weight[i]; continue;}
        if(weight[i]>prev) { f=1; ans++; prev=-1;}
        else if(f) prev=weight[i];
    }
    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string weight_count_temp;
    getline(cin, weight_count_temp);

    int weight_count = stoi(ltrim(rtrim(weight_count_temp)));

    vector<int> weight(weight_count);

    for (int i = 0; i < weight_count; i++) {
        string weight_item_temp;
        getline(cin, weight_item_temp);

        int weight_item = stoi(ltrim(rtrim(weight_item_temp)));

        weight[i] = weight_item;
    }

    int result = findMaximumBalancedShipments(weight);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
