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
        int N = 1e6 + 6;
        vector<bool> visited(N);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (visited[v[i]])
            {
                break;
            }
            if (!visited[v[i]])
            {
                visited[v[i]] = true;
                ans++;
            }
        }
        cout << n - ans << endl;
    }
    return 0;
}