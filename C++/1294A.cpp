#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void test_case()
{
	int kids[3], n;
	scanf("%d %d %d %d", &kids[0], &kids[1], &kids[2], &n);

	sort(kids, kids + 3);

	int difference = (kids[2] - kids[1]) + (kids[2] - kids[0]);

	if (n >= difference)
	{
		n -= difference;

		if (n % 3 == 0)
		{
			yes;
			return;
		}
	}

	no;
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int z = 1; z <= T; z++)
	{
		test_case();
	}

	return 0;
}
