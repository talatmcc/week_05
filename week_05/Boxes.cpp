#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        int ans = v[0];
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (ans >= v[i])
            {
                ans ^= v[i];
            }
            else
            {
                ans = v[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
