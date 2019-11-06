#include <iostream>
using namespace std;
int main (){
    int input;
    while(cin >> input){
        int output;
        for (int i = 0; i < 4; i++){
            output = input << 24 | ((255 << 8) & input) << 8 | ((255 << 16) & input) >> 8 | (input >> 24) & 255;
            cout << output << endl;
        }
        cout << input << " converts to " << output << endl;
    }
}


