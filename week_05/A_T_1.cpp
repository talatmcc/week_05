#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cs = 0;
    while(1)
    {
        cs++;
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << cs << ":" << endl;
        
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0;
            int r = n - 1;
            int mid;
            int ans  = -1;
            while (l <= r)
            {
                mid = l + (r-l) / 2;
                if (x == v[mid])
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if (x < v[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ans != -1 )
            {
                cout << x << " found at " << ans+1 << endl;
            }
            else{
                cout<<x<<" not found"<<endl;
            }
        }
    }
    return 0;
}