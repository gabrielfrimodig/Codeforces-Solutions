#include <bits/stdc++.h>
using namespace std;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int main(){
	int x;
	scanf("%d", &x);

	if(x > 3 && (x-2) % 2 == 0) yes;
	else no;

	return 0;
}
