#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    int passed = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;

        if (x == 1 && y == 1)
        {
            passed = 1;
            break;
        }
    }

    if (passed)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}


