#include <iostream>
#include <algorithm>
using namespace std;

int main (void)
{
	int max=-1,arr[26],temp[26],val=0,index,len;
	string s;
	cin>>s;
	int k,i;
	cin>>k;
	for ( i = 0;i < 26; i++ )
	{
		cin>>arr[i];
		temp[i] = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	len = s.length();
	for ( i = 0; i < len; i++ )
	{
		char c = s[i];
		index = (int)c - 97;
		val = val + (i+1)*temp[index];
	}
	//sort(arr,arr+26,greater<int>());
	for ( i = 0; i < k; i++ )
	{
		val = val + max*(len+i+1);
	}
	cout<<val<<"\n";
	return 0;

}