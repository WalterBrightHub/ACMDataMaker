#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int maiin()
{
	int h, a, b, t;
	//while (~scanf("%d %d %d %d", &h, &a, &b, &t)) {
	while (cin >> h >> a >> b >> t) {
		int sum = 0, k = 0;
		if (a == b) {
			printf(a >= h ? "yes\n" : "no\n");
		}
		else {
			while (k<h) {
				k += a;
				sum++;
				if (k >= h) {
					break;
				}
				k -= b;
				sum++;
			}
			printf(sum <= t ? "yes\n" : "no\n");
		}
	}
	return 0;
}



