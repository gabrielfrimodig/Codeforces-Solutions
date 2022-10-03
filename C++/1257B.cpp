#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void test_case(){
    ll x,y;
    scanf("%lld", &x);
    scanf("%lld", &y);

    if (x == y){
        yes;
        return;
    }
    
    if((y<=x || x>3) || (x==2 && y<=3)) yes;
    else no;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}

	return 0;
}
