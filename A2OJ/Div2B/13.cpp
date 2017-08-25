#include <iostream>

using namespace std;

int main (void)
{
	int x,y,last,secondlast,val,ans;
	cin>>x>>y;
	int n,i;
	cin>>n;
	n = n-1;
	i = n % 6;
	//i = i + 1;
	if ( i == 0 )
		val = x;
	else if ( i == 1 )
		val = y;
	else if ( i == 2 )
		val = y-x;
	else if ( i == 3 )
		val = -x;
	else if ( i == 4 )
		val = -y;
	else 
		val = x-y;
	ans = val%1000000007;
	if ( ans < 0 )
		ans = ans + 1000000007;
	cout<<ans<<"\n"; 
	return 0;
}