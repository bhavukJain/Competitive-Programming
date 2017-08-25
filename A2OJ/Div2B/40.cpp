#include <iostream>

using namespace std;

void set (int num);

int k = 1000005;
bool arr[1000005]={0};
	
int main (void)
{
	int i;
	for ( i = 2; i < k; i++ )
	{
		if (arr[i] == 0)
		{
			set(i);
		}
	}
	int n;
	cin>>n;
	while ( n != 0 )
	{
		if (n == 1)
		{
			cout<<"1";
			break;
		}
		else if (arr[n] == 0)
		{
			cout<<n<<"\t1"<<"\n";
			break;
		}
		else
		{
			cout<<n<<"\t";
		}
		n = n/2;
	}
}

void set (int num)
{
	int i = 2;
	while ((i*num) < k)
	{
		arr[i*num] = 1;
		i++;
	}
}
