#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll test_case()
{
    ll n;
    scanf("%lld", &n);

    if (n == 0)
    {
        return 0;
    }

    if (n % 2 == 0)
    {
        return n + 1;
    }
    else
    {
        return (n + 1) / 2;
    }
}

int main()
{

    cout << test_case() << "\n";

    return 0;
}
