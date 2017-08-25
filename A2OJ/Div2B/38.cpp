#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
int check(int median);
int d,n,m;
int arr[101][101];
int main (void)
{
	int i,j,k=0,count=0,foo,median1,median2,median3,count1=0,count2=0;
	cin>>n>>m>>d;
	int myarr[10001];
	int min = INT_MAX;
	//int arr[101][101];
	for (i = 0; i < 101; i++)
		for ( j = 0; j < 101; j++ )
			arr[i][j] = 0;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < m; j++ )
		{
			cin>>foo;
			arr[i][j] = foo;
			myarr[k] = foo;
			k++;
		}
	}
	sort(myarr,myarr+k);
	if ( k % 2 != 0 )
		median1 = myarr[(k-1)/2];
	else
	{
		median2 = myarr[(k/2)];
		median3 = myarr[(k/2)-1];
	}
	//int count = 0;
	if ( k%2 != 0 )
	{
		for ( i = 0; i < n; i++ )
		{
			for ( j = 0; j < m; j++ )
			{
				int elem = arr[i][j];
				if(elem < median1)
				{
					while (elem != median1)
					{
						elem = elem+d;
						count++;
						if (elem > median1)
						{
							cout<<"-1\n";
							return 0;
						}
					}
				}
				else if (elem > median1)
				{
					while (elem!=median1)
					{
						elem=elem-d;
						count++;
						if (elem < median1)
						{
							cout<<"-1\n";
							return 0;
						}
					}
				}
			}
		}
	}
	//int count1 = 0,count2=0;
	else if (k%2 == 0)
	{
		count1 = check(median1);
		count2 = check(median2);
		if (count1 < count2)
			count = count1;
		else
			count = count2;
		//count = min(count1,count2);
	}
	if (count == INT_MAX)
		cout<<"-1\n";
	else
		cout<<count<<"\n";
	return 0;
}

int check(int median)
{
	int count = 0,i,j;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < m; j++ )
		{
			int elem = arr[i][j];
			if (elem > median)
			{
				while (elem!=median)
				{
					elem = elem - d;
					count++;
					if (elem < median)
					{
						return INT_MAX;
					}
				}
			}
			else if (elem < median)
			{
				while (elem != median)
				{
					elem = elem+d;
					count++;
					if (elem>median)
					{
						return INT_MAX;
					}
				}
			}
		}
	}
	return count;
}
