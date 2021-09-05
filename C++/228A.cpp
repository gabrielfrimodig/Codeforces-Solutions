#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){	
	ll s1;
	set<ll> s;
	
	for(int i = 0 ; i < 4 ; i++){
		scanf("%lld", &s1);
		s.insert(s1);
	}
	
	cout << 4 - s.size() << endl;
	
	return 0;
}
