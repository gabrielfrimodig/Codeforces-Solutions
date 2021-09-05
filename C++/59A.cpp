#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	cin >> in;
	
	int i = 0, lower = 0, upper = 0;
	while(in[i] != '\0'){
		if(isupper(in[i])) upper++;
		else lower++;
		i++;
	}
	
	if(upper > lower){
		for_each(in.begin(), in.end(), [](char & c){
			c = ::toupper(c);
		});
	}else{
		for_each(in.begin(), in.end(), [](char & c){
			c = ::tolower(c);
		});
	}
	
	cout << in;
	
	return 0;
}
