#include <iostream>

using namespace std;

int main (void)
{
	int n,k,max=0,temp,i,j,num;
	int arr[100][100];
	int pebb[100000];
	cin>>n>>k;

	for ( i = 0; i < 100; i++ )
		for ( j = 0; j < 100; j++ )
			arr[i][j] = 0;
	for (i = 0; i < n; i++)
	{
		cin>>pebb[i];
		if (pebb[i] > max)
			max = pebb[i];
	}
	int diff;
	for ( i = 0; i < n-1; i++ )
	{
		for ( j = i+1; j < n; j++ )
		{
			diff = pebb[j] - pebb[i];
			if ( diff < 0 )
				diff = diff * (-1);
			if (diff > k)
			{
				cout<<"NO\n";
				return 0;
			}	

		}
	}
	int foo = 1;
	temp = 1;
	while (temp <= max)
	{
		for ( i = 0; i < n; i++ )
		{
			num = temp%k;
			if ( num == 0 )
				num = k;
			j = 0;
			while (arr[i][j] != 0)
			{
				j = j+1;
			}
			if (j < pebb[i])
			{
				arr[i][j] = num;
			}	
		}
		temp++;
	}
	cout<<"YES\n";
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < pebb[i]; j++ )
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}