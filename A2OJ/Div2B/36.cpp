#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main (void)
{
	int i,n,foo,m,j,k,count=0;
	cin>>n;
	i = 1;
	unordered_map<int,vector<int> > mymap;
	vector<pair<int,int> > mypair;
	while ( i <= n )
	{
		cin>>foo;
		mymap[foo].push_back(i);
		i++;
	}
	auto it = mymap.begin();
	while ( it != mymap.end())
	{
		vector<int> myvec = it->second;
		auto it2 = myvec.begin();
		int first = myvec[0];
		int last = myvec[myvec.size()-1];
		int diff = 0;
		if (myvec.size() > 1)
		{	
			diff = (last-first)/(myvec.size()-1);
			int flag = 0;
			for (it2 = myvec.begin(); it2 != myvec.end(); it2++)
			{
				if (it2 != myvec.end()-1)
				{	
					vector<int>::iterator it3 = it2+1;
					if (*it3 != (*it2+diff))
					{
						flag = 1;
						break;
					}
				}
			}
			if (flag == 0)
			{
				count++;
				mypair.push_back(make_pair(it->first,diff));
				//cout<<it->first<<"\t"<<diff<<"\n";
			}
		}
		else
		{
			count++;
			mypair.push_back(make_pair(it->first,diff));
			//cout<<it->first<<"\t"<<diff<<"\n";
		}
		it++;
	}
	sort(mypair.begin(),mypair.end());
	auto it4 = mypair.begin();
	cout<<count<<"\n";
	while (it4 != mypair.end())
	{
		cout<<it4->first<<"\t"<<it4->second<<"\n";
		it4++;
	}
	return 0;
}