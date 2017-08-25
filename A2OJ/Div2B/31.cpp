#include <iostream>

using namespace std;

int main (void)
{
	int i,j,n,m,flag,count;
	char arr[50][50];
	cin>>n>>m;
	for ( i = 0; i < n; i++ )
		for ( j = 0; j < m; j++ )
			cin>>arr[i][j];
	count = 0;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < m; j++ )
		{
			flag = 0;
			if ( i == 0 )
			{
				if (arr[i][j] == 'W')
				{
					if (arr[i][j+1] == 'P' && flag != 1 && j != m) 
					{
						count = count+1;
						flag = 1;
						arr[i][j+1] = '.';
					}
					else if (arr[i+1][j] == 'P' && flag != 1)
					{
						count = count+1;
						flag = 1;
						arr[i+1][j] = '.';
					}
					else if (arr[i][j-1] == 'P' && flag != 1 && j!= 0)
					{
						count = count + 1;
						flag = 1;
						arr[i][j-1] = '.';
					}
				}
			}
			else if ( i == n-1 )
			{
				if (arr[i][j] == 'W')
				{
					if (arr[i][j+1] == 'P' && flag != 1 && j != m)
					{
						count = count+1;
						flag = 1;
						arr[i][j+1] = '.';
					}
					else if (arr[i-1][j] == 'P' && flag != 1 )
					{
						count = count+1;
						flag = 1;
						arr[i-1][j] = '.';
					}
					else if (arr[i][j-1] == 'P' && flag != 1 && j != 0)
					{
						count = count+1;
						flag = 1;
						arr[i][j-1] = '.';
					}
				}
			}
			else
			{
				if (arr[i][j] == 'W')
				{
					if (arr[i][j+1] == 'P' && flag != 1 && j != m)
					{
						count = count+1;
						arr[i][j+1] = '.';
						flag = 1;
					}
					else if (arr[i-1][j] == 'P' && flag != 1)
					{
						count = count+1;
						arr[i-1][j] = '.';
						flag = 1;
					}
					else if (arr[i+1][j] == 'P' && flag != 1)
					{
						count = count+1;
						arr[i+1][j] = '.';
						flag = 1;
					}
					else if (arr[i][j-1] == 'P' && flag != 1 && j != 0)
					{
						count = count+1;
						arr[i][j-1] = '.';
						flag = 1;
					}
				}
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}