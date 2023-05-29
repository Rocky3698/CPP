#include <bits/stdc++.h>
using namespace std;
int main()
{
    string start, end;
    char hor_char = 'L', ver_char = 'D', bal;
    cin >> start >> end;
    int hor_diff = start[0] - end[0], ver_diff = start[1] - end[1];
    if (hor_diff < 0)
        hor_char = 'R';
    if (ver_diff < 0)
        ver_char = 'U';
    int min_diagonal = min(abs(hor_diff), abs(ver_diff));
    int max_diff = max(abs(hor_diff), abs(ver_diff));
    cout << max_diff << endl;
    for (int i = 0; i < min_diagonal; i++)
    {
        cout << hor_char << ver_char << endl;
    }
    if (abs(hor_diff) > abs(ver_diff))
        bal = hor_char;
    else
        bal = ver_char;
    max_diff -= min_diagonal;
    while (max_diff--)
    {
        cout << bal << endl;
    }
    return 0;
}