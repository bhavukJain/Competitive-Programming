#include <iostream>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

vector<int> find();
void myfunc (vector<int> bar);
vector<int> myvec[101];
bool arr[101];
int n;
int main (void)
{
    int a,b,m,i;
    cin>>n>>m;
    int foo = m;
    while (foo != 0)
    {
        cin>>a>>b;
        myvec[a].push_back(b);
        myvec[b].push_back(a);
        foo--;
    }
    for (i = 0; i < 101; i++)
        arr[i] = false;
    int ans = 0;
    //int flag = 1;
    //int temp = 0;
    while (1)
    {
        vector <int> temp = find();
        if (temp.size() != 0)
        {
            ans++;
            myfunc(temp);
        }
        else if (temp.size()== 0) 
            break;
    }
    cout<<ans<<"\n";
    return 0;
}

vector<int> find()
{
    vector<int> bar;
    for (int i = 1; i <= n; i++ )
    {
        if (myvec[i].size() == 1 && arr[i] == false)
        {
            arr[i] = true;
            bar.push_back(i);
        }
    }
    return bar;
}


void myfunc (vector<int> bar)
{
    auto it = bar.begin();
    while (it != bar.end())
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == true)
                continue;
            vector<int> foo = myvec[i];
            auto bt = foo.begin();
            while (bt != foo.end())
            {
                if (*bt == *it)
                    foo.erase(bt);
                else
                    bt++;
            }
            myvec[i] = foo;
        }
        it++;
    }
}