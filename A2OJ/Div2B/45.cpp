#include <iostream>
#include <climits>
using namespace std;

int main (void)
{
	int i,j,n;
	cin>>n;
	int height[n];
	for ( i = 0; i < n; i++ )
		cin>>height[i];
	int left[n];
	int right[n];
	for ( i = 0; i < n; i++ )
	{
		left[i] = 0;
		right[i] = 0;
	}
	for ( i = 0; i < n; i++ )
	{
		int val = height[i];
		int count;
		if ( i > 0 )
		{
			j = i-1;
		    count = 0;
			while (height[j] <= val && j >= 0)
			{
				count++;
				val = height[j];
				--j;
			}
			left[i] = count;
			count = 0;
		}
		val = height[i];
		if (j != n-1)
		{
			j = i+1;
			while ( height[j] <= val && j < n)
			{
				count++;
				val = height[j];
				j++;
			}
			right[i] = count;
		}
	}
	int temp = INT_MIN;
	for ( i = 0; i < n; i++ )
	{
		if (left[i] + right[i] > temp)
			temp = left[i] + right[i];
	}
	if (temp == 0)
		cout<<1<<"\n";
	else
		cout<<temp+1<<"\n";
	return 0;
}