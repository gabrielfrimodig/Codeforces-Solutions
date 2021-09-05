#include <bits/stdc++.h>
using namespace std;

int main(){
	char input[101];
	cin >> input;
	
	unordered_map<char, int> m;
	
	int i = 0;
	while(input[i] != '\0'){
		m[input[i]]++;
		i++;
	}
	
	if(m.size() % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	
	return 0;
}
