#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	int a, b, total = 0, max = 0;
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d", &a, &b);

		total -= a;
		total += b;
		
		if(total > max) max = total;
	}
	
	cout << max;
	
	return 0;
}
