#include "Print.h"
#include <cstdio>
using namespace std;

void print(initializer_list<int> ints) {
	for (auto ptr = ints.begin(); ptr != ints.end(); ptr++)  //类似于容器的操作
	{
		if (ptr != ints.begin())printf(" ");
		printf("%d", *ptr);
	}
	printf("\n");
}