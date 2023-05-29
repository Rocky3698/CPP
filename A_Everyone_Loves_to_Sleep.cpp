#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int Min = INT_MAX;
    int temp;
    int H, M, h, m, t, a;
    cin >> t;
    while (t--)
    {
        cin >> a >> H >> M;
        while (a--)
        {
            temp = 0;
            Min = INT_MAX;
            cin >> h >> m;
            if (h > H || (h == H && M < m))
            {
                temp = (((h - H) * 60) - M) + m;
                Min = min(Min, temp);
            }
            else if (H > h || (H == h && M > m))
            {
                temp = (((24 - H + h) * 60) - M) + m;
                Min = min(Min, temp);
            }

            else
            {
                Min = 0;
            }
        }
        h = Min / 60;
        m = Min % 60;
        cout << h << " " << m << endl;
    }

    return 0;
}