#include <bits/stdc++.h>
using namespace std;

int main(){
	char input[101];
	cin >> input;
	
	int one = 0, two = 0, three = 0, j = 0, total = 0;
	
	while(input[j] != '\0'){
		if(input[j] == '1'){
			 one++;
			 total++;
		 } else if(input[j] == '2'){
			 two++;
			 total++;
		 } else if(input[j] == '3'){
			 three++;
			 total++;
		 }
		
		j++;
	}
	
	for(int i = 0 ; i < one ; i++){
		cout << 1;
		total--;
		if(total != 0) cout << "+";
	}
	for(int i = 0 ; i < two ; i++){
		cout << 2;
		total--;
		if(total != 0) cout << "+";
	}
	for(int i = 0 ; i < three ; i++){
		cout << 3;
		total--;
		if(total != 0) cout << "+";
	}
	
	return 0;
}
