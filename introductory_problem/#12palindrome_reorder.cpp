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
    int n = s.size();

    map<char, int> cnt;
    vector<int> v;
    for (char ch : s)
        cnt[ch]++;

    for (auto mp : cnt)
        v.push_back(mp.second);

    int odd = 0;
    for (auto val : v)
    {
        if (val % 2 == 1)
            odd++;
    }

    // case 1 -> no solution
    if ((n % 2 == 0 and odd > 0) or (n % 2 == 1 and odd > 1))
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // case 2 -> have a solution
    // rearange string and convert to palindrome
    string left = "";
    string middle = "";
    string right = "";

    for (auto p : cnt)
    {
        char ch = p.first;
        int count = p.second;

        if (count % 2 == 1)
            middle = ch;

        left += string(count / 2, ch);
    }

    right = left;
    reverse(right.begin(), right.end());
    string palindrome = left + middle + right;
    cout << palindrome << endl;
    return 0;
}

/*
    learning : 
        # string ke kivabe palindrome kora jay reorder kore 
            step : 
                1. left part , middle part, right part initialize 
                2. map er upor loop calabo 
                    -> map.second jodi odd hoy tahole map.first = middle
                    -> left += string(map.second/2,map.first)
                3. loop er bayre 
                    -> right = left
                    -> right ke reverse korbo 
                    **** string palindrome = left + mid + right
                    print palindrome string and get answer 

-> complexity o(n) korte caile just map bad dibo and frequency array use korbo

*/