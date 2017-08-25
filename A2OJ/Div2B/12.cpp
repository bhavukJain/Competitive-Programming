#include <iostream>

using namespace std;

void shift(int total);
bool check (int n);
int arr[100000];
int main (void)
{
	int foo,n,i,flag=0,count=0,flag1,index;
	cin>>n;
	for ( i = 0; i < n; i++ )
	{
		cin>>foo;
		arr[i] = foo;
	}
	for ( i = 0; i < n-1; i++ )
	{
		if (arr[i] > arr[i+1])
		{
			flag = 1;
			break;
		}	
	}
	if ( flag == 0 )
		cout<<"0\n";
	else
	{
		flag1 = 0;
		for ( i = 0; i < n-1; i++ )
		{
			if (arr[i] > arr[i+1])
			{
				index = i;
				break;
			}
		}
		for ( i = index+1; i < n-1; i++ )
		{
			if (arr[i] > arr[i+1])
			{
				cout<<"-1\n";
				flag1 = 1;
				break;
			}
		}
		//cout<<index<<"\n";
		if ( flag1 == 0 )
		{
			if (arr[n-1] <= arr[0])
			{
				cout<<n-index-1<<"\n";
			}
			else
				cout<<"-1\n";
		}
	}
	return 0;
}
