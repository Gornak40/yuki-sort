#include "yuki-sort.hpp"
#include <vector>
#include <iostream>
using namespace std;


signed main() {
	int n; cin >> n;
	vector<int> arr(n);
	for (auto &el: arr)
		cin >> el;
	yuki_sort(arr.begin(), arr.end());
	for (auto el: arr)
		cout << el << ' ';
	cout << endl;
}