// when function calls itself is called recursion

#include <iostream>
#include <vector>

using namespace std;

vector<int> printNos(int x) {
    vector<int> ans;
    if (x > 0) {
        ans = printNos(x - 1);
        ans.push_back(x);
    }
    return ans;
}

int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    if (x <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; // Return an error code
    }

    vector<int> sequence = printNos(x);

    cout << "Sequence of integers from 1 to " << x << ":" << endl;
    for (int num : sequence) {
        cout << num << " ";
    }
    cout << endl;

    return 0; // Return success code
}