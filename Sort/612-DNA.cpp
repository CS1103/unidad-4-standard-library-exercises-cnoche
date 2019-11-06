#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct {
    int in, order;
} Order;

int cmp(const void *i, const void *j) {
    Order *a, *b;
    a = (Order *)i, b = (Order *)j;
    if(a->order != b->order)
        return a->order - b->order;
    return a->in - b->in;
}
int main() {
    int tests, dnass, len_dna;
    char dna[101][101];
    scanf("%d", &tests);
    while(tests--) {
        scanf("%d %d", &len_dna, &dnass);
        Order Dnas[101];
        for(int i = 0; i < dnass; i++) {
            scanf("%s", dna[i]);
            int cnt = 0;
            for(int j = 0; j < len_dna; j++) {
                for(int k = j+1; k < len_dna; k++) {
                    if(dna[i][j] > dna[i][k]) {
                        cnt++;
                    }
                }
            }
            Dnas[i].order = cnt, Dnas[i].in = i;
        }
        qsort(Dnas, dnass, sizeof(Order), cmp);
        for(int j = 0; j < dnass; j++) {
            puts(dna[Dnas[j].in]);
        }
        if(tests)
            std::cout << std::endl;
    }
    return 0;
}
/* #include<iostream>
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
            cin.ignore();
            //es un par de nivel de ordenamiento y su dna respectivo
            Dnas[i]= make_pair(levelOfOrder(line),line);
        }
        //falta sortear el first de cada e imprimir el second
        stable_sort(Dnas.begin(), Dnas.end(), cmp);
        for (int i = 0; i < sizeDNA; i++){
            cout << Dnas[i].second.c_str();
        }
        if (tests){
            cout<<endl;
        }
    }
}
*/