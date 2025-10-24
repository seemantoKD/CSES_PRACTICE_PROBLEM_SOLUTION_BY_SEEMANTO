#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    if (n == 1)
    {
        cout<<1<<endl;
        return 0;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    vector<int> even;
    vector<int> odd;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    for (auto val : even)
        cout << val << ' ';
    for (auto val : odd)
        cout << val << ' ';
    cout << endl;
    return 0;
}