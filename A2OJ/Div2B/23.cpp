#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <iterator>
#include <set>
using namespace std;
#define N 1001
//#define ll long long

//#define pii pair<ll,ll>

int a[N], b[N], c[N], d[N];

int main()
{
    int p,q,l,r;
    cin >> p >> q >> l >> r;
    for(int i =0; i < p; ++i)
        cin >> a[i] >> b[i];
    for(int i =0; i < q; ++i)
        cin >> c[i] >> d[i];
    int res = 0;
    for(int t = l; t <= r; ++t)
    {
        bool f = 0;
        for(int i = 0; i < p; ++ i)
            for(int j = 0; j < q; ++j)
                if((a[i] <= c[j]+t && b[i] >= c[j]+t) || (c[j]+t <= a[i] && d[j]+t >= a[i]))f = 1;
        res += f;
    }
    cout << res << endl;
    return 0;
}