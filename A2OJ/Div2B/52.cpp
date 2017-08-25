#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <climits>
#include <fstream>

using namespace std;

struct comp
{
	bool operator () (const pair <int,int> &a, const pair <int,int> &b)
	{
		if (a.first > b.first)
			return true;
		else
			return false;
	}
};

int main (void)
{
	int n,k;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	vector<pair<int,int> > myvec;
	int temp;
	int foo = 1;
	int bar = k;
	cin>>n>>k;
	while (foo <= n)
	{
		cin>>temp;
		myvec.push_back(make_pair(temp,foo));
		foo++;
	}
	sort(myvec.begin(),myvec.end(),comp());
	//reverse(myvec.begin(),myvec.end());
	int val = INT_MAX;
	vector<int> myvec1;
	auto it = myvec.begin();
	int z = 0;
	while (it != myvec.end() && z < k)
	{
		if (it->first < val)
			val = it->first;
		temp = it->second;
		myvec1.push_back(temp);
		it++;
		z++;
	}	
	sort(myvec1.begin(),myvec1.end());
	cout<<val<<"\n";
	auto it1 = myvec1.begin();
	while (it1 != myvec1.end())
	{
		cout<<*it1<<"\t";
		it1++;
	}
	cout<<"\n";
	return 0;
}