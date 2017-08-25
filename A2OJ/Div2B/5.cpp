#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int rez,arr[10000],n,l,diff;
double f;
int main (void)
{
	cin>>n>>l;
	for (int i = 0; i < n; i++ )
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	rez = 2*max(arr[0],l-arr[n-1]);
	for ( int i = 0; i < n-1; i++ )
	{
		rez = max(rez, arr[i+1]-arr[i]);
	}
	f = rez/2.0;
	printf("%.10f\n",f);
	return 0;
}
	