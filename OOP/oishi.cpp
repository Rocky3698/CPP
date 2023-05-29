#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if((100-a)>(200-(2*b)))
            cout<<"SECOND"<<endl;
        else if ((100-a)<(200-(2*b)))
        {
            cout<<"FIRST"<<endl;
        }
        else cout<<"BOTH"<<endl;
        
            
    }
    

    return 0;
}