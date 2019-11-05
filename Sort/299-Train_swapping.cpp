#include <iostream>
using namespace std;

int main(){
    int test, n, array[50];
    cin >> test;
    cin.ignore();
    while(test--){
		cin >> n;
        cin.ignore();
		for(int i=0;i<n;i++){
				scanf("%d",&array[i]);
		}
        int swap = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j< n-i; j++){
                if(array[j]>array[j+1]){
                    swap++;
                    int temp;
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j] = temp;
                }
            }
        }
        cout << "optimal train swaps" << swap << endl;
    }
}