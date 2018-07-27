#include "Random.h"
int getIntRandom() {
	int res = 0;
	for (int i = 0; i<30; i++) {
		res <<= 1;
		res += rand() % 2;
	}
	return res;
}

int getRandom(int min, int max) {
	int len = max - min + 1;
	int res = getIntRandom() % len + min;
	return res;
}

bool isLucky(int percent) {
	int lucky = getRandom(0, 100);
	return lucky <= percent;
}

set<int> diffRandom(int min, int max, unsigned int count) {
	set<int> S;
	while (S.size()<count) {
		S.insert(getRandom(min, max));
	}
	return S;
}

pair<int, int> twinRandom(int min, int max) {
	int a, b;
	a = getRandom(min, max);
	do {
		b = getRandom(min, max);
	} while (a == b);
	if (a>b)swap(a, b);
	return pair<int, int>(a, b);
}


bool RandomCmp(const char &t1, const char &t2) {
	return true;
}
string getRandomString(int len) {
	string s = "";
	for (int i = 0; i<len; i++) {
		s += char(getRandom(0, 25) + 'a');
	}
	return s;
}

set<int> getRandomInts(int min, int max, unsigned int count) {
	set<int>S;
	while (S.size()<count) {
		S.insert(getRandom(min, max));
	}
	return S;
}


vector<string> getRandomStrings(int count,int len) {
	vector<string> v(count);
	string s;
	for (int i = 0; i<count; i++) {
		s = "";
		for (int j = 0; j<len; j++) {
			s += char(getRandom(0, 25) + 'a');
		}
		v[i] = s;
	}
	return v;
}
//平面上n个不同的点 
set<pair<int, int>> getRandomIntPoint(int minX, int maxX, int minY, int maxY, unsigned int count) {
	set<pair<int, int>>S;
	int x, y;
	while (S.size()<count) {
		x = getRandom(minX, maxX);
		y = getRandom(minY, maxY);
		S.insert(pair<int, int>(x, y));
	}
	return S;
}
void print(map<int, int> M) {
	map<int, int>::iterator it = M.begin();
	for (; it != M.end(); it++) {
		printf("%d %d\n", it->first, it->second);
	}
}


//n个点,标记为1~n的点集中不同的count条路径
set<pair<int, int>> getRandomIntRoute(int n, unsigned int count) {
	set<pair<int, int>> S;
	int x, y;
	while (S.size()<count) {
		S.insert(twinRandom(1, n));
	}
	return S;
}


