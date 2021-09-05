#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	scanf("%d", &T);

	int total = 0;
	char in[4];

	while(T--){
		scanf("%s", in);

		if((in[0] == '+' && in[1] == '+') || (in[1] == '+' && in[2] == '+')){
			total++;
		}else{
			total--;
		}
	}

	cout << total;

	return 0;
}
