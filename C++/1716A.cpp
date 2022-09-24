#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(){
    int i, sol;
    scanf("%d", &i);

    if(i == 1){
        cout << 2 << '\n';
        return;
    }

    if(i%3 !=0){
        sol = i/3 + 1;
    }else{
        sol = i/3;
    }

    cout << sol << '\n';
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}

	return 0;
}
