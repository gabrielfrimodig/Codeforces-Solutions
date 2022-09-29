#include <bits/stdc++.h>
using namespace std;

#define no cout << "No" << endl
#define yes cout << "Yes" << endl

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i < n ; i++){
        cin >> arr[i];
    }
    
    if((n % 2) && (arr[n-1]%2) && (arr[0]%2)) yes;
    else no;

    return 0;
}
