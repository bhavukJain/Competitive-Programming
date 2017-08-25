#include <iostream>

using namespace std;

int main (void)
{
	int i,n,m; // 1 for white, 2 for red, 3 for blue
	cin>>n>>m;
	int arr[100005];
	for ( i = 0; i < 100005; i++ )
		arr[i] = -1;
	int d1,d2,d3;
	for (i = 0; i < m; i++)
	{
		cin>>d1>>d2>>d3;
		if (arr[d1] == -1 && arr[d2] == -1 && arr[d3] == -1)
		{
			arr[d1] = 0;
			arr[d2] = 1;
			arr[d3] = 2;
		}
		else if (arr[d1] != -1)
		{
			int k = arr[d1];
			int k1 = (k+1)%3;
			int k2 = (k+2)%3;
			arr[d2] = k1;
			arr[d3] = k2;
		}
		else if (arr[d2] != -1)
		{
			int k = arr[d2];
			int k1 = (k+1)%3;
			int k2 = (k+2)%3;
			arr[d1] = k1;
			arr[d3] = k2;
		}
		else if (arr[d3] != -1)
		{
			int k = arr[d3];
			int k1 = (k+1)%3;
			int k2 = (k+2)%3;
			arr[d1] = k1;
			arr[d2] = k2;
		}
	}
	for ( i = 1; i <= n; i++)
	{
		arr[i] = arr[i]+1;
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	return 0;
}