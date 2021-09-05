#include <bits/stdc++.h>
using namespace std;

void test_case(int n, string s){
	int anton = 0, danik = 0;
	
	for(int i = 0 ; i < n ; i++){
		if(s[i] == 'A') anton++;
		else danik++;
	}
	
	if(anton > danik){
		cout << "Anton";
		return;
	}else if(danik > anton){
		cout << "Danik";
		return;
	}
	
	cout << "Friendship";
}

int main(){
	int n;
	scanf("%d", &n);
	
	string s;
	
	cin >> s;
	
	test_case(n, s);
	
	return 0;
}
