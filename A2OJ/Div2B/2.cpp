#include <iostream>

using namespace std;

int main (void)
{
	int foo,i,m,n,temp,t,j,bar;
	int arr[100000];
	cin>>n>>m;
	foo = m;
	i = 0;
	while (foo != 0)
	{
		cin>>temp;
		arr[i] = temp;
		i++;
		foo--;
	}
	i = 0;
	t = 0;
	//j = 1;
	for ( i = 0; i < m-1; i++ )
	{
		if (arr[i] > arr[i+1])
		{
			t = t + n;
		}
	}
	t = t + arr[m-1] - 1;
	cout<<t<<"\n";
	return 0;

}