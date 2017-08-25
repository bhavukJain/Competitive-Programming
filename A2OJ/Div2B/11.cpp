#include <iostream>
#include <cmath>
using namespace std;


int main (void)
{
	long long int r,x,y,xn,yn;
	cin>>r;
	cin>>x>>y>>xn>>yn;
	long long int ds = (xn-x)*(xn-x) + (yn-y)*(yn-y);
	//cout<<ds<<"\n";
	long double d = sqrt(ds);
	// double check = d*d;
	long long int ans = ceil(d/(2*r));
	//if (check != ds)
	//	ans = ans+1;
	cout<<ans<<"\n";
}