#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n);

    for(long long i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    long long r = 0;
    for(long long i = 0;i<n-1;i++)
    {
        if(v[i+1] < v[i])
        {
            while(v[i+1] != v[i])
            {
                v[i+1]++;
                r++;
            }
        }
    }

    cout<<r<<endl;
    return 0;
}