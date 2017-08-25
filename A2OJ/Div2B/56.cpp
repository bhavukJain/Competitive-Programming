#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main (void)
{
	string str;
	cin>>str;
	int len = str.length();
	int i = 0;
	int flag = 0;
	if (str[0] == '-')
	{
		cout<<"($";
		i++;
		flag = 1;
	}
	else
	{
		cout<<"$";
		flag = 0;
	}
	int j = 0;
	int var = 0;
	int temp = 0;
	int k = 0;
	int posd;
	while ( k != len )
	{
		if (str[k] == '.')
		{
			var = 1;
			posd = k;
			break;
		}
		else
			k++;
	}
	while ( k != 0 )
	{
		if (j == 3)
		{
			cout<<",";
			j = 0;
		}
		else
		{
			j++;
			cout<<str[i];
			i++;
			k--;
		}
	}
	if (var == 1)
	{
		cout<<".";
		posd++;
		while (posd != len && temp != 2)
		{
			cout<<str[posd];
			posd++;
			temp++;
		}
		if (temp != 2)
		{
			while (temp != 2)
			{
				cout<<"0";
				temp++;
			}
		}
	}
	else if (var == 0)
	{
		cout<<"00";
	}
	if (flag == 1)
		cout<<")\n";

	return 0;
}	
	