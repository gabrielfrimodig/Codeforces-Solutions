#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NET" << endl
#define yes cout << "DA" << endl

void test_case(){
	string s;
	cin >> s;
	
	int zero=0, one=0;
	for(auto i:s){
		if(i=='0') zero++;
		else one++;
	}
	if(min(zero,one) % 2 == 0) no;
	else yes;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}

	return 0;
}
