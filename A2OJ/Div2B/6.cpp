#include <iostream>
#include <algorithm>

#define SIZE 100000

using namespace std;

int arr[SIZE];

int main (void)
{
	int l=0,r,n,foo,flag=0,i,temp,var,le,re;
	cin>>n;
	r = n-1;
	for ( i = 0; i < n; i++)
	{
		cin>>foo;
		arr[i] = foo;
	}
	for ( i = 0; i < n-1; i++ )
	{
		if (arr[i]>arr[i+1])
		{
			var = 1;
			break;
		}
	}
	if (var == 0)
	{
		cout<<"yes"<<"\n";
		cout<<"1"<<"\t"<<"1"<<"\n";
	}
	else
	{
		var = 0;
		for ( i = 0; i < n-1; i++ )
		{
			if (arr[i]>arr[i+1])
			{
				l = i;
				break;
			}
		}
		for ( i = n-1; i > 0; i-- )
		{
			if (arr[i-1]>arr[i])
			{
				r = i;
				break;
			}
		}
		
		le = l;
		re = r;
		//cout<<le<<"\t"<<re<<"\n";
		while (l < r)
		{
			temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
			l++;
			r--;
		}
		//for ( i = 0; i < n; i++ )
		//	cout<<arr[i]<<"\t";
		//cout<<"\n";
		for ( i = 0; i < n-1; i++ )
		{
			if (arr[i] > arr[i+1])
			{
				var = 1;
				break;
			}
		}
		if ( var == 0 )
			{
				cout<<"yes\n";
				cout<<le+1<<"\t"<<re+1<<"\n";
			}	//cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}