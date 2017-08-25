#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main (void)
{
	string s;
	cin>>s;
	unordered_map<char,int> mymap;
	int len = s.length();
	int i = 0,res1=0,res2=0;
	while ( i != len )
	{
		char a = s[i];
		if (mymap.find(a) == mymap.end())
		{
			mymap[a] = 1;
		}
		else
			mymap[a]++;
		i++;
	}
	if (mymap.find('4') != mymap.end())
	{
		res1 = mymap['4'];
	}
	if (mymap.find('7') != mymap.end())
	{
		res2 = mymap['7'];
	}
	if (res1 == 0 && res2 == 0)
		cout<<"-1"<<"\n";
	else if (res1 >= res2)
	{
		cout<<"4"<<"\n";
	}
	else if (res2 > res1)
	{
		cout<<"7"<<"\n";
	}

	return 0;

}