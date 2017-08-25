#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int arr[3050];

int binaryse(int low, int high, int num);
int main (void)
{
	//int temp[3050]={0};
	int m,n,i,searcha,searchb,searchc;
	cin>>n>>m;
	for ( i = 0; i < m; i++ )
	{
		cin>>arr[i];
	}
	int flag = 0;
	searcha = binaryse(0,m-1,1);
	searchb = binaryse(0,m-1,n);
	if ( searcha != -1 || searchb != -1)
	{
		flag = 1;
		cout<<"NO\n";
		return 0;
	}
	sort(arr,arr+m);
	if (flag != 1)
	{
		for ( i = 0; i < m; i++ )
		{
			int temp = arr[i];
			searcha = binaryse(0,m-1,temp+1);
			searchb = binaryse(0,m-1,temp+2);
			//searchc = binaryse(0,m-1,temp+3);
			if (searcha != -1 && searchb != -1 )
			{
				cout<<"NO\n";
				return 0;
			}
		}
		cout<<"YES\n";
		return 0;
	}
}

int binaryse(int low, int high, int num)
{
	if (low > high)
		return -1;
	else
	{
		int mid = (low+high)/2;
		if (arr[mid] == num)
			return mid;
		else if (arr[mid] > num)
		{
			return binaryse(low,mid-1,num);
		}
		else
			return binaryse(mid+1,high,num);
	}
}