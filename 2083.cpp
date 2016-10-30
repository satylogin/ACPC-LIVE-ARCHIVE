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
	long double a, b, c, ans, fact = 1;
	char str[20];
	int i, j, len;
	printf("n e\n- -----------\n");
	ans = 0;
	for (i = 0; i < 10; ++i) {
		ans = ans + 1/fact;
		sprintf(str, "%.9Lf", ans);
		len = strlen(str);
		j = len-1;
		while (str[j] == '0') {
			str[j] = '\0';
			j--;
		}
		if (str[j] == '.') str[j] = '\0';
		printf("%d %s\n", i, str);
		fact = fact * (i+1);
	}

	return 0;
}
