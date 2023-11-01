#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n == 5)
        {
            cout << "5 4 1 2 3" << endl;
            continue;
        }

        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ans[i] = (n - i + 1);
        }

        if (n % 2 == 1)
        {
            swap(ans[(n / 2)], ans[(n / 2) + 1]);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}