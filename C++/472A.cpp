#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		cout << n - 4 << " 4" << endl;
	}
	else
	{
		cout << n - 9 << " 9" << endl;
	}

	return 0;
}
