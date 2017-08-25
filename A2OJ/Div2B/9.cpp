#include <iostream>
#include <string>

using namespace std;
void swapf(int beg, int end);

string a;
int main (void)
{
	//string a;
	cin>>a;
	int len,ng=0,nl=0,i,foo,flag=0,ls,rb;
	len = a.length();
	int val = a[len-1] - '0';
	//cout<<val<<"\n";
	for ( i = 0; i < len; i++ )
	{
		foo = a[i] - '0';
		if ( foo % 2 == 0 )
		{
			flag = 1;
			break;
		}
	}
	if ( flag == 0 )
		cout<<"-1\n";
	else if ( flag == 1 )
	{
		for ( i = 0; i < len; i++ )
		{
			foo = a[i] - '0';
			if ( foo > val && foo%2==0 )
				ng++;	
			else if ( foo < val && foo%2 == 0 )
				nl++;
		}

		if ( (ng == 0) || (ng != 0 && nl != 0) )
		{
			for ( i = 0; i < len; i++ )
			{
				foo = a[i] - '0';
				if ( foo < val && foo%2 == 0 )
				{
					ls = i;
					swapf(ls,len-1);
					break;
				}
			}
		}
		else if ( nl == 0 )
		{
			for ( i = 0; i < len; i++ )
			{
				foo = a[i] - '0';
				if ( foo > val && foo%2 == 0 )
				{
					rb = i;
				}
			}
			swapf(rb,len-1);
		}
	cout<<a<<"\n";
	}
	//cout<<a<<"\n";
	return 0;
}

void swapf(int beg, int end)
{
	swap(a[beg],a[end]);
}