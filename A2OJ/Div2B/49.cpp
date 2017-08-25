#include <iostream>
#include <string>
#include <unordered_map>
//#include <cstdlib>
#include <cstdio>
using namespace std;

int main (void)
{
	int n,k;
	cin>>n>>k;
	//unordered_map<int,bool> mymap;
	string k = "";
	char temp[100000];
	int foo = n-k;
	if (n == k)
	{
		cout<<"-1\n";
		return 0;
	}
	sprintf(foo,"%d",temp);
	string z(temp);
	k = k + z;
	foo = 1;
	int val = 2;
	int count = n-k;
	while (foo <= n-k)
	{
		sprintf(val,"%d",temp);
		string z(temp);
		k = k + z;
		foo = foo+1;
	}
	int bar = 0;
	while (bar < count)
	{
		sprintf(foo,"%d",temp);
		string z(temp);
		k = k + z;
		bar = bar+1;
	}
	cout<<k<<"\n";
	return 0;
}
