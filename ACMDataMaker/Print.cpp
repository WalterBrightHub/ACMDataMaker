#include "Print.h"
#include <cstdio>
#include <set>
using namespace std;

void print(initializer_list<int> ints) {
	for (auto ptr = ints.begin(); ptr != ints.end(); ptr++)  //类似于容器的操作
	{
		if (ptr != ints.begin())printf(" ");
		printf("%d", *ptr);
	}
	printf("\n");
}


void printPer(set<int> S) {
	set<int>::iterator it = S.end();
	it--;
	for (; it != S.begin(); it--) {
		printf("%d\n", *it);
	}
	printf("%d\n", *it);
}