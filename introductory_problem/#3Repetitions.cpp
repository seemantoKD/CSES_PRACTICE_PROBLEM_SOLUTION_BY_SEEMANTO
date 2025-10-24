#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int a = 0, c = 0, g = 0, t = 0;
    int mxa = 0, mxc = 0, mxg = 0, mxt = 0;

    // for a
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            a++;
            if (a > mxa)
            {
                mxa = a;
            }
        }

        else
        {
            a = 0;
        }
    }
    if (a > mxa)
    {
        mxa = a;
    }

    // for c
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'c')
        {
            c++;
            if (c > mxc)
            {
                mxc = c;
            }
        }

        else
        {
            c = 0;
        }
    }
    if (c > mxc)
    {
        mxc = c;
    }

    // for g
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'g')
        {
            g++;
            if (g > mxg)
            {
                mxg = g;
            }
        }

        else
        {
            g = 0;
        }
    }
    if (g > mxg)
    {
        mxg = g;
    }

    // for t
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 't')
        {
            t++;
            if (t > mxt)
            {
                mxt = t;
            }
        }

        else
        {
            t = 0;
        }
    }
    if (t > mxt)
    {
        mxt = t;
    }

    vector<int> v;
    v.push_back(mxa);
    v.push_back(mxc);
    v.push_back(mxg);
    v.push_back(mxt);
    int ans = *max_element(v.begin(), v.end());
    cout << ans << endl;
    return 0;
}