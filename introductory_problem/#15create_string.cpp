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

    string s;
    cin >> s;
    sort(s.begin(), s.end());

    set<string> ans;
    do
    {
        ans.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << ans.size() << endl;
    for (auto st : ans)
        cout << st << endl;
    return 0;
}

/*
    learning :
        -> next_permutation library use kore ekti string theke possible sokol permutation
            laxicographicaly ber kora

        *** next_permutation a push_back korar jonno do loop use kora hoy karon 1st time loop condition
            check charai push korbe string

        # ei stl just small constraints (n <= 10) e kaj kore
*/