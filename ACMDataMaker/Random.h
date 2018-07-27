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
//��ȡ[min,max]�ڵ�һ�������
int getRandom(int min, int max);

//��percent %�ļ��ʷ���true
bool isLucky(int percent);

//��ȡ[min,max]�ڵ�count����ͬ������ļ���
set<int> diffRandom(int min, int max, unsigned int count);

//��ȡ[min,max]�ڵ�2����ͬ�����
pair<int, int> twinRandom(int min, int max);

//��ȡcount������ַ�����Ĭ���ַ�������Ϊ5
vector<string> getRandomStrings(int count,int len=5);

//��ȡcount��������꣬�ھ���[minX,minY]:[maxX,maxY]��
set<pair<int, int>> getRandomIntPoint(int minX, int maxX, int minY, int maxY, unsigned int count);

//��ȡcount��·�����˵㷶Χ[1:n]
set<pair<int, int>> getRandomIntRoute(int n, unsigned int count);

//��ȡ1������Ϊlen������ַ���
string getRandomString(int len);

//��ȡ[min,max]��count�����������
set<int> getRandoms(int min, int max, unsigned int count);
