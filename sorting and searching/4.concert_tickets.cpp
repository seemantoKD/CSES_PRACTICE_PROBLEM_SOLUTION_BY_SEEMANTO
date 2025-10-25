#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll ticket, customer;
    cin >> ticket >> customer;
    multiset<ll> s;
    while (ticket--)
    {
        ll h;
        cin >> h;
        s.insert(h);
    }

    while (customer--)
    {
        ll t;
        cin >> t;

        auto it = s.upper_bound(t);
        if (it != s.begin())
        {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
        else
            cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
        seemanto();
    return 0;
}