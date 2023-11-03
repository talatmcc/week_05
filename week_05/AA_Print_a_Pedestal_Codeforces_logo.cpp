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
        int first, second, third;
        if (n % 3 == 0)
        {
            first = (n / 3) + 1;
            second = first - 1;
            third = first - 2;
        }
        else if (n % 3 == 1)
        {
            first = (n / 3) + 2;
            second = first - 2;
            third = first - 3;
        }
        else if (n % 3 == 2)
        {
            first = (n / 3) + 2;
            second = first - 1;
            third = first - 3;
        }

        cout << second <<" "<< first<<" " << third << endl;
    }
    return 0;
}