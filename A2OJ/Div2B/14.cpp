#include <iostream>

using namespace std;

int main (void)
{
	int n,i;
	int count = 0;
	int arr[100000];
	cin>>n;
	for ( i = 0; i < n; i++ )
		cin>>arr[i];
	count = arr[0] + 1;
	for ( i = 1; i < n; i++ )
	{
		if ( arr[i] >= arr[i-1] )
		{
			//cout<<"I am in 1st\n";
			count = count+1;
			count = count + arr[i] - arr[i-1]+1;
		}
		else if ( arr[i] < arr[i-1] )
		{
			//cout<<"I am in second\n";
			count = count + (arr[i-1] - arr[i]);
			count = count+2;
		}
	}
	cout<<count<<"\n";
	return 0;
}