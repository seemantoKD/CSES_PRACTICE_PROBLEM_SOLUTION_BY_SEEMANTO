#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int mod = 1000000007;

int main()
{
    optimize();

    long long n;
    cin >> n;

    long long ans = 1;
    for (int i = 0; i < n; i++)
        ans = (ans * 2) % mod;
    cout << ans << endl;
    return 0;
}