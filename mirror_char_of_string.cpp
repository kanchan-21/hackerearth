#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	string r="zyxwvutsrqponmlkjihgfedcba";
	for(int i=0;i<s.length();i++)s[i]=r[s[i]-'a'];
	
	cout<<s;
	return 0;
}
