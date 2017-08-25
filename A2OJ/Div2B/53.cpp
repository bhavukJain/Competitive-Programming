#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <utility>

using namespace std;
string myfunc (string str);
struct comp
{
    bool operator () (const pair<string,int> &a, pair <string,int> &b)
    {
        if (a.second < b.second)
            return true;
        else
            return false;
    }
};
int main (void)
{
    int n;
    string name;
    string str1;
    string str;
    cin>>n;
    //string s[101][3];
    //string st[101];
    unordered_map<string,vector<int> > mymap;
    unordered_map<string,int> mymap1;
    vector<pair<string,int> > myvec1;
    vector<pair<string,int> > myvec2;
    vector<pair<string,int> > myvec3;
    int foo = 0;
    int bar = n;
    while (n != 0)
    {
        int x;
        cin>>x;
        cin>>name;
        foo++;
        //st[foo] = name;
        int counta=0,countb=0,countc=0;
        while ( x != 0 )
        {
            cin>>str1;
            //foo++;
            //counta = 0;
            //countb = 0;
            //countc = 0;
            string str = myfunc(str1);
            //cout<<str<<"\n";
            auto bt = str.begin();
            int flag = 0;
            string::iterator it = bt+1;
            while (it != str.end())
            {
                
                if (*bt != *it)
                {
                    flag = 1;
                    break;
                }
                it++;
                bt++;
            }
            bt = str.begin();
            it = bt+1;
            if (flag == 1)
            {
                while (it != str.end())
                {
                    if (*it >= *bt)
                    {
                        flag = 2;
                        break;
                    }
                    it++;
                    bt++;
                }
            }
            if (flag == 2)
                countc++;
            else if (flag == 1)
                countb++;
            else
                counta++;
            x--;
        }
        mymap[name].push_back(counta);
        mymap[name].push_back(countb);
        mymap[name].push_back(countc);
        mymap1[name] = foo;
        //int val = max(counta,max(countb,countc));
        n--;
        //mymap1[name] = false;
    }
    int ans1 = INT_MIN;
    int ans2 = INT_MIN;
    int ans3 = INT_MIN;
    auto zt = mymap.begin();
    while (zt != mymap.end())
    {
        if (zt->second[0] > ans1)
            ans1 = zt->second[0];
        if (zt->second[1] > ans2)
            ans2 = zt->second[1];
        if (zt->second[2] > ans3)
            ans3 = zt->second[2];
        zt++;
    }
    auto pt = mymap.begin();
    while (pt != mymap.end())
    {
        if (pt->second[0] == ans1)
        {
            myvec1.push_back(make_pair(pt->first,mymap1[pt->first]));
            //mymap1[pt->first] = true;
        }
        if (pt->second[1] == ans2)
        {
            myvec2.push_back(make_pair(pt->first,mymap1[pt->first]));
            //mymap1[pt->first] = true;
        }
        if (pt->second[2] == ans3)
        {
            myvec3.push_back(make_pair(pt->first,mymap1[pt->first]));
            //mymap1[pt->first] = true;
        }
        pt++;
    }
    cout<<"If you want to call a taxi, you should call: ";
    //reverse(myvec1.begin(),myvec1.end());
    sort(myvec1.begin(),myvec1.end(),comp());
    auto it1 = myvec1.begin();
    cout<<it1->first;
    //mymap1[*it1] = true;
    it1 = it1 + 1;
    while (it1 != myvec1.end())
    {
        cout<<", "<<it1->first;
        // mymap1[*it1] = true;
        it1++;
    }
    //cout<<*it1;
    cout<<".\n";
    cout<<"If you want to order a pizza, you should call: ";
    //reverse(myvec2.begin(),myvec2.end());
    sort(myvec2.begin(),myvec2.end(),comp());
    auto it2 = myvec2.begin();
    cout<<it2->first;
    //mymap1[*it2] = true;
    it2 = it2 + 1;
    while (it2 != myvec2.end())
    {
        
        cout<<", "<<it2->first;
        // mymap1[*it2] = true;
        it2++;
    }
    //cout<<*it2;
    cout<<".\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    //reverse(myvec3.begin(),myvec3.end());
    sort(myvec3.begin(),myvec3.end(),comp());
    auto it3 = myvec3.begin();
    cout<<it3->first;
    //mymap1[*it3] = true;
    it3 = it3+1;
    while (it3 != myvec3.end())
    {
        
        cout<<", "<<it3->first;
        //    mymap1[*it3] = true;
        
        it3++;
    }
    //cout<<*it3;
    cout<<".\n";
    return 0;
}

string myfunc (string str)
{
    string foo = "";
    auto it = str.begin();
    while (it != str.end())
    {
        if (*it != '-')
        {
            char ch = *it;
            string s(1,ch);
            foo = foo + s;
        }
        it++;
    }
    return foo;
}