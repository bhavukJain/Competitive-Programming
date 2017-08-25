#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
#define CONST 1000003
using namespace std;

unsigned long long convertfunc(string foo);
unsigned long long custompow (int base, int exp);
int main (void)
{
	unordered_map<char,string> mymap;
	string s,news;
	mymap['>'] = "1000";
	mymap['<'] = "1001";
	mymap['+'] = "1010";
	mymap['-'] = "1011";
	mymap['.'] = "1100";
	mymap[','] = "1101";
	mymap['['] = "1110";
	mymap[']'] = "1111";
	cin>>s;
	int i = 0;
	int len = s.length();
	while ( i != len )
	{
		char a = s[i];
		news = news + mymap[a];
		i++;
	}
	unsigned long long ans = convertfunc (news);
	cout<<ans%CONST<<"\n";
	return 0;
}

unsigned long long convertfunc(string foo)
{
	reverse(foo.begin(),foo.end());
	string mystr = foo;
	int len = mystr.length();
	int i = 0;
	unsigned long long val = 0;
	while ( i != len )
	{
		char b = mystr[i];
		if (b == '1')
		{
			val = val + custompow(2,i);
			//if (val > CONST)
			//	val = val%CONST;
		}
		i++;
	}
	return val;
}

unsigned long long int custompow (int base, int exp)
{
	long long int res;
	if (exp == 0)
		return 1;
	else if (exp%2 == 0)
	{
		res = pow(custompow(base,exp/2),2);
		if (res > CONST)
			res = res%CONST;
		return res;
	}
	else
	{
		res = base*pow(custompow(base,(exp-1)/2),2);
		if (res > CONST)
			res = res%CONST;
		return res;
	}
	//return res;
}