#include <bits/stdc++.h>
using namespace std;

int countOne( int n){
    int c = 0;
    while(n != 0){
        n = n & (n-1);
        c++;
    }
    return c;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> v[i];
    }

    int count = 0; // the number of count of Fedor
    int result = 0;
    for (int i = 0; i < m; i++)
    {
        result = v[i] ^ v[m];
        if (countOne(result) <= k)
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}