#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double p,q;
	p = a/b;
	q = (1-(c/d))*(1-(a/b));
	double ans = p/(1-q);
	cout.precision(10);
	cout<<fixed;
	cout<<ans<<"\n";
	return 0;
}