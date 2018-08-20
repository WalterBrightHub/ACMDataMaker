#include "In.h"

typedef long long LL;
typedef unsigned long long ULL;

void makeIn(int ccc) {
	int T, n, m, a, b, c, d, k, s, t, tim, u, v, l, r, h, p, x, y, q,g;
	double xx, yy, zz, rr;
	//make vs happy
	T, n, m, a, b, c, d, k, s, t, tim, u, v, l, r, h, p, x, y, q, xx, yy, zz, rr;
	pair<int, int>ab, uv, ac;
	srand((ULL)new char);
	//T = getRandom(5000, 10000);
	T=1;
	//printf("%d\n",T);
	//print({ T });
	
	for (int cc = 0; cc < T; cc++) {
		if (ccc == 1) {
			printf("1 1 1 1 1 1");
		}
		else if (ccc == 2) {
			printf("0 0 0 0 0 0");
		}
		else if (ccc == 3) {
			printf("0 0 1 0 0 0");
		}
		else if (ccc == 4) {
			printf("0 0 0 0 0 1");
		}
		else if(ccc<=7){
			for (int i = 0; i < 6; i++) {
				if (i)printf(" ");
				printf("%d", getRandom(100, 1000000));
			}
		}
		else {
			printf("%d", getRandom(100000, 1000000));
			for (int i = 1; i < 5; i++) {
				printf(" %d", getRandom(10, 100));
			}
			printf(" %d", getRandom(100000, 1000000));
		}

	}

	//printf("\n");
	//print({ 0,0,0 });
	


		

}
