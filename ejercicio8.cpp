#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<utility>
using namespace std;

bool cmp(const pair<int, string> one,const pair<int, string> two) {
    return one.first < two.first;
} 