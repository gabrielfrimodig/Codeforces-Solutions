#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	int total = 0;
	scanf("%d", &T);
	
	while(T--){
		int x,y,z;
		scanf("%d%d%d", &x, &y, &z);
		
		if((x == 1 && y == 1) || (x == 1 && z == 1) || (y == 1 && z == 1)){
			total++;
		}
	}
	
	cout << total;
	
	return 0;
}
