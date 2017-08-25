#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int P[100005];
int s,t;
int n;
int vis[100005];


int main()
{
    scanf("%d%d%d",&n,&s,&t);
    for(int i=1;i<=n;i++) scanf("%d",&P[i]);
    bool cyc = false ;
    int ans = 0;
    vis[s] = 1 ;
    while(s!=t)  {
        if(cyc) {
            ans = -1;
            break;
        }
        s = P[s];
        if(vis[s]==1) {
            cyc = true;
            ans = -1;
            break;
        }
        else {
            vis[s] = 1 ;
            ans++;
        }

    }
    printf("%d\n",ans);

    return 0;
}