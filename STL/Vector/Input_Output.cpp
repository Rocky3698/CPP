#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaretion of vector
    vector<int> v;
    vector<pair<int, int>> v2; // pair type vector
                               // input in pair vector
    v2.emplace_back(1, 2);
    v2.emplace_back(3, 4);

    // put element in vector
    v.emplace_back(0); // its faster then push_back();
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    // cout elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    } // 0 1 2 3

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i].first << " " << v2[i].second << endl;
    } /*1 2
        3 4*/

    // cout using iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    } // 0 1 2 3

    // cout using auto iterator
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    } // 0 1 2 3

    for (auto element : v)
    {
        cout << element << endl;
    } // 0 1 2 3

    //****** Some important function of vectors ******

    // copy one vector to another
    vector<int> v1(v); // vis copied to v1;

    // swap vectors
    swap(v1, v);
    // Or
    v.swap(v1);

    // Sort vector
    sort(v.begin(), v.end());

    // iterator position
    it = v.begin(); // -->{1,2,3,4,5} point at 1; it++ point at 2;
    // it = v.rbegin();// -->{1,2,3,4,5} point at 5; it++ point at 4;
    it = v.end(); // -->{1,2,3,4,5} point at after 5; it-- point at 5;
    // it = v.rend();// -->{1,2,3,4,5} point at before 1; it-- point at 1;

    // erase element
    v.erase(v.begin() + 1);            //-->{1,2,3,4,5}==>{1,3,4,5}
    v.erase(v.begin(), v.begin() + 2); //-->{1,2,3,4,5}==>{5}
    // insert element
    v.insert(v.begin(), 6);
    // delet last element
    v.pop_back();
    return 0;
}