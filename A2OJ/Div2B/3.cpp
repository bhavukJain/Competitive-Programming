#include <iostream>

using namespace std;

int main (void)
{
	int i=0,foo,n,m,k,temp,fed,count,bar=0,j;
	int arr[100000];
	cin>>n>>m>>k;
	foo = m+1;
	while ( foo != 0 )
	{
		cin>>temp;
		arr[i] = temp;
		i++;
		foo--;
	}
	fed = arr[m];
	for ( i = 0; i < m; i++ )
	{
		count=0;
		temp = arr[i] ^ fed;
		
		while (temp != 0)
		{
			j = temp & 1;
			if ( j == 1 )
				count++;
			temp = temp >> 1;
			//cout<<count<<"\t";
		}
		if ( count <= k )
			bar++;
	}
	cout<<bar<<"\n";
	return 0;
}