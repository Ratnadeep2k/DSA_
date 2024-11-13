#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'getDistance' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING word as parameter.
 */

int getDistance(string word) {
       
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string word;
    getline(cin, word);

    int result = getDistance(word);

    fout << result << "\n";

    fout.close();

    return 0;
}
