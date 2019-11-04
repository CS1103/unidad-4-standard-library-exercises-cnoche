#include <iostream>
#include <string>
#include <strings.h>
#include <vector>
#include <stdio.h>
#include <map>

using namespace std;
struct team {
    char name[100];
    int pt, win, lose, tie, score, invscore;

     void record(int a, int b) {
        if(a > b){
            win++, pt += 3;
        } else if(a < b){
            lose++;
        }
        else{
            tie++, pt++;
        }
        score += a, invscore += b;
    }
    team() {pt = 0; win = 0; lose = 0; tie = 0; score = 0; invscore = 0;};
    team(string name) {name = name; pt = 0; win = 0; lose = 0; tie = 0; score = 0; invscore = 0;}
};

bool comp(team a, team b){
    if(a.pt != b.pt)
        return a.pt > b.pt;
    if(a.win != b.win)
        return a.win > b.win;
    if(a.score - a.invscore != b.score - b.invscore)
        return a.score - a.invscore > b.score - b.invscore;
    if(a.score != b.score)
        return a.score > b.score;
    if(a.win + a.lose + a.tie != b.win + b.lose + b.tie)
        return a.win + a.lose + a.tie < b.win + b.lose + b.tie;
    return strcasecmp(a.name, b.name) < 0;
}

int main (){
    int T,nteams,games;
    scanf("%d\n",&T);
    char name[100];
    char buffer[100];
    while(T--){
        string cup;
        getline(cin, cup);
        cin.ignore();
        cin >> nteams;
        for (int i = 0; i < nteams; i++){
            string name;
            getline(cin, name);
            team(name);
        }
        cin >> games;
        cin.ignore();
        while(games--){
            //falta lol
        }
    }
}
