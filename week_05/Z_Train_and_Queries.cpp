#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i); 
        }
        while (k--)
        {
            int ai, bi;
            cin >> ai >> bi;
            if (mp[ai].empty() || mp[bi].empty())
            {
                cout << "NO" << endl;
            }
            else if (ai == bi)
            {
                cout << "YES" << endl;
            }
            else if (mp[ai].front() < mp[bi].back()) 
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}