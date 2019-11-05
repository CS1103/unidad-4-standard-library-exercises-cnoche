#include <iostream>
#include <stdio.h>

int main (){
    int input;
    while(std::cin >> input){
        int output;
        for (int i = 0; i < 4; i++){
            output = (output << 8) | (( input >> (8*i))&256);
        }
        std::cout << input << "converts to" << output << std::endl;
    }
}


