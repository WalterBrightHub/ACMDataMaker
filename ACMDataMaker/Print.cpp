#include "Print.h"
#include <cstdio>
using namespace std;

void print(initializer_list<int> ints) {
	for (auto ptr = ints.begin(); ptr != ints.end(); ptr++)  //�����������Ĳ���
	{
		if (ptr != ints.begin())printf(" ");
		printf("%d", *ptr);
	}
	printf("\n");
}