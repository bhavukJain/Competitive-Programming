#include <iostream>
#include <cmath>
#include <unordered_map>
#define NUMB 1000000

void mark (long long int n,long long int lar);
void calc(long long int num);
//bool binar (long long int val,long long int beg,long long int end);

using namespace std;

int arr[NUMB]={0}; // the bool array in which 0 or 1 is stored 
long long int pri[NUMB];   // for storing the final prime numbers
int main (void) 
{
	long long int j=0,i,n,foo,temp;
	unordered_map <long long int,bool> myhash;
	long long int inpu[100000]; 
	cin>>n;
	for ( i = 0; i < n; i++ )
		cin>>inpu[i];    // the array containing the input numbers
	calc(NUMB); // function for seive of erastothenes
	for ( i = 2; i < NUMB; i++ )
	{
		if (arr[i] == 0)
		{
			myhash.emplace(i,true);
		}
		else
			myhash.emplace(i,false);
	}
	//cout<<"The prime numbers are\n";
	//for ( i = 0; i < j; i++ )
	//	cout<<pri[i]<<"\n";
	for ( i = 0; i < n; i++ )
	{
		foo = sqrt(inpu[i]);
		//cout<<foo<<"\n";
		//bool va = binar(foo,0,j-1); // here j contains the final size of the prime numbers array
		if (myhash[foo] == true)
		{
			temp = foo*foo;
			if ( temp == inpu[i] )
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}

void calc(long long int num)
{
	int i;
	if ( num >= 2 )
	{
		for ( i = 2; i <= num; i++ )
		{
			if (arr[i] == 0)
			{
				//cout<<arr[i]<<"\n";
				mark(i,num);
			}
		}
	}
}

void mark (long long int n,long long int lar)
{
	int i = 2;
	while ((i*n) <= lar)
	{
		arr[i*n] = 1;
		i++;
	}
}

/*bool binar (long long int val,long long int beg,long long int end)
{	
	int mid = (beg+end)/2;
	if (pri[mid] == val)
		return true;
	else if (pri[mid] > val)
		return	binar(val,beg,mid-1);
	else if (pri[mid] < val)
		return binar(val,mid+1,end);
	return false;

}*/