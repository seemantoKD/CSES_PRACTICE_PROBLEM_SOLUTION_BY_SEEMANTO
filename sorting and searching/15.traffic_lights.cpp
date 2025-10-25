#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
using ll = long long int;
 
void seemanto()
{
    ll x, n;
    cin >> x >> n;
 
    set<ll> lights;
    multiset<ll> dis;
 
    lights.insert(0);
    lights.insert(x);
    dis.insert(x);
 
    while (n--)
    {
        ll p;
        cin >> p;
 
        auto it = lights.upper_bound(p);
        ll right = *it;
        it--;
        ll left = *it;
 
        dis.erase(dis.find(right - left));
        dis.insert(right - p);
        dis.insert(p - left);
 
        lights.insert(p);
 
        cout << *dis.rbegin() << ' ';
    }
    cout << endl;
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