#include <cstdio>
#include <algorithm>
using namespace std;
int a[10], ans, rest1, rest6, flag;
int maiin() {
	ans = 0, flag = 1;
	for (int i = 1; i <= 6; i++) {
		scanf("%d", &a[i]);
		if (a[i]) {
			flag = 0;
		}
	}
	for (int i = 2; i <= 5; i++) {
		ans += a[i];
	}
	if (a[1] > a[6]) {
		ans += a[6] * 2;
		rest1 = a[1] - a[6];
		ans += min(rest1, a[3] + a[4] + 2 * a[5] + 3 * a[6] + 1);
	}
	else {
		ans += a[1] * 2;
		rest6 = a[6] - a[1];
		ans += min(rest6, 3 * a[1] + 2 * a[2] + a[3] + a[4] + 1);
	}
	if (!flag) {
		ans = max(1, ans);
	}
	else {
		ans = 0;
	}
	printf("%d", ans);
	return 0;
}





































