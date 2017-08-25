#include <iostream>

using namespace std;

int main (void)
{
	int a[100][100];
	int b[100][100];
	int m,n,i,sum,j,k,flag;
	cin>>m>>n;
	for ( i = 0; i < 100; i++ )
		for ( j = 0; j < 100; j++ )
			a[i][j] = -1;
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			cin>>b[i][j];
		}
	}
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			if (b[i][j] == 0)
			{
				for ( k = 0; k < n; k++ )
					a[i][k] = 0;
				for ( k = 0; k < m; k++ )
					a[k][j] = 0;
			}
			else if (b[i][j] == 1)
			{
				for ( k = 0; k < n; k++ )
				{
					if (a[i][k] == -1)
						a[i][k] = 1;
				}
				for ( k = 0; k < m; k++ )
				{
					if (a[k][j] == -1)
						a[k][j] = 1;
				}
			} 
		}
	}
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			sum = 0;
			for ( k = 0; k < n; k++ )
				sum = sum + a[i][k];
			for ( k = 0; k < m; k++ )
				sum = sum + a[k][j];
			if (sum > 0 && b[i][j] == 0)
			{
				flag = 1;
				cout<<"NO\n";
				break;
			}
			if ( sum == 0 && b[i][j] != 0)
			{
				flag = 1;
				cout<<"NO\n";
				break;
			}
		}
		if ( flag == 1)
			break;
	}
	if (flag == 0)
	{
		cout<<"YES\n";
		for ( i = 0; i < m; i++ )
		{
			for ( j = 0; j < n; j++ )
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	return 0;
}
