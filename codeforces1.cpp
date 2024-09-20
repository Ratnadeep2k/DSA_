// //Today, a club fair was held at "NSPhM". In order to advertise his pastry club, Zhan decided to demonstrate the power of his blender.

// To demonstrate the power of his blender, Zhan has 𝑛
//  fruits.

// The blender can mix up to 𝑥
//  fruits per second.

// In each second, Zhan can put up to 𝑦
//  fruits into the blender. After that, the blender will blend min(𝑥,𝑐)
//  fruits, where 𝑐
//  is the number of fruits inside the blender. After blending, blended fruits are removed from the blender.

// Help Zhan determine the minimum amount of time required for Zhan to blend all fruits.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases 𝑡
//  (1≤𝑡≤1000
// ). The description of the test cases follows.

// The first line of each test case contains one integer 𝑛
//  (0≤𝑛≤109
// ) — the number of fruits Zhan has.

// The second line of each test case contains two integers 𝑥
//  and 𝑦
//  (1≤𝑥,𝑦≤109
// ) — the number of fruits Zhan can put into the blender per second and the number of fruits the blender can blend per second.

// Output
// For each testcase, output a single integer — the minimum number of seconds to blend all fruits.
// How can I make code in cpp 

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         cout << (n + y - 1) / y << endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         cout << (n + y - 1) / y << endl;
//     }