//Not done by me. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    //freopen("test.txt", "r", stdin);
    int n, m, a, b;
    cin >> n >> m;
    int centre[n+1];
    centre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        centre[i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        centre[a] = 0;
        centre[b] = 0;
    }
    int cent;
    for (int i = 1; i <= n; i++)
    {
        if (centre[i])
            cent = i;
    }
    cout << n-1 << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i != cent)
            cout << i << " " << cent << endl;
    }
}