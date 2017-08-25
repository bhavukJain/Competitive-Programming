#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*
int main (void)
{
	long long int n,foo,a,b,suma,sumb,temp1=0,temp2=0,flag,sum;
	cin>>n;
	//vector < pair<int,int> > mypair;
	foo = 0;
	string s;
	suma = 0, sumb = 0,flag = 0,sum=0;
	for ( foo = 0; foo < n; foo++ )
	{
		cin>>a>>b;
		temp1 = sum - b;
		if (temp1 < 0)
			temp1 = temp1*(-1);
		temp2 = sum+a;
		if (temp2 < 0)
			temp2 = (-1)*temp2;
		if (temp1 <= 500)
		{
			sum = sum - b;
			s = s + "G";
		}
		else if (temp2 <= 500)
		{
			sum = sum + a;
			s = s + "A";
		}
		else
		{
			cout<<"-1\n";
			flag = 1;
			break;
		}
		//foo=foo-1;
	}
	if (flag != 1)
		cout<<s<<"\n";
	//cout<<"\n";
	return 0;
}*/

int main() 
{
    //#ifdef myproject
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    //#endif

    int n;
    cin >> n;

    string ans; int sum = 0;

    for ( int i = 0; i < n; i++ )
    {
        int x, y;
        cin >> x >> y;

        if(abs(sum - y) <= 500)
            ans += 'G', sum -= y;
        else
            ans += 'A', sum += x;
    }
    cout << ans << endl;
    return 0;
}