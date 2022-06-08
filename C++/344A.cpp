#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, reference, counter = 0;
	scanf("%d, %d", &n, &reference);

	for (int i = 0; i <= n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		if (reference != tmp)
		{
			counter++;
			reference = tmp;
		}
	}

	cout << counter << endl;

	return 0;
}
