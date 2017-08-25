#include <iostream>

#define NUM 100000
using namespace std;


int main (void)
{
	int arr[3][3];
	int i,j;
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ )
			cin>>arr[i][j];
	int s1,s2,s3,sum;
	s1 = arr[0][1] + arr[0][2];
	s2 = arr[1][0] + arr[1][2];
	s3 = arr[2][0] + arr[2][1]; 

	for ( i = 0; i <= NUM; i++ )
	{
		arr[0][0] = i;
		sum = i + s1;
		arr[1][1] = sum - arr[1][0] - arr[1][2];
		arr[2][2] = sum - arr[2][0] - arr[2][1];
		if ( (arr[0][0] + arr[1][1] + arr[2][2]) == sum )
			break; 
	}
	for ( i = 0; i < 3; i++ )
	{
		for ( j = 0; j < 3; j++ )
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}