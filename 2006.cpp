#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

char str[100], st;
map <string, int> mp;

int main()
{
	int i, j, k, a, b, c, x, y, z;
	string s, ans;

	x = 0;
	while (scanf("%c", &st) != EOF) {
		if (st == '#') {
			if (x != 0) {
				printf("%4d ", x);
				cout << ans << endl;
			}
			mp.clear();
			x = 0;
		} else {
			if (st >= 'A' && st <= 'Z') 
				st = st - 'A' + 'a';
			if (st >= 'a' && st <= 'z') {
				s += st;
			} else if (s != "") {
				//cout << s << endl;
				if (mp.find(s) == mp.end()) mp[s] = 1;
				else mp[s]++;
				if (mp[s] > x) {
					x = mp[s];
					ans = s;
				}
				s = "";
			}
		}
	}

	return 0;
}
