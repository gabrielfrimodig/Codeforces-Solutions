#include <bits/stdc++.h>
using namespace std;

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	
	if(N <= 1){
		cout << 0;
	}else{
		if(N % 2 == 0) cout << (N/2) * M;
		else cout << (N-1)/2 * M + M/2;
	}
	
	return 0;
}
