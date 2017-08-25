#include <iostream>
using namespace std;

int main (void)
{
	int n,i;
	int arr[100005];
	cin>>n;
	for ( i = 0; i < n; i++ )
		cin>>arr[i];
	int maxlen=2,currlen=2;
	if (n == 1)
		maxlen = 1;
	else
		maxlen = 2;
	i = 2;
	while ( i < n )
	{
		if (arr[i] == (arr[i-1] + arr[i-2]))
		{
			currlen = currlen+1;
			if (maxlen < currlen)
				maxlen = currlen;
		}
		else
		{
			currlen = 2;
		}
		i = i+1;
	}
	cout<<maxlen<<"\n";
}