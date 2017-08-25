#include <iostream>

using namespace std;

void swap (int a, int b);
char arr[1000000];
int main (void)
{
	int i=0,flag=0,foo,temp,n,t,fg,fb,j=0,k;
	cin>>n>>t;
	char c;
	foo = n;
	while ( foo != 0 )
	{
		cin>>c;
		arr[i] = c;
		i++;
		foo--;
	}
	foo = t;
	i = 0;
	while ( i < n )
	{
		if (arr[i] == 'G')
		{
			fg = i;
		}
		i++;
	}	
	i = 0;
	while ( i < n )
	{
		if (arr[i] == 'B')
		{
			fb = i;
			break;
		}
		i++;
	}
	if ( fb > fg )
	{
		for ( i = 0; i < n; i++ )
			cout<<arr[i];
	}
	else
	{
		for ( i = 0; i < t; i++ )
		{
			j = 0;
			while ( j < n-1 )
			{
				if (arr[j] == 'B' && arr[j+1] == 'G')
				{
					k = j+1;
					swap(j,k);
					j = j+2;
				}
				else
					j = j+1;
				
			}
		}
		for ( i = 0; i < n; i++ )
			cout<<arr[i];
	}
	cout<<"\n";
	return 0;
}


void swap (int a, int b)
{
	char temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}