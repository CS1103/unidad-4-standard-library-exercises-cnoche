#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string ID;
    while (cin >> ID, ID != "#")
    {
        if (next_permutation(ID.begin(), ID.end()))
            cout << ID << endl;
        else
            cout << "No Successor"<<endl;
    }
}