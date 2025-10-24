#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    ll n;
    cin >> n;

    vector<ll> set1, set2;
    ll sum = n * (n + 1) / 2;

    if (sum % 2 == 0)
    {
        cout << "YES\n";
        ll mid = sum / 2;
        for (ll i = n; i >= 1; i--)
        {
            if (i <= mid)
            {
                set1.push_back(i);
                mid -= i;
            }
            else
                set2.push_back(i);
        }

        cout << set1.size() << endl;
        for (auto val : set1)
            cout << val << ' ';
        cout << endl;

        cout << set2.size() << endl;
        for (auto val : set2)
            cout << val << ' ';
        cout << endl;
    }

    else
        cout << "NO\n";
    return 0;
}