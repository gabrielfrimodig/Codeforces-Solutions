#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	
	k = k - 1;
	
	int a[n];
	
	for(int i = 0; i < n ; i++){
		scanf("%d", &a[i]);
	}
	
	if(a[k] == 0){
		while(k >= 1 && a[k-1] == 0){
			k--;
		}
	}else{
		while(k < n && a[k] == a[k+1]){
			k++;
		}
		k = k+1;
	}
	
	cout << k;
	
	return 0;
}
