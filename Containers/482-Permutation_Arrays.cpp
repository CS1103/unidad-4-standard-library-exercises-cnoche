#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int>one;
vector<int> res;


int main(){
    int test;
    string line;
    scanf("%d",&test);    
    while(test--){
        int n, i = 0;
        getline (cin, line);
        stringstream ss;
        ss << line;
        while(ss >> one[n]){
            n++;
        }
        cin.ignore();
        getline(cin, line);
        stringstream sss;
        sss << line;

        while(sss >> res[one[i]]) {
            i++;
        }

        for (int j = 0; i < n; i++){
            cout << res[i];
        } if (test){
            cout<<endl;
        }
    }
}