#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total_step = 0;
	scanf("%d", &n);
	
	while(n > 5){
		total_step++;
		n -= 5;
	}
	
	total_step++;
	
	cout << total_step;
		
	return 0;
}
