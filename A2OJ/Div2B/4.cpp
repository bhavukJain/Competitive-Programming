#include <iostream>

using namespace std;
long long int calc( long long int num );
int main (void)
{
	long long int temp,maxi,n,m,bar=0,k,minv,maxv;
	cin>>n>>m;
	if ( n >= m )
	{
		maxi = n-m+1;
		long long int val = calc(maxi);
		//cout<<val<<"\n";
		maxv = val;
		
		long long int foo = n/m;
		long long int foo1 = n%m;
		temp = 0;
		if ( m == 1 )
		{
			minv = calc(n);
			//cout<<val<<"\n";frrrrw
		}
		else if ( m != 1 )
		{
			minv = (m-foo1)*calc(foo) + (foo1)*calc(foo+1);
		}
		else if ( n == m )
		{
			minv = 0;
			maxv = 0;
			//cout<<"1"<<"1"<<"\n";
		}
		cout<<minv<<"\t"<<maxv<<"\n";
	}
	return 0;
}


long long int calc( long long int num )
{
	long long int finalval = (num*(num-1))/2;
	return finalval;
}