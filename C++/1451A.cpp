#include <bits/stdc++.h>
using namespace std;

void test_case()
{
	int n, operations;
	scanf("%d", &n);

	operations = 0;

	if (n <= 3)
	{
		operations = n - 1;
	}
	else if (n % 2 == 0)
	{
		operations = 2;
	}
	else
	{
		operations = 3;
	}

	cout << operations << endl;
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
