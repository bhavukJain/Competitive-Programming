#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
//#include <cstdio>
using namespace std;

int main (void)
{
	int arr[100];
	int i,n;
	double pi = atan(1)*4;
	cin>>n;
	for ( i = 0; i < n; i++ )
		cin>>arr[i];
	sort(arr,arr+n,greater<int>());
	i = 0;
	int sign = 1;
	double total=0;
	for ( i = 0; i < n; i++ )
	{
		if (i%2 == 0)
			sign = 1;
		else
			sign = -1;
		total = total + sign*(arr[i]*arr[i]*(pi));
	}
	cout<<setprecision(10)<<fixed<<total<<"\n";
	//printf(".10f\n",total);
	return 0;
}