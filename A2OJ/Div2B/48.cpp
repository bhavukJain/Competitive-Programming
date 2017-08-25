#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

struct comp
{
	bool operator () (const pair<int,int>&p1, const pair<int,int>&p2)
	{
		if (p1.first < p2.first)
			return true;
		else if (p1.first == p2.first && p1.second > p2.second)
			return true;
		else
			return false;
	}
};

int main (void)
{
	int n,val;
	cin>>n;
	int arr[100];
	int i;
	vector<pair<int,int> > myvec;
	int a,b;
	for ( i = 0; i < 9; i++ )
	{
		cin>>a;
		b = i+1;
		myvec.push_back(make_pair(a,b));
	}
	sort(myvec.begin(),myvec.end(),comp());
	//for ( i = 0; i < n; i++ )
	//	cout<<myvec[i].first<<"\t"<<myvec[i].second<<"\n";
	int foo = n;
	string s = "";
	int k = myvec[0].first;
	val = 0;
	if (foo < k )
	{
		cout<<"-1"<<"\n";
		return 0;
	}
	long long num = 0;
	int t = floor(n/k);
	for ( i = 0; i < t; i++ )
		s = s + to_string(myvec[0].second);
	int rem = n - t*k;
	for (i = 0; i < 9; i++)
	{
		if ()
	}
	cout<<s<<"\n";
	return 0;
}
