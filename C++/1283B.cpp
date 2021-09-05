#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    ll T;
	scanf("%lld", &T);

    while (T--){
        ll a, b;
        scanf("%lld %lld",&a,&b);

        ll ans = a/b;
        ans *= b;
        ll ext = b/2;

        ll dif = a - ans;

        ans += min(ext, dif);

        cout << ans << endl;
    }
}
