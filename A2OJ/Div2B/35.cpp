#include <iostream>
#include <utility>
#include <vector>
using namespace std;

struct mycomp
{
	bool operator() (const pair<int,int> &p1, const pair<int,int> &p2)
	{
		if (p1.second > p2.second)
			return true;
		else if (p1.second == p2.second && p1.first >= p2.first)
			return true;
        else
            return false;
	}
};

int main (void)
{
	int i,n,a,b,foo;
	cin>>n;
	i = n;
	vector<pair<int,int> > myvec;
	while ( i != 0 )
	{
		cin>>a>>b;
		myvec.push_back(make_pair(a,b));
		i--;
	}
	int val = 0;
	sort(myvec.begin(),myvec.end(),mycomp());
	val = val + myvec[0].first;
	int k = myvec[0].second;
	foo = 1;
	while ( k!=0 && foo < n)
	{
		//k--;
		val = val + myvec[foo].first;
		k = k + myvec[foo].second;
		k--;
        foo++;
	}
	cout<<val<<"\n";
    
	return 0;
}