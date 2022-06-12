#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int T;
	scanf("%d", &T);

	int counter = 1, casher = 1;
	int h, m, h0, m0;
	scanf("%d%d", &h0, &m0);

	while (--T)
	{
		scanf("%d%d", &h, &m);
		if (h == h0 && m == m0)
		{
			counter += 1;
			if (counter > casher)
				casher = counter;
		}
		else
		{
			counter = 1;
		}
		h0 = h;
		m0 = m;
	}

	cout << casher << endl;

	return 0;
}
