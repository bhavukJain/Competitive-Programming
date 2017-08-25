#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (void)
{
	long long int temp,n,foo1=0,foo2=0,i,j;
	cin>>n;
	vector<long long> a;
	vector<long long> b;
	while (n != 0)
	{
		cin>>temp;
		if (temp < 0)
		{
			
			a.push_back(-1*temp);
			foo1 = foo1 + (-1*temp);
		}
		else 
		{
			b.push_back(temp);
			foo2 = foo2 + temp;
		}
		n--;
	}
	if (foo1 > foo2)
		cout<<"second\n";
	else if (foo2 > foo1)
		cout<<"first\n";
	else if (foo1 == foo2)
	{
		i = 0, j = 0;
		while ( i < a.size() && j < b.size() )
		{
			if (a[i] == b[j])
			{
				i++;
				j++;
			}
			else if (a[i] > b[j])
			{
				cout<<"second\n";
				break;
			}
			else
			{
				cout<<"first\n";
				break;
			}
		}
		if ( i == a.size() || j == b.size() )
		{
			if (temp < 0)
				cout<<"second\n";
			else
				cout<<"first\n";
		}
	}
	return 0;	
}