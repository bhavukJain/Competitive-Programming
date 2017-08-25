#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main (void)
{
	int foo,bar,i,n,xg,j,yg;
	cin>>n>>xg>>yg;
	float temp,slope;
	//int arr[1001][2];
	bool present[1001];
	vector<pair<int,int> >myvec;
	for ( i = 0; i < 1001; i++ )
		present[i] = false;
	for ( i = 0; i < n; i++ )
	{
		cin>>foo>>bar;
		int k1 = foo - xg;
		int k2 = bar - yg;
		myvec.push_back(make_pair(k1,k2));
	}
	int ans = 0;
	for (i = 0; i < myvec.size(); i++)
	{
		if (present[i] == true)
			continue;
		ans++;
		for ( j = i; j < myvec.size(); j++ )
		{
			if (myvec[i].first*myvec[j].second == myvec[i].second*myvec[j].first)
				present[j] = true;
		}
	}
	cout<<ans<<"\n";
	return 0;
}