#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);

	cout << min(n - a, ++b) << endl;

	return 0;
}
