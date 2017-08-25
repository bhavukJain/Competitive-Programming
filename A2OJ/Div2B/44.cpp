#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main (void)
{
	int n,pos,i,temp;
	cin>>n;
	int k = 0;
	string res = "";
	temp = 0;
	while ( k < n )
	{
		char z = temp + 'a';
		res = res + z;
		temp = (temp+1)%4;
		k++;
	}
	cout<<res<<"\n";
	return 0;
}