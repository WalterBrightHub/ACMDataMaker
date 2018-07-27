#pragma once
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <ctime>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
//获取[min,max]内的一个随机数
int getRandom(int min, int max);

//有percent %的几率返回true
bool isLucky(int percent);

//获取[min,max]内的count个不同随机数的集合
set<int> diffRandom(int min, int max, unsigned int count);

//获取[min,max]内的2个不同随机数
pair<int, int> twinRandom(int min, int max);

//获取count个随机字符串，默认字符串长度为5
vector<string> getRandomStrings(int count,int len=5);

//获取count个点的坐标，在矩形[minX,minY]:[maxX,maxY]内
set<pair<int, int>> getRandomIntPoint(int minX, int maxX, int minY, int maxY, unsigned int count);

//获取count条路径，端点范围[1:n]
set<pair<int, int>> getRandomIntRoute(int n, unsigned int count);

//获取1个长度为len的随机字符串
string getRandomString(int len);

//获取[min,max]内count个随机数集合
set<int> getRandoms(int min, int max, unsigned int count);
