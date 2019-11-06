#include <iostream>
#include <vector>
#include <sstream>
#include <stdlib.h>

using namespace std;

long long count;

#include <vector>
#include <iostream>
using namespace std;
long long sort(vector<int>& data) {
    if (data.size() <= 1) return;

    int mid = data.size() / 2;
    vector<int> left;
    vector<int> right;

    for (auto i  = 0; i  < mid;i ++){
        left.push_back(data[i]);
    }
    for (auto j = 0; j < (data.size()) - mid; j++){
        right.push_back(data[mid + j]);
    }
    
    count = sort(left);
    count += sort(right);
    count += mergeSort(left, right, data);
}
long long mergeSort(vector<int>& left, vector<int>& right, vector<int>& data)
{
    int nL = left.size();
    int nR = right.size();
    int mid = data.size() / 2;
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR) 
    {
        if (left[j] < right[k]) {
            data[i] = left[j];
            j++;
        }
        else {
            data[i] = right[k];
            k++;
            count=count+mid-j-1;
        }
        i++;
    }
    while (j < nL) {
        data[i] = left[j];
        j++; i++;
    }
    while (k < nR) {
        data[i] = right[k];
        k++; i++;
    }
    return count;
}
int main (){
	int val;
	vector<int> data;
	int count = 0;
	while(val != 0){
		cin >> val;
		data.push_back(val);
	}
	sort(data);
	cout << count;
}
