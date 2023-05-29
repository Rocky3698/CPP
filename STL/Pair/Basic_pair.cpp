#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 3};                  // simple pair
    cout << p.first << " " << p.second << endl; // access pair
    // 1 3
    pair<int, pair<int, int>> p1 = {1, {2, 3}};                                    // pair of pair
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl; // acces pair of pair
    // 1 2 3
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {3, 6}}; // pair array
    cout << arr[1].first << " " << arr[2].second << endl;
    // 2 6

    // take pair as a input
    pair<int, int> p2;
    cin >> p2.first >> p2.second;
    cout << p2.first << " " << p2.second << endl;
    return 0;
}