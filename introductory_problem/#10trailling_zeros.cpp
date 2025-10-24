#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// ll dp[10005];

// ll fact(ll n)
// {
//     if (n <= 1)
//         return 1;
//     if (dp[n] != -1)
//         return dp[n];
//     return dp[n] = fact(n - 1) * n;
// }

int main()
{
    optimize();

    // memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    // ll result = fact(n);
    // string s = to_string(result);
    // int c = 0;
    // for (ll i = s.size() - 1; i > 0; i--)
    // {
    //     if (s[i] == '0')
    //         c++;
    //     else
    //         break;
    // }
    // cout << c << endl;

    // optimize using formula
    vector<ll> v;
    ll temp = n;
    while (temp > 0)
    {
        temp = temp / 5;
        v.push_back(temp);
    }
    ll r = accumulate(v.begin(), v.end(), 0);
    cout << r << endl;
    return 0;
}

/*
    note :
        -> trailling zero means : number of lastest zero
            ex : 1213400234000
                trailling zero : last 3 ta zero, so ans = 3.
*/

/*
    learning :
        -> kuno ekti number er factorial er trailing zero ber korar formula holo
            # number ti ke totokkon porjonto 5 diye devide korbo jotokkon na
                division result negative (temp < 0) na hoy.

            *** prottekbar 5 diye devide kore division result gula sum korlei hoy jay

*/