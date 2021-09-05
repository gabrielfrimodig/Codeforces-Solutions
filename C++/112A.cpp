#include <bits/stdc++.h>
using namespace std;

int main(){
	string first, second;
	
	cin >> first;
	cin >> second;
	
	for_each(first.begin(), first.end(), [](char & c) {
        c = ::toupper(c);
    });
    
    for_each(second.begin(), second.end(), [](char & c) {
        c = ::toupper(c);
    });
    
    if(first > second) cout << 1;
	else if(second > first) cout << -1;
	else cout << 0;
	
	return 0;
}
