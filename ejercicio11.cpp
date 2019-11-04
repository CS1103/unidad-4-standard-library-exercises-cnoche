#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class proy{
  public:
    string name;
    int counter;
    
    //constructores
    proy() { name = ""; counter = 0; }
    proy(string s) { name = s; counter = 0; }
};


bool comparePro (proy one, proy two){
    if(one.counter != two.counter)
        return one.counter > two.counter;
    return one.name.compare(two.name) < 0;
}

int main(){
  string line;
  vector<proy> project;
  map<string, int> Students;
  
  while (getline(cin, line)) {
    int cnt = 0;
      if (line[0] == '0') break;
      if (line[0] == '1') continue; 
    while (getline(cin, line)) {
        if(line[0] >= 'A' && line[0] <= 'Z' || line[0] == '1') {
          project.push_back(proy(line));
          cnt++;
          break;
        }
        else {
            int idx = Students[line];
            if (idx==0) {
                Students[line] = cnt;
                project[cnt-1].counter++;
            }
            else if (idx!=cnt && idx>0) {
                project[idx-1].counter--;
                Students[line] = -1;
            }
          }
        }
   }
}