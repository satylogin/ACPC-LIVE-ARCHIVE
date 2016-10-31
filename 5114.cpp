#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int arr[1000000];

int main()
{
	int t, n, m, i, j, k, x, y, a, b;
	
	scan(t);	
	while (t--) {
		scanf("%d %d", &n, &k);
		for (i = 0; i < n; ++i) {
			scan(arr[i]);
		}
		sort(arr, arr+n);
		a = MOD;
		for (j = k-1; j < n; ++j) {
			if (arr[j] - arr[j-k+1] < a) {
				a = arr[j] - arr[j-k+1];
			}
		}
		printf("%d\n", a);
	}

	return 0;
}
