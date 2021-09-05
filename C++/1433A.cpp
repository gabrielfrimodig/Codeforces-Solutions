#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int test_case(){
	ll x;
	scanf("%lld", &x);

	ll ans = 10 * ((x % 10) - 1) + (x / 1 > 0) + 2*(x / 10 > 0) + 3*(x / 100 > 0) + 4*(x / 1000 > 0);

	return ans;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		cout << test_case() << endl;
	}

	return 0;
}
