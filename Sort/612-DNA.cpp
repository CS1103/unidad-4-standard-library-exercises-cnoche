#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<utility>
using namespace std;


int levelOfOrder(const string& string) {
    int cnt = 0;
    for (int i = 0; i < string.size(); i++){
        for (int j = i + 1; j < string.size(); j++){
            if(string[i] > string[j]) cnt++;
        }
    }
 return cnt;
}

bool cmp(const pair<int, string> one,const pair<int, string> two) {
    return one.first < two.first;
}
int main(){
    int tests;
    int sizeDNA, dnas;
    string line;
    scanf("%d",&tests);
    while (tests--){
        scanf("%d",&sizeDNA);
        scanf("%d",&dnas);
        vector<pair <int, string> > Dnas(dnas);
        for(int i = 0; i < dnas; i++){
            getline(cin, line);
            //es un par de nivel de ordenamiento y su dna respectivo
            Dnas[i]= make_pair(levelOfOrder(line),line);
        }
        //falta sortear el first de cada e imprimir el second
        if (tests){
            cout<<endl;
        }
    }
}
