#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int arr1[3050],arr2[3050];
int main (void)
{
	int m,n,i,j,count;
	cin>>n>>m;
	//unordered_map <int,bool> myhash1;
	//unordered_map <int,bool> myhash2;
	for ( i = 0; i < n; i++ )
	{
		cin>>arr1[i];
		//myhash1[arr1[i]] = false;
	}
	for ( i = 0; i < m; i++ )
	{
		cin>>arr2[i];
		//myhash2[arr2[i]] = false;
	}
	sort(arr1,arr1+n,greater<int>());
	sort(arr2,arr2+m,greater<int>());
	i = 0,j=0;
	count = n;
	while ( i < n )
	{
		int foo = arr1[i];
		if (arr2[j] >= arr1[i] && j < m)
		{
			count  = count-1;
			j = j+1;
		}
		i = i+1; 

	}
	//count = 0;
	cout<<count<<"\n";
	return 0;
}