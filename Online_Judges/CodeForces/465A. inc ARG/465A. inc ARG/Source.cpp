#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, count = 0; string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1')count++;else {count++; break;}
	}cout << count << endl;
}