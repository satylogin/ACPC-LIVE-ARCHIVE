#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int main()
{
	int x, y, n;
	scan(n);
	while (n--) {
		scan(y); scan(x);
		if (y == x || y == x+2) {
			if (!(x&1) && !(y&1)) {
				printf("%d\n", x+y);
			} else {
				printf("%d\n", x+y-1);
			}
		} else {
			printf("No Number\n");
		}
	}

	return 0;
}
