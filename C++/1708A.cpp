#include <bits/stdc++.h>
using namespace std;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void test_case(){
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    if(str == "YES")  yes;
    else  no;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}

	return 0;
}
