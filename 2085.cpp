#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)

ll fnt(ll x)
{
	if (x < 10) return x;
	ll y = 0;
	while (x) {
		y += x%10;
		x /= 10;
	}
	return fnt(y);
}

int main()
{
	ll x, i;
	string s;
	while (1) {
		cin >> s;
		if (s[0] == '0') {
			break;
		}
		x = 0;
		for (i = 0; s[i]; ++i) x += s[i]-'0';
		printf("%lld\n", fnt(x));
	}

	return 0;
}
