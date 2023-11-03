#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h, m;
        cin >> n >> h >> m;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int hi, mi;
            cin >> hi >> mi;

            int count = 0; // count of minutes that he slept
            int _h = h;
            int _m = m;

            while (_h != hi || _m != mi) {
                count++;
                _m++;
                if (_m == 60) {
                    _m = 0;
                    _h++;
                }
                if (_h == 24) {
                    _h = 0;
                }
            }
            ans = min(ans, count);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}
