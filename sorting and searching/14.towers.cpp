#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
using ll = long long int;
 
void seemanto()
{
    ll n;
    cin >> n;
 
    multiset<ll> towers;
    while (n--)
    {
        ll cube;
        cin >> cube;
 
        auto it = towers.upper_bound(cube);
        if (it == towers.end())
            towers.insert(cube);
        else
        {
            towers.erase(it);
            towers.insert(cube);
        }
    }
    cout << towers.size() << endl;
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
