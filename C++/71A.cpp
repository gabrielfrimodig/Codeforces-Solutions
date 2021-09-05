#include <bits/stdc++.h>
using namespace std;

void test_case(){
	char w [101];
	scanf("%s", w);
	
	int i = 0;
	while(w[i] != '\0'){
		i++;
	}
	
	if(i < 11){
		cout << w << endl;
	}else{
		cout << w[0] << i-2 << w[i-1] << endl;
	}
	
}

int main(){
	int T;
	scanf("%d", &T);
	for(int z = 1; z <= T; z++) {
		test_case();
	}
	
	return 0;
}
