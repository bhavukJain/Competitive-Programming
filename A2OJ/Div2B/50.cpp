#include <iostream>

using namespace std;

int main (void)
{
	int i=0,d,j,k,foo;
	int n;
	int arr[2000];
	cin>>d>>n;
	int temp1 = n;
	while ( n != 0 )
	{
		cin>>foo;
		arr[i] = foo;
		i++;
		n--;
	}
	int ans = 0;
	int var = 0;
	n = temp1;
	for (i = 0; i < n; i++ )
	{
		int temp = arr[i];
		while (temp != 0)
		{
			temp--;
			var++;
		}
		if (var == d)
		{
			var = 0;
			continue;
		}
		else if (i != n-1)
		{
			var = var+1;
			ans = ans + d - var + 1;
			var = 0;	
		}
	}
	cout<<ans<<"\n";
	return 0;

}