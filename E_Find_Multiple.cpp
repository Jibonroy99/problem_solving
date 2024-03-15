#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool t = true;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            t = i;
            cout << i;
            break;
        }
        t = false;
    }
    if (!t)
    {
        cout << "-1";
    }

    return 0;
}