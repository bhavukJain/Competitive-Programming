//This is basically a windowing problem

#include <iostream>
#include <cstdio>
using namespace std;
int calccount (int beg, int end);
int arr[100005]={0};

int main (void)
{
	int n,t,temp;
	cin>>n>>t;
	int i;
	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&arr[i]);
	}
	int count = 0;
	temp = count;
	int front = 0;
	int back = 0;
	int sum = 0;
	while (front < n)
	{
		sum = sum + arr[front];
		temp = calccount(back,front);
		if (sum <= t)
			front = front + 1;
		else if (sum > t)
		{
			while (sum > t)
			{
				sum = sum - arr[back];
				back = back+1;
                if (temp > 0)
                	temp = temp - 1;
			}
			front = front + 1;
		}
		if ( temp > count )
			count = temp;
	}
	printf("%d\n",count);
	return 0;
}

int calccount (int beg, int end)
{
	int foo = end - beg+1;
	return foo;
}