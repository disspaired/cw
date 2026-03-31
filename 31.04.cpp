#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 6 };

	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	for (int i = 1; i != 7; i++) {
		cout << i << " ";
	}
}  

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 6 };

	auto it = find(v.begin(), v.end(), 3);

	if (it != v.end())
		cout << "Found\n";
	else
		cout << "Not found\n";
}
