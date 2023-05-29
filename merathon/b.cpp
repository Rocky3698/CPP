#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day, hour, max, min;
    cin >> day >> hour;
    vector<pair<int, int>> v;
    for (int i = 0; i < day; i++)
    {
        cin >> min >> max;
        v.emplace_back(make_pair(min, max));
    }
    min = 0;
    max = 0;
    for (int i = 0; i < day; i++)
    {
        max += v[i].second;
        min += v[i].first;
    }
    if (max < hour)
        cout << "NO" << endl;

    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < day; i++)
        {
            if (v[i].second <= hour && hour)
            {
                min -= v[i].first;
                if ((hour - v[i].second) >= min)
                {
                    cout << v[i].second << " ";
                    hour -= v[i].second;
                    min -= v[i+1].first;
                }
            }
            else
            {
                cout << hour << " ";
                hour = 0;
            }
        }
    }
    return 0;
}