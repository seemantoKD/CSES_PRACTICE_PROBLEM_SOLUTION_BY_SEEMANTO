#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> aplicants(n), apartments(m);

    // input
    for (auto &x : aplicants)
        cin >> x;
    for (auto &x : apartments)
        cin >> x;

    // sort
    sort(apartments.begin(), apartments.end());
    sort(aplicants.begin(), aplicants.end());

    // fixed pointer
    ll l = 0, r = 0;

    // ans
    ll ans = 0;

    while (l < n and r < m)
    {
        // case 1: apartment size khub chuto so nite parbe na keu
        if (apartments[r] < aplicants[l] - k)
            r++;

        // case 2: apartments er size khub boro keu nite parbe na
        else if (apartments[r] > aplicants[l] + k)
            l++;

        // case 3: range er vitore so nite parbe
        else
        {
            ans++;
            l++, r++;
        }
    }
    cout << ans << endl;
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