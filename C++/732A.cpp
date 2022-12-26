#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int main(){
	int k, r;
	scanf("%d%d", &k, &r);
    
    int n = 1;
    while(true){
        int cost = n * k;
        if(cost % 10 == 0 || cost % 10 == r){
            cout << n << "\n";
            break;
        }
        n++;
    }
	return 0;
}
