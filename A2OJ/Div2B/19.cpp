// Not done by me (Weird Question)
#include <iostream>
#include <fstream>

using namespace std;

int a, b, c;
int m[100001];
int n[100001];
int nom[100001];

int main(){
    cin >> a;
    for(int i = 0; i < a; ++i){
	cin >> m[i] >> n[i];
	nom[m[i]]++;
    }
    for(int i = 0; i < a; ++i){
	cout << (a - 1) + nom[n[i]] << ' ' << (a - 1) - nom[n[i]] << "\n";
    }
  
    return 0;
}