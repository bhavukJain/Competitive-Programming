#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main (void)
{
	int temp=0,count=0,i,j,d,sumtime,foo,bar=0,k,diff;
	cin>>d>>sumtime;
	foo = d;
	int arr[50];
	vector < pair<int,int> > myvec;
	while (foo != 0)
	{
		cin>>i>>j;
		myvec.push_back(make_pair(i,j));
		foo--;
	}
	auto it = myvec.begin();
	while (it != myvec.end())
	{
		count = count + it->second;
		temp = temp + it->first;
		arr[bar] = it->second;
		bar++;
		it++;
	}
	if (sumtime >= temp && sumtime <= count)
	{
		cout<<"YES\n";
		diff = count - sumtime;
	}
	else 
	{
		cout<<"NO\n";
		return 0;
	}
	bar = 0;
	it = myvec.begin();
	while (diff > 0 && it != myvec.end())
	{
		k = it->second - it->first;
		if ( k <= diff && (arr[bar]-k) >= it->first  )
		{
			arr[bar] = arr[bar] - k;
			diff = diff-k;
			bar++;
		}
		if ( k > diff && (arr[bar]-diff) >= it->first )
		{
			arr[bar] = arr[bar] - diff;
			diff = diff-k;
			bar++;
		}
		it++;
	}
	for ( i = 0; i < d; i++ )
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}