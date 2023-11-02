#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<long long>());
        long long ans = v[0];
        long long count = 1;
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
