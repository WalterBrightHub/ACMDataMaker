
#include <iostream>
using namespace std;
typedef long long ll;
ll gccd(ll a, ll b)
{
	return a % b == 0 ? b : gccd(b, a%b);
}
int maiin()
{
	int n;
	while (scanf("%d", &n) == 1 && n) {
		ll ans, x;
		scanf("%lld", &ans);
		--n;
		while (n--) {
			scanf("%lld", &x);
			ans = ans * x / (gccd(ans, x));
		}
		if (ans >= 1000000) puts("Too much money to pay!");
		else printf("The CEO must bring %lld pounds.\n", ans);
	}
	return 0;
}