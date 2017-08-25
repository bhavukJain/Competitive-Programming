#include <iostream>

using namespace std;

int main (void)
{
	int i,j,m,n; // m is number of pictures, n is number of painters
	cin>>m>>n;
	int arr[50000][5];
	for (i = 0; i < 50000; i++)
		for ( j = 0; j < 5; j++ )
			arr[i][j] = 0;
	int ans[50000] = {0};
	for ( i = 0; i < m; i++ )
		for ( j = 0; j < n; j++ )
			cin>>arr[i][j];
	//int temp;
	for ( i = 0; i < n; i++ )
	{
		int freeat = 0;
		for ( j = 0; j < m; j++ )
		{
			int start = max(freeat,ans[j]);
			ans[j] = start + arr[j][i];
			freeat = ans[j];
		}
	}
	for ( i = 0; i < m; i++ )
		cout<<ans[i]<<"\t";
	cout<<"\n";
	return 0;


}