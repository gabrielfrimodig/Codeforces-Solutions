#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void test_case(){
    int n;
    scanf("%d", &n);

    string str;
    cin >> str;

    sort(str.begin(), str.end());

    if(str == "Timru") yes; else no;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}

	return 0;
}
