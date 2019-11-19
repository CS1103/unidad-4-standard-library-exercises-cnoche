#include <iostream>
#include <set>
using namespace std;

int n, x, k;
int sum;
multiset<int> mset;
int main() {
    while(cin >> n, n) {
	sum = 0;
	mset.clear();
	for(int j = 0;j < n; j++) {
	    cin >> k;
	    for(int i = 0; i<k; i++) {
		cin >> x;
		mset.insert(x);
	    }

	    auto m = mset.end(), lot = mset.begin(); m--;
	    sum += (*m)-(*lot);
	    mset.erase(m); mset.erase(lot);
	}
	cout << sum << '\n';
    }
    return 0;
}