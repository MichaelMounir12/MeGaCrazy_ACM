#include <iostream>
using namespace std;
int main() {
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a != b) { cout << "Happy Alex" << endl; return 0; }
	}
	cout << "Poor Alex" << endl;
}