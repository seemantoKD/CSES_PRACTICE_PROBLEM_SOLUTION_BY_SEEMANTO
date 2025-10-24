#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n - 1);
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    long long total_sum = n * (n + 1) / 2;
    long long x = 0;
    long long input_sum = accumulate(v.begin(), v.end(), x);
    long long missing = total_sum - input_sum;
    cout << missing << endl;

    return 0;
}
