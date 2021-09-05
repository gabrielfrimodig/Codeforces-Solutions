#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int array[5][5];
	
	int m = 0, n = 0;
	
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j < 5 ; j++){
			scanf("%d", &(array[i][j]));
			
			if(array[i][j] == 1){
				m = i;
				n = j;
			}
		}
	}
	
	cout << abs(2-m) + abs(n - 2);
	
	return 0;
}
