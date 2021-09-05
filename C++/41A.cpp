#include <bits/stdc++.h>
using namespace std;

void test_case(string s, string t){
	
	if(s.length() != t.length()){
		cout << "NO";
		return;
	}
	
	int x = s.length();
	
	for(int i = 0 ; i < x ; i++){
		if(s[i] != t[x-(i+1)]){
			cout << "NO";
			return;
		}
	}
	
	cout << "YES";
}

int main(){
	string s, t;
	
	cin >> s;
	cin >> t;
	
	test_case(s, t);
	
	return 0;
}
