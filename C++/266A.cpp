#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	char input[n+1];
	cin >> input;
	
	char tmp = input[0];
	int total = 0;
	
	for(int i = 0 ; i < n-1 ; i++){
		if(tmp == input[i+1]) total++;
		tmp = input[i+1];
	}
	
	cout << total;
	
	return 0;
}
