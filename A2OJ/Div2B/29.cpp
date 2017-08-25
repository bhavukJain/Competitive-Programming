#include <iostream>
#include <algorithm>
using namespace std;

int main (void)
{
	int i=0,n,m,val=0;
	cin>>n>>m;
	int arr[100];
	int count = 0;
	int neg = 0;
	while (i < n)
	{
		cin>>arr[i];
		i = i+1;
	}
	sort(arr,arr+n);
	i = 0;
	while (count < m && i < n)
	{
		if (arr[i] < 0)
		{
			val = val + (-1)*arr[i];
			count++;
		}
		i = i+1;
	}
	//i = i + 1;
	cout<<val<<"\n";
	return 0;
}