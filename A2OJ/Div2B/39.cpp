#include <iostream>
#include <climits>
using namespace std;

int main (void)
{
	int n,k,j,currmin=INT_MAX,foo;
	cin>>n>>k;
	int arr[100001]={0};
	int i;
	//bool foo[100001] = {false};
	for ( i = 0; i < n; i++ )
	{	
		cin>>foo;
		arr[i%k] = arr[i%k] + foo; 
	}
	int min = INT_MAX;
	for ( i = 0; i < k; i++ )
	{
		if (arr[i]<min)
		{
			min = arr[i];
			currmin = i;
		}
	}
	cout<<currmin+1<<"\n";
	return 0;
}