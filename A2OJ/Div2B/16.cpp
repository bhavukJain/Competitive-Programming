#include <iostream>

using namespace std;

bool checksub( string s1, string s2 );

int main (void)
{
	string s1,s2;
	int flag = 0;
	int arr1[256]={0},arr2[256]={0};
	cin>>s1>>s2;
	//cout<<arr1[0];
	int len1 = s1.length();
	int len2 = s2.length();
	int i;
	for ( i = 0; i < len1; i++ )
	{
		int val = (int)s1[i];
		arr1[val]++;
	}
	for ( i = 0; i < len2; i++ )
	{
		int val2 = (int)s2[i];
		//cout<<val2<<"\n";
		arr2[val2]++;
	}
	for ( i = 0; i < 256; i++ )
	{
		if (arr2[i] != 0 && arr2[i] > arr1[i])
		{
			flag = 1;
			break;
		}

	}
	if ( flag == 1 )
		cout<<"need tree\n";
	else
	{
		int flag1 = 0;
		if (len1 == len2)
		{
			flag1 = 1;
			//cout<<"I am here\n";
			cout<<"array\n";
		}
		if ( flag1 == 0 )
		{
			bool var = checksub(s1,s2);
			if (var == true)
				cout<<"automaton\n";
			else
				cout<<"both\n";
				
		}
	}
	return 0;
}

bool checksub( string s1, string s2 )
{
	int i = 0,j=0;
	bool var = true;
	size_t found = -1;
	for ( i = 0; i < s2.size(); i++ )
	{
		found = s1.find(s2[i],found+1);
		if ( found == string::npos )
		{
			var = false;
			break;
		}	//var = false;
	}
	return var;
}