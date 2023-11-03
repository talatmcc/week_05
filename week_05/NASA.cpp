#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string str = to_string(n);
    string copy = str;
    reverse(copy.begin(), copy.end());
    return str == copy;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        vector<int> l;
        for (int i = 0; i < (1 << 15); i++)
        {
            if (isPalindrome(i))
            {
                l.push_back(i);
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < l.size(); j++)
            {
                int b = v[i] ^ l[j];
                if (mp[b] >= 1)
                {
                    // cout << v[i] << " " << l[j] << " ======" << b << endl;
                    ans += mp[b];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}